var id;
var date = new Date();
	var h1 = date.getHours();
	var m1 = date.getMinutes();
	var s1 = date.getSeconds();

	var s=s1;
	var m=m1;
	var h=h1;
function time2(obj1, obj2){


	s=s+1;
	if(s==59){
		m=m+1;
		s=0;
	}
	if (m==59){
		h=h+1;
		m=0;
	}
	var t = h+":"+m+":"+s; 
	obj1.value=t;
	obj2.value=t;
	
}

function time(){
	id = setInterval("time2(document.f1.t1, document.f1.t3)", 1000);
}


function stop(){
clearInterval(id);
}

function play(){
	time();
}


var id1;
var s2=s1;
	var m2=m1;
	var h2=h1;
function time4(obj1){

	s2=s2+1;
	if(s2==59){
		m2=m2+1;
		s2=0;
	}
	if (m2==59){
		h2=h2+1;
		m2=0;
	}
	var t = h2+":"+m2+":"+s2;
	obj1.value=t;
}

function time3(){
	id1 = setInterval("time4(document.f1.t5)", 1000);
}
var count=0;
function runstop(obj){
		count++;
		document.f1.t6.value = count;
		
	if (count%2!=0){
		clearInterval(id1);
		obj.value="пуск";
	}
	else{
		time3();
		obj.value="стоп";
	}
}

var str = "движееeeeeeeeeeeеение ";

function strr(){
	document.f1.t2.value = str;
	str = str.substring(1,str.length)+str.substring(0,1);
}



function move(){
	
	setInterval("strr()", 100);
}