function privet(){
    alert("Сообщение простое");
    rezultat = confirm("Проверим какую кнопочку вы нажали");
    if(rezultat==true){
        document.write("Вы нажали кнопку ОК");
    }else {
        document.write("Вы нажали кнопку Отмена");
    }
}

function f(){
    alert("Нравится ли вам картинка?");
}

function promt(){
    var buf = prompt("Введите имя:");
    var buf2 = prompt("Введите фамилию:");
    var buf3 = prompt("Введите отчество:");
    var buf1 = buf.substring(0,1);
    buf = buf.substring(0,1);
    buf3 = buf3.substring(0,1);
    document.write("Добрый день, <span style='color:green'>"+buf+"</span> ");
    document.write("Добрый день, "+buf2.toUpperCase()+" "+buf.toUpperCase()+"."+buf3.toUpperCase()+". Мы рады приветствовать вас на сайте ");
    document.write(location.href);
}

function back(){
    window.history.go(-1);
}

function sum(){
    var num1 = prompt("Первое число: ");
    var num2 = prompt("Второе число: ");
    var buff = num1-(-num2);
    alert(parseInt(num1)+"+"+parseInt(num2)+"="+parseInt(buff));
}

function date(){
    var date1 = new Date();
    alert(date1);
    var date2 = new Date(20,10,1999);
    alert(date2);

    var date3 = date2.getDay();
    alert ("номер дня: " +date3);

    var today = new Date(),
    inWeek = new Date();
    inWeek.setDate(today.getDate()+7);
    alert("сегодня: "+today+" Через неделю: "+inWeek);


}