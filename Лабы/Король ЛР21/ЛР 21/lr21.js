function addnumber(but){
	document.f1.z1.value = document.f1.z1.value + but.value;
}

function clearinput(){
	var d = document.f1.z1.value;
	document.f1.z1.value = d.substring(0, d.length -1);
}
var l = /[0-9][/]0/;
function equalfunc(){
	var d = document.f1.z1.value;
	document.f1.z1.value = eval(d);
	if(d.match(l)){
		document.f1.z1.value = "Делить на 0 нельзя!!";
	}
}

function sinfunc() {
	var d = document.f1.z1.value;
	document.f1.z1.value = Math.sin(d);
}

function cosfunc() {
	var d = document.f1.z1.value;
	document.f1.z1.value = Math.cos(d);
}

function lnfunc() {
	var l1 = /-/;
	var l2 = /0/;
	var d = document.f1.z1.value;
	document.f1.z1.value = Math.log(d);
	if (d.match(l1))
	{
		document.f1.z1.value = "Выход за пределы диапазона";
	}
	if (d.match(l2))
	{
		document.f1.z1.value = "Не существует";
	}
}

function sqrtfunc() {
	var l1 = /-/;

	var d = document.f1.z1.value;
	document.f1.z1.value = Math.sqrt(d);
	if (d.match(l1))
	{
		document.f1.z1.value = "Число не должно быть отрицательным";
	}

}

function xxfunc() {
	
	var d = document.f1.z1.value;
	document.f1.z1.value = 1/d;
}

function x2func() {
	
	var d = document.f1.z1.value;
	document.f1.z1.value = Math.pow(d,2);
}


function exfunc() {
	
	var d = document.f1.z1.value;
	document.f1.z1.value = Math.exp(d);
}

function x10func() {
	
	var d = document.f1.z1.value;
	document.f1.z1.value = Math.pow(10,d);
}