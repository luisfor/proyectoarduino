<!DOCTYPE html>
<html lang="es">
<head>
    <title>Proyecto Arduino</title>
    <meta charset="utf-8">
    <link rel="stylesheet" type="text/css" media="screen" href="css/reset.css">
    <link rel="stylesheet" type="text/css" media="screen" href="css/style1.css">
    <script src="js/jquery-1.7.min.js"></script>
    <script src="js/jquery.easing.1.3.js"></script>
    <script src="js/FF-cash.js"></script>
</head>
<body>

<!--==============================header=================================-->
<body>
	<div id="header">
		<div>
			<div id="navigation">
				
				

			</div>
			
			<a id="logo"><img src="images/imagen1.png" alt="LOGO"></a>
		</div>
		  &nbsp;<h1 Style: "text-align:center">Xavier Pertuz&nbsp;&nbsp;- Saddam Daniels&nbsp;&nbsp; - Alex Buelvas&nbsp;&nbsp;- Andres Narvaez&nbsp;&nbsp;</h1>
	</div>
	<div id="adbox">
		<h1>Xavi Pertuz</h1>
		
	</div>
	<div id="body">
		<div id="contents">
			<ul id="articles">
				<li>
					<h1 id="verde">Dado</h1>
					<p>
						En esta parte se presionará el botón y arrojará un número aleatorio 
					</p>
					<a href="led.php?state=1" class="more">Tirar Dado</a> <br> <a href="led.php?state=0" class="more">Apagar</a>
					<?php
						// wait 5 seconds and redirect 
						echo "<meta http-equiv=\"refresh\" content=\"10;url=http://localhost/proyectoarduino/led.php?state=2\"/>";
					?>
				</li>
			</ul>
		</div>
	</div>
	<div id="footer">
		<div class="background">
			<div class="body">
				
			</div>
		</div>
		<span id="footnote"> <h2>Xavier Pertuz &nbsp;Saddam Daniels&nbsp;  Alex Buelvas&nbsp;  Andres Narvaez</h2>&copy; 2015 | All Rights Reserved.</span>
	</div>
</body>
</html>
<!--==============================footer=================================-->
  <footer>
      <p>© 2015 <a href="#" class="link">Estudiantes de Ingenieria de Sistemas Octavo Semestre</a> por <a rel="nofollow" href="#" class="link" target="_blank">Tecnologico de Comfenalco</a></p>
  </footer>	
</body>
</html>