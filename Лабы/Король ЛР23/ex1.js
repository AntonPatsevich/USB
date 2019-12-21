$(document).ready(function(){
	var i=0;
	$("#run").click(function (){
		$("<div id="+i+"></div>").addClass("rectangle").prependTo(".panel");
		$("#"+i).animate({marginLeft:'+=290'},1000)
		.animate({marginTop:'+=210'},1000)
		.animate({marginLeft:'-=290'},1000)
		.animate({marginTop:'-=210'},1000)
		.animate({width:'+=30'},1000)
		.animate({height:'+=30'},1000)
		.animate({width:'-=30'},1000)
		.animate({height:'-=30'},1000)
		.fadeOut("slow");
		i+=1;
		$("#stop").click(function(){$("#"+(i-1)).stop(true)});
	});
});