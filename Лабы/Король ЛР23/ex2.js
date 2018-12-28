$(document).ready(function(){
	$("div.class1").click(function(){
		$(this).find("ul").slideToggle("fast");
	});
	$("div.class1").mouseleave(function(){
		$(this).find("ul").slideUp("fast");
	});
});