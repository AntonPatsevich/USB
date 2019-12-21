$(document).ready(function() {
	$("#but").click(function() {
		$("h2:not('.text')").css({
			color: 'red'
		});
		$("h1").css({
			color: 'blue',
			fontSize: '30px'
		});
	});
});