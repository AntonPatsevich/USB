function proverka(input) {
    input.value = input.value.replace(/[^\d,]/g, '');
}
function dis(){
    document.getElementById("one").disabled=true;
    document.getElementById("two").disabled=true;
    document.getElementById("three").disabled=true;
    document.getElementById("fore").disabled=true;
    document.getElementById("five").disabled=true;
    document.getElementById("six").disabled=true;
    document.getElementById("seven").disabled=true;
    document.getElementById("eight").disabled=true;
    document.getElementById("nine").disabled=true;
    document.getElementById("textbox").style.backgroundColor="red";
}

function act(){
    document.getElementById("one").disabled=false;
    document.getElementById("two").disabled=false;
    document.getElementById("three").disabled=false;
    document.getElementById("fore").disabled=false;
    document.getElementById("five").disabled=false;
    document.getElementById("six").disabled=false;
    document.getElementById("seven").disabled=false;
    document.getElementById("eight").disabled=false;
    document.getElementById("nine").disabled=false;
    document.getElementById("textbox").style.backgroundColor="green";
    
    
    var el = document.getElementById('textbox')
    var arr=[];
    var arr = el.value.split(',');
    var buf=0;


    alert(arr.length)
}