# Laboratory work nr.6
<div>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"<i>Simulation</i> means that the program must run continuously, i.e. we start it and observe the process until we explicitly finish it.<br>
No input required to start, no input required to interact with the program.<br>
Simulation is an isolated process that represents the work of a system. <br>
&nbsp;&nbsp;&nbsp;The user only affects it by changing configurations in runtime or before." <div>
<hr>
<div>I've decided to make the purpose of my simulation a real-time statistics provider for my Taxi Company Union.<br>
Here I provide the following info:
<ol><li>
Number of taxis requested
<li>Number of taxis that actually provided service
<li>Number of taxi's called during night time
<li>Number of taxi's called during day time
<li>Number of police calls
<li>Number of police assigned fines
<li>Total money collected
<li>Number of "mischevious" costumers
<li>Total distance driven
<li>Fuel consumed
<li>Total Fuel costs
<li>Good feedback numbers
<li>Bad feedback numbers
</ol>
<br>
Each statistics term is updated once every 15 scenarios.
<br>
<hr>
<b>MVC</b>
<br>
<p>Model designs based on MVC architecture follow the MVC design pattern and they separate the application logic from the user interface when designing software. As the name implies MVC pattern has three layers, which are:
</p>

<div>
<p>Model — Represents the business layer of the application</p>
<p>View — Defines the presentation of the application</p>
<p>Controller — Manages the flow of the application</p></div>
In order to implement MVC in my laboratory work, I separated my already existed classes into <code>Model</code>, <code>View</code> and <code>Controller</code>. All the data which is related to data, Business logic and calculations is seted in <code>Model</code>. <code>View</code> is responsable for UI in general and Trip statistics. <code>Controller</code> helps me to manage flow of my simulation. </div>
<hr>
<b>SOLID Principles</b>
<br>
<div>
<p>S - Single-responsiblity Principle</p>
<p>O - Open-closed Principle</p>
<p>L - Liskov Substitution Principle</p>
<p>I - Interface Segregation Principle</p>
<p>D - Dependency Inversion Principle</p></div>

