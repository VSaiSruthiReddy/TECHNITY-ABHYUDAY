HTML CODE:
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Task-1</title>
    <link rel="stylesheet" type="text/css" href="index.css">
</head>
<body>
    <nav>
        <h1>Create.co</h1>
        <ul>
            <li>Home</li>
            <li>Service</li>
            <li>Team</li>
            <li>Blog</li>
            <li>Contact Us</li>
            <li style="opacity: 0;">....</li>
            <li>Login</li>
            <li><button>Getting Started</button></li>
        </ul>
    </nav>
    <div class="matterbox">
        <div class="matter">
            <h2>Grow your Business With <span>Social Media Marketing</span></h2><br>
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. At dolore exercitationem dolorum possimus rerum molestias maxime consectetur tenetur provident ea?</p>
            <div><input type="text" placeholder="Email Address"><button>Learn More</button></div>
        </div>
        <div>
            <img src="BASE.jpg" alt="Image" height="490px" width="720px" >
        </div>
    </div>
    <div class="icons">
        <i class="fab fa-instagram"></i>
        <i class="fab fa-facebook"></i>
        <i class="fab fa-twitter"></i>
        <i class="fab fa-youtube"></i>
        <i class="fab fa-whatsapp"></i>
    </div>
</body>
</html>

CSS CODE:
* {
    margin: 0;
    background-color: #e3f0ff;
    font-family: "Montserrat", sans-serif;
}
nav h1 {
    color: #2d2c62;
}
nav {
    margin: 3% 5% 2% 5%;
    display: flex;
    width: 90%;
    justify-content: space-between;
    align-items: center;
}
nav ul {
    
    display: flex;
    list-style-type: none;
    font-size: 14px;
    width: 70%;
    justify-content: space-between;
}
nav ul li {
    display: flex;
    align-items: center;
    color: #2d2c62;
}
nav ul li button {
    height: 42px;
    width: 150px;
    background-color: #5654b3;
    color: white;
    border-radius: 4px;
    border: none;
}
.matterbox {
    display: flex;
    margin: 0% 0% 0% 5%;
    
}
.matter h2 {
    margin-top: 18%;
    color: #2d2c62;
    font-size: 40px;
}
.matter h2 span {
    color: #fa676d;
}
.matter p {
    color: #706f84;
    font-size: 14px;
}
.matter input{
    background-color: white;
    border-radius: 3px 0 0 3px;
    height: 40px;
    margin-top: 5%;
    border: none;
    padding-left: 20px;
}
.matter button {
    background-color: #5654b3;
    border-radius: 0 3px 3px 0;
    color: white;
    height: 40px;
    border: none;
    width: 130px;
}
.icons {
    margin: 0% 5%;
}
.icons i {
    margin: 0px 5px;
}        
.fab {
    font-size: 16px;
    padding: 6px;
    color: #ffffff;
    border-radius: 3px;
    background-color: #5654b3;
}
