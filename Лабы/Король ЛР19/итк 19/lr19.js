var re =/^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
function CheckForm(UserForm)
{
    var is_ok = true;
    if (UserForm.name.value == '')
    {
 	   is_ok = false;
 	   alert("Введите ваше имя!!");
	    UserForm.name.focus();
    }
    if (UserForm.Comment.value == '')
    {
	    is_ok = false;
	    alert("Введите ваши коммениарии!");
	    UserForm.Comment.focus();
    }

    if (UserForm.email.value == '')
    {
 	   is_ok = false;
	    alert("Введите ваш e-mail!");
	    UserForm.email.focus();
}

	if (!re.test(UserForm.email.value))
	{
		is_ok=false;
		alert('Неверный e-mail');
		 UserForm.email.focus();
		
	}


return is_ok;
    }
/*ПРИМЕР 2*/
   var s=0
function move()
{
 if (s!=3) 
  {var a=f.left.value
   f.right.options[s].text=a
   f.left.options[s].text=''
   s=s+1

    }
 else
  {alert("Максимум три предмета")}
}
function del()
{
 if (s>=1)
  {f.right.options[s-1].text=''
   s=s-1}
}




function pr3(){

	var vv = document.getElementsByClassName("chch");
	
	
		for(var i=0; i<vv.length; i++)
		{
			if (vv[i].checked) {
				document.f4.ta1.value =document.f4.ta1.value +" "+ vv[i].value;
			}
		}
	
}