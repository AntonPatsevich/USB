$(document).ready(function () {
$("#but1").click(function () {
$("#test").hide();
});


$("#but").click(function () {
	$("#test").show();
});


$("#db").dblclick(function() {
	$("#cent").hide();
});

$("#dbShow").dblclick(function() {
	$("#cent").show();
});



$(window).resize(function() {
	$("[href]").hide();
});

$("[name=inputText]").keypress(function() {
	for(i=0; i<9; i++){
        for(j=0; j<9; j++)
        {
            color1 = Math.round(255.0*Math.random());
	        r = color1.toString(16);
	        color2 = Math.round(255.0*Math.random());
	        g = color2.toString(16);
	        color3 = Math.round(255.0*Math.random());
            b = color3.toString(16);
}}      
  $("[name=inputText]").css("background-color", '#'+r+g+b);

});








});
