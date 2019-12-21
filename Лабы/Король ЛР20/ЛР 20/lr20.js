//Инициализация пустого массива
var imLibr=new Array();
imLibr["image1"]= new Image(120,90);
imLibr["image1"].src= "images/1.jpg";
imLibr["image2"]= new Image(120,90);
imLibr["image2"].src= "images/2.jpg";
imLibr["image3"]= new Image(120,90);
imLibr["image3"].src= "images/3.jpg";
imLibr["image4"]= new Image(120,90);
imLibr["image4"].src= "images/4.jpg";
//Загрузка выбранного изображения
function loadIm1()
{ 
	document.thum.src = imLibr["image1"].src;
}

function loadIm2()
{
	document.thum.src = imLibr["image2"].src;
}

function loadIm3()
{ 
	document.thum.src = imLibr["image3"].src;
}

function loadIm4()
{
	document.thum.src = imLibr["image4"].src;
}

//
function menu(obg)
{
	if (document.all["menu1"].style.visibility=="visible") {
		document.all["menu1"].style.visibility="hidden";
	}
	else {
		document.all["menu1"].style.visibility="visible";
	}
}

function menu2()
{
	if (document.all["menu2"].style.visibility=="visible") {
		document.all["menu2"].style.visibility="hidden";
	}
	else {
		document.all["menu2"].style.visibility="visible";
	}
}

function menu3()
{
	if (document.all["menu3"].style.visibility=="visible") {
		document.all["menu3"].style.visibility="hidden";
	}
	else {
		document.all["menu3"].style.visibility="visible";
	}
	
}

function img(){
	document.img2.height = document.img2.height - 1;
	document.img2.width = document.img2.width - 1;
	
}
var id1;
function img1(){
	id1 = setInterval("img()",600);
}

function img2(){
	clearInterval(id1);
}

