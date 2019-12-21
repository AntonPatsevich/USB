function but1(){
        var textboxxx = document.createElement('INPUT');
        textboxxx.setAttribute("type","text")
        textboxxx.setAttribute("value","Ку-ку")
        textboxxx.setAttribute("id","textbox")
        document.body.appendChild(textboxxx);


        var sp2 = document.getElementById("justbut");
        var parentDiv = sp2.parentNode;
        parentDiv.insertBefore(textboxxx, sp2);
}

function but2(){
    var x = document.getElementById('textbox');
        x.parentNode.removeChild(x);
}

function navigate(){
        window.open("info.html", '_blank', 'resizable=0,height=100,width=600');
}