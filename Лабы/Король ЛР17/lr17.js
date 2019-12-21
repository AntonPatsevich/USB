function time(){
	var date = new Date();

	if (date.getHours()>=7 && date.getHours()<12) {
		document.getElementById('p1').innerHTML="Доброе утро";
	}
	else if (date.getHours()>=12 && date.getHours()<17){
		document.getElementById('p1').innerHTML="Добрый день";
	}
	else if (date.getHours()>=17 && date.getHours()<0){
		document.getElementById('p1').innerHTML="Добрый вечер";
	}
	else if (date.getHours()>=0 && date.getHours()<7){
		document.getElementById('p1').innerHTML="Доброй ночи";
	}

}

function rez(){
	var x1 = document.f1.t1.value*1;
	var x2 = document.f1.t2.value*1;
	var step = document.f1.t3.value*1;
	znach = new Array();
	func = new Array();
	
	if (x1>0 && x2>0 && step>0){
		if (x1<x2){
			if (step<(x2-x1)) {
				document.getElementById('p2').innerHTML = "+++";
				for (var i=x1; i<x2; i=i+step)
				{
					znach.push(i);
					var z=(1/i*Math.sqrt(i));
					func.push(z);
				}
				
			
			}
			else {document.getElementById('p2').innerHTML = "Шаг не должен быть больше разницы между х2 и х1";}
		}
		else {document.getElementById('p2').innerHTML = "Начальное значение должно быть меньше конечного";}
	}
else {document.getElementById('p2').innerHTML = "Числа должны быть больше 0";}

for (var i=0; i<znach.length; i++)
{
	var pp = document.createElement('p');
	pp.innerHTML = znach[i];
	document.getElementById('list1').appendChild(pp);
}
	
for (var i=0; i<func.length; i++)
{
	var pp = document.createElement('p');
	pp.innerHTML = func[i];
	document.getElementById('list').appendChild(pp);
}
}