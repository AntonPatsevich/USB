function changeP(){
    document.getElementById("1").innerHTML = "Изменённый текст"
    document.getElementById('1').style.color = 'red';
}

function first(){
    if(document.getElementById('firstID').style.color == 'white')
    {
    document.getElementById('firstID').style.color = 'black';
    document.getElementById('firstID').style.backgroundColor = 'yellow';
    }else{
        document.getElementById('firstID').style.color = 'white';
        document.getElementById('firstID').style.backgroundColor = 'blue';
    }
}

function three(){
    if(document.getElementById('threeID').style.color == 'white')
    {
    document.getElementById('threeID').style.color = 'black';
    document.getElementById('threeID').style.backgroundColor = 'yellow';
    }else{
        document.all('threeID').style.color = 'white';
        document.getElementById('threeID').style.backgroundColor = 'blue';
    }
}

function two(){
    if(document.all.twoID.style.color == 'red')
    {
    document.all.twoID.style.color = 'white';
    document.all.twoID.style.backgroundColor = 'green';
    }else{
        document.all.twoID.style.color = 'red';
        document.all.twoID.style.backgroundColor = 'white';
    }
}

function button1(){
	var pp = document.createElement('p');
	pp.innerHTML = document.f1.t1.value;
	document.getElementById('list').appendChild(pp);
}

function tab(){
    document.write("<table>");
    for(i=0; i<9; i++){
        for(j=0; j<9; j++)
        {
            color1 = Math.round(255.0*Math.random());
	        r = color1.toString(16);
	        color2 = Math.round(255.0*Math.random());
	        g = color2.toString(16);
	        color3 = Math.round(255.0*Math.random());
            b = color3.toString(16);
            document.write("<td width=60px bgcolor='#"+r+g+b+"'> #"+r+g+b+"</td>");
        }
            document.write("</tr>");
        }
    }
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