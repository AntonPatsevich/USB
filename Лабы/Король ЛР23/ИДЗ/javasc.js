$(document).ready(function() {
	$("#but1").click(function() {
		$('a').eq(1).css({
			color: 'red'
		});
	});
	$("#but2").click(function() {
		$('.row').prev().css({
			fontSize: '40px'
		});
	});
	$('#but3').click(function() {
		$("h2").fadeOut(2000)
	});
		
});