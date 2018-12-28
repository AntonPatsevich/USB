
  
  function validate(form) {
    var elems = form.elements;


    if (!elems.upload.value) {
      alert(' Выберите файл.');
    }


    if (!elems.fileName.value) {
      alert(' Введите название файла.');
    }
    var str = elems.fileName.value;
    var first = str.charAt(0);
    if(str.match(/[0-9]/)){
        alert("Первый символ цифра")
    }


    if (!elems.fileNamee.value) {
      alert(' Введите краткое описание.');
    }

    if(!document.getElementById('radone').checked&&!document.getElementById('radtwo').checked&&!document.getElementById('radthree').checked) {
        alert("Введите размер")
      }
    if(elems.upload.value&&elems.fileName.value&&!str.match(/[0-9]/)&&elems.fileNamee.value){
        var istrue = confirm("Вы действительно хотите сохранить?");
        if(istrue)
            location.reload(true)
        else{
            
        }
    }
  }