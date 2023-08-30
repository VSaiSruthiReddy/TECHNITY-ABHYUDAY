HTML CODE: <br />
<!DOCTYPE html> <br />
<html lang="en"> <br />
<head> <br />
    <meta charset="UTF-8"> <br />
    <meta name="viewport" content="width=device-width, initial-scale=1.0"> <br />
    <title>Task-1</title> <br />
    <link rel="stylesheet" type="text/css" href="index.css"> <br />
</head> <br />
<body> <br />
    <nav> <br />
        <h1>Create.co</h1> <br />
        <ul> <br />
            <li>Home</li> <br />
            <li>Service</li> <br />
            <li>Team</li> <br />
            <li>Blog</li> <br />
            <li>Contact Us</li> <br />
            <li style="opacity: 0;">....</li> <br />
            <li>Login</li> <br />
            <li><button>Getting Started</button></li> <br />
        </ul> <br />
    </nav> <br />
    <div class="matterbox"> <br /> 
        <div class="matter"> <br />
            <h2>Grow your Business With <span>Social Media Marketing</span></h2><br> <br />
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. At dolore exercitationem dolorum possimus rerum molestias maxime consectetur tenetur provident ea?</p> <br />
            <div><input type="text" placeholder="Email Address"><button>Learn More</button></div> <br />
        </div> <br />
        <div> <br />
            <img src="BASE.jpg" alt="Image" height="490px" width="720px" > <br />
        </div> <br />
    </div> <br />
    <div class="icons"> <br />
        <i class="fab fa-instagram"></i> <br />
        <i class="fab fa-facebook"></i> <br />
        <i class="fab fa-twitter"></i> <br />
        <i class="fab fa-youtube"></i> <br />
        <i class="fab fa-whatsapp"></i> <br />
    </div> <br />
</body> <br />
</html> <br />
<br />
CSS CODE: <br />
* { <br />
    margin: 0; <br />
    background-color: #e3f0ff; <br />
    font-family: "Montserrat", sans-serif; <br />
} <br />
nav h1 { <br />
    color: #2d2c62; <br />
} <br />
nav { <br /> 
    margin: 3% 5% 2% 5%; <br />
    display: flex; <br />
    width: 90%; <br />
    justify-content: space-between; <br />
    align-items: center; <br />
} <br />
nav ul { <br />
    <br />
    display: flex; <br />
    list-style-type: none; <br />
    font-size: 14px; <br />
    width: 70%; <br />
    justify-content: space-between; <br />
} <br />
nav ul li { <br />
    display: flex; <br />
    align-items: center; <br />
    color: #2d2c62; <br />
} <br />
nav ul li button { <br />
    height: 42px; <br />
    width: 150px; <br />
    background-color: #5654b3; <br />
    color: white; <br />
    border-radius: 4px; <br />
    border: none; <br />
} <br />
.matterbox { <br />
    display: flex; <br />
    margin: 0% 0% 0% 5%;  <br />
    <br />
} <br />
.matter h2 { <br />
    margin-top: 18%; <br />
    color: #2d2c62; <br />
    font-size: 40px; <br />
} <br />
.matter h2 span { <br />
    color: #fa676d; <br />
} <br />
.matter p { <br />
    color: #706f84; <br />
    font-size: 14px; <br />
} <br />
.matter input{ <br />
    background-color: white; <br />
    border-radius: 3px 0 0 3px; <br />
    height: 40px; <br />
    margin-top: 5%; <br />
    border: none; <br />
    padding-left: 20px; <br />
} <br />
.matter button { <br />
    background-color: #5654b3; <br />
    border-radius: 0 3px 3px 0; <br />
    color: white; <br />
    height: 40px; <br />
    border: none; <br />
    width: 130px; <br />
} <br />
.icons { <br />
    margin: 0% 5%; <br />
} <br />
.icons i { <br />
    margin: 0px 5px; <br />
}        <br />
.fab { <br />
    font-size: 16px; <br />
    padding: 6px; <br />
    color: #ffffff; <br />
    border-radius: 3px; <br />
    background-color: #5654b3; <br />
} <br />
