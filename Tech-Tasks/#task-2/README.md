CODE: <br />
<!DOCTYPE html> <br />
<html lang="en"> <br />
<head> <br />
    <meta charset="UTF-8"> <br />
    <meta name="viewport" content="width=device-width, initial-scale=1.0"> <br />
    <title>Task-2</title> <br />
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Oswald|Monserrat"> <br />
    <style> <br />
        * { <br />
            margin: 0; <br />
            padding: 0; <br />
            box-sizing: border-box; <br />
        } <br />
        body { <br />
            font-family: "Montserrat", sans-serif; <br />
        } <br />
        nav { <br />
            display: flex; <br />
            justify-content: space-between; <br />
            align-items: center; <br /> 
            background-color: #303030; <br />
            height: 87px; <br />
            padding: 0 20px; <br />
        } <br />
        nav img.logoicon { <br />
            height: 70px; <br />
            margin-left: 5%; <br />
        } <br /> 
        nav img.searchicon { <br />
            height: 24px; <br />
            margin-right: 3%; <br />
        } <br />
        nav ul { <br />
            display: flex; <br />
            list-style-type: none; <br />
            justify-content: space-between; <br />
        } <br />
        nav ul li { <br />
            color: #FFFFFF; <br />
            font-size: 24px; <br />
            font-family: "Oswald", sans-serif; <br />
            padding: 14px; <br />
        } <br />
        nav ul li[opacity="0"] { <br />
            opacity: 0; <br />
        } <br />
        .div1 { <br />
            background-image: url(1.png); <br />
            height: 590px; <br />
            background-size: cover; <br />
            background-position: center; <br />
            display: flex; <br />
        } <br />
        .content1 { <br />
            z-index: 1; <br />
            margin-left: 5%; <br />
            display: flex; <br />
            flex-direction: column; <br />
        } <br />
        .content1 h1 { <br />
            margin-top: 20%; <br />
            font-size: 110px; <br />
            color: white; <br />
            margin-bottom: 15px; <br />
            font-weight: normal; <br /> 
            font-family: "Oswald", sans-serif; <br /> 
        } <br />
        .content1 span { <br />
            font-size: 24px; <br /> 
            width: 45%; <br />
            color: white; <br /> 
            margin-bottom: 15px; <br />
        } <br />
        .content1 button { <br />
            background-color: #e8631c; <br />
            color: white; <br />
            border: none; <br />
            width: 260px; <br />
            padding: 10px; <br />
            font-size: 18px; <br />
            font-family: "Oswald", sans-serif; <br />
            cursor: pointer; <br />
        } <br />
        .div2 { <br />
            background-color: #e8631c; <br />
            height: 800px; <br />
            display: flex; <br />
            justify-content: center; <br />
            align-items: center; <br />
        } <br />
        .content2 { <br />
            z-index: 1; <br />
            align-items: center; <br />
        } <br />
        .columnflex { <br />
            display: flex; <br />
            align-items: center; <br />
            flex-direction: column; <br />
        } <br />
        .content2 h1 { <br />
            margin-top: 0%; <br /> 
            font-size: 60px; <br /> 
            color: white; <br /> 
            font-family: "Oswald", sans-serif; <br />
            font-weight: bold; <br />
        } <br />
        .content2 span { <br />
            font-size: 24px; <br /> 
            width: 55%; <br />
            color: white; <br />
            margin-bottom: 15px; <br />
        } <br />
        .imgdiv { <br />
            padding: 0 40px; <br />
            display: flex; <br />
            align-items: center; <br />
            justify-content: space-between; <br />
            margin-bottom: 0; <br />
        } <br />
        .imgdiv img { <br />
            height: 320px; <br />
            width: 280px; <br />
        } <br />
        .boxdiv { <br />
            padding: 0 40px; <br />
            display: flex; <br />
            align-items: center; <br />
            justify-content: space-between; <br />
            margin-top: 0; <br />
        } <br />
        .boxdiv box { <br />
            background-color: #303030; <br />
            height: 120px; <br />
            width: 280px; <br />
            justify-content: center; <br />
        } <br />
        .boxdiv box h3 { <br />
            color: white; <br />
            font-family: "Oswald", sans-serif; <br />
            font-size: 30px;     <br />
            font-weight: normal; <br />
            margin-left: 50px;    <br />
            margin-top: 10px;   <br />
        } <br />
        .boxdiv box span{ <br />
            color: white; <br />
            margin-left: 14px; <br />
            font-family: "Montserrat", sans-serif; <br />
            font-size: 20px; <br />
            font-weight: lighter;  <br />
        } <br />
        .div3 { <br />
            background-color: #303030; <br />
            height: 800px; <br />
            display: flex; <br />
            justify-content: center; <br />
            align-items: center; <br />
        } <br />
        .content3 { <br />
            z-index: 1; <br />
            align-items: center; <br />
        } <br />
        .content3 h1 { <br />
            margin-top: 0%; <br />
            font-size: 60px; <br />
            color: white; <br />
            font-family: "Oswald", sans-serif; <br />
            font-weight: bold; <br />
        } <br />
        .content3 span { <br />
            font-size: 24px; <br />
            width: 55%; <br />
            color: white; <br />
            margin-bottom: 15px; <br />
        } <br /> 
        .sectiondiv { <br />
            padding: 0 40px; <br />
            display: flex; <br />
            align-items: center; <br />
            justify-content: space-between; <br />
            margin-bottom: 0; <br />
        } <br />
        .sectiondiv box { <br />
            height: 400px; <br />
            width: 280px; <br />
            background-color: #e8631c; <br />
            display: flex; <br />
            flex-direction: column; <br />
            justify-content: space-between; <br />
            align-items: center; <br />
            border-radius: 5px; <br />
        } <br />
        .sectiondiv box img { <br />
            margin-top: 20px; <br />
        } <br />
        .sectiondiv box h3 { <br />
            color: white; <br />
            font-family: "Oswald", sans-serif; <br />
            font-size: 30px;  <br />    
            font-weight: bold; <br />
            margin-top: 10px;    <br />
        } <br />
        .sectiondiv box span{ <br />
            color: white; <br />
            width: 200px; <br />
            font-family: "Montserrat", sans-serif; <br />
            font-size: 20px; <br /> 
            font-weight: lighter;  <br />
        } <br />
        .sectiondiv box button{ <br />
            background-color: #303030; <br />
            color: white; <br /> 
            border: none; <br />
            width: 260px; <br />
            padding: 10px; <br />
            margin-bottom: 15px; <br />
            font-size: 18px; <br />
            font-family: "Oswald", sans-serif; <br />
            cursor: pointer; <br />
            border-radius: 3px; <br />
        } <br />
        .lrdiv { <br />
            height: 700px; <br />
            display: flex; <br />
        } <br /> 
        .leftdiv { <br />
            width: 50%; <br />
            background-image: url(3.png); <br />
            background-size: cover; <br /> 
            background-position: center; <br />
        } <br />
        .rightdiv2 { <br />
            width: 50%; <br />
            background-image: url(4.png); <br /> 
            background-size: cover; <br />
            background-position: center; <br />
        } <br />
        .rightdiv { <br />
            width: 50%; <br />
            background-color: #e8631c; <br />
        } <br />
        .rcontent { <br />
            z-index: 1; <br />
            margin-left: 15%; <br />
        } <br />
        .rcontent h1 { <br />
            margin-top: 60%; <br /> 
            font-size: 60px; <br />
            color: white; <br />
            font-family: "Oswald", sans-serif; <br />
            font-weight: bold; <br />
        } <br />
        .rcontent span { <br />
            font-size: 24px; <br />
            width: 20%; <br />
            color: white; <br />
        } <br />
        .rcontent button { <br />
            background-color: #303030; <br /> 
            color: white; <br />
            border: none; <br />
            width: 260px; <br />
            padding: 10px; <br />
            margin-bottom: 15px; <br />
            font-size: 18px; <br />
            font-family: "Oswald", sans-serif; <br />
            cursor: pointer; <br />
            border-radius: 3px;  <br />
        } <br />
        .div4 { <br />
            background-color: #303030; <br />
            width: 100%; <br />
            height: 700px; <br />
        } <br />
        .content4a { <br />
            align-items: center; <br />
            display: flex; <br />
            flex-direction: column; <br />
        } <br />
        .content4a h2{ <br />
            font-size: 65px; <br /> 
            font-weight: bold; <br />
            color: white; <br />
            margin-top: 11%; <br />
        } <br />
        .content4a span { <br />
            font-size: 24px; <br />
            letter-spacing: 1px; <br />
            color: white; <br />
            font-weight: 300; <br />
        } <br />
        .content4b { <br />
            display: flex; <br />
            flex-direction: row; <br />
        } <br />
        .content4b div{ <br />
            width: 33%; <br />
            align-items: center; <br />
            display: flex; <br />
            flex-direction: column; <br />
        } <br />
        .content4b div h1 { <br />
            font-family: "Oswald", sans-serif; <br />
            font-weight: bold; <br />
            color: white; <br />
            font-size: 60px; <br />
        } <br />
        .content4b div span { <br />
            font-size: 30px; <br />
            color: white; <br />
        } <br />
        .div5 { <br />
            position: relative; <br />
            background-image: url(4.png); <br />
            background-size: cover; <br />
            background-position: center; <br />
            width: 100%; <br />
            height: 850px; <br />
        } <br />
        .overlay { <br />
            position: absolute; <br />
            top: 0; <br />
            left: 0; <br />
            width: 100%; <br />
            height: 100%; <br />
            background-color: rgba(219, 81, 12, 0.493); <br />
        } <br />
        .content5 { <br />
            align-items: center; <br />
            display: flex; <br />
            flex-direction: column; <br />
            margin: 0 15%; <br />
        } <br />
        .content5 h2 {  <br />
            z-index: 1; <br />
            color: white; <br />
            font-family: "Oswald", sans-serif; <br />
            font-size: 60px; <br />
        } <br />
        .content5 span { <br />
            z-index: 1; <br />
            color: white; <br /> 
            font-size: 36px; <br />
            font-weight: 300; <br />
            letter-spacing: 1px; <br />
            width: 87%; <br />
            align-items: center; <br />
        } <br />
        .div6 { <br />
            background-color: #e8631c; <br />
            width: 100%; <br />
            height: 490px; <br />
        } <br />
        .content6 { <br />
            display: flex; <br />
            flex-direction: column; <br />
            align-items: center; <br />
        } <br />
        .content6 h2 { <br />
            color: white; <br />
            font-size: 60px; <br />
            font-family: "Oswald", sans-serif; <br />
        } <br />
        .content6 span { <br />
            color: white; <br />
            font-size: 28px; <br />
            font-weight: 300; <br />
            letter-spacing: 1px; <br />
            margin: 0 17.5%; <br />
            width: 65%; <br />
        } <br />
        .content6 input{ <br />
            background-color: white; <br />
            border-radius: 3px 0 0 3px; <br />
            height: 55px; <br />
            margin-top: 5%; <br />
            border: none; <br />
            padding-left: 20px; <br />
            width: 500px; <br />
        } <br />
        .content6 button { <br />
            background-color: #303030; <br />
            border-radius: 0 3px 3px 0; <br />
            color: white; <br />
            height: 55px; <br />
            border: none; <br />
            width: 170px; <br />
        } <br />
        .div7 { <br />
            background-color: #303030; <br />
            width: 100%; <br />
            height: 420px; <br />
        } <br />
        .content7 { <br />
            display: flex; <br />
            flex-direction: row; <br />
            justify-content: space-between; <br />
        } <br />
        .content7 div { <br />
            margin-left: 0; <br />
            color: white; <br />
            padding: 43px; <br />
        } <br />
        .content7 div h2 { <br />
            font-size: 34px; <br />
            font-weight: 500; <br />
            font-family: "Oswald", sans-serif; <br />
        } <br />
        .content7 div span { <br />
            word-wrap: break-word; <br />
            font-size: 22px; <br /> 
            font-weight: 200; <br />
            letter-spacing: 1px; <br />
            padding: 5px; <br />
        } <br />
    </style> <br />
</head> <br />
<body> <br />
    <nav> <br />
        <img class="logoicon" src="6.png" alt=""> <br />
        <ul> <br />
            <li opacity="0"></li> <br />
            <li>HOME</li> <br />
            <li>PRODUCT</li> <br />
            <li>PROMO</li> <br />
            <li>ABOUT</li> <br />
            <li>CONTACT</li> <br />
            <li opacity="0"></li> <br />
        </ul> <br />
        <img class="searchicon" src="7.png" alt=""> <br />
    </nav> <br />
    <div class="div1"> <br />
        <div class="content1"> <br />
            <h1>Title Here</h1> <br />
            <span>Lorem ipsum dolor, sit amet consectetur adipisicing elit.  Nobis reiciendis commodi facilis deserunt eligendi.</span> <br />
            <br>  <br />
            <button>REGISTER NOW</button> <br />
        </div> <br />
    </div> <br />
    <div class="div2"> <br />
        <div class="content2"> <br />
            <div class="columnflex"> <br />
                <h1>DANCE TOUR</h1> <br />
                <span>Lorem ipsum dolor, sit amet consectetur adipisicing elit. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Labore eum perspiciatis officiis minima quis.</span> <br />
            </div> <br />
            <br> <br />
            <div class="imgdiv"> <br />
                <img src="2.png" alt=""> <br />
                <img src="3.png" alt=""> <br />
                <img src="4.png" alt=""> <br />
            </div> <br />
            <div class="boxdiv"> <br />
                <box><h3>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;AMERICA</h3><span>Lorem ipsum dolor sit amet &nbsp;&nbsp;&nbsp;&nbsp consectetur adipisicing.</span></box> <br />
                <box><h3>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ASIA</h3><span>Lorem ipsum dolor sit amet &nbsp;&nbsp;&nbsp;&nbsp; consectetur adipisicing.</span></box> <br />
                <box><h3>&nbsp;&nbsp;&nbsp;&nbsp;AUSTRALIA</h3><span>Lorem ipsum dolor sit amet &nbsp;&nbsp;&nbsp;&nbsp; consectetur adipisicing.</span></box> <br />
            </div> <br />
        </div> <br />
    </div> <br />
    <div class="div3"> <br />
    <div class="content3"> <br />
        <div class="content2"> <br />
            <div class="columnflex"> <br />
                <h1>PRICING</h1> <br />
                <span>Lorem ipsum dolor, sit amet consectetur adipisicing elit. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Labore eum perspiciatis officiis minima quis.</span> <br />
            </div> <br> <br />
            <div class="sectiondiv"> <br />
                <box> <br />
                    <img src="5.png" alt="" height="120px" width="100px"> <br />
                    <h3>BASIC</h3> <br />
                    <span>Lorem ipsum dolor sit amet consectetur adipisicing elit.</span> <br />
                    <button>&dollar;150.00</button> <br />
                </box> <br />
                <box> <br />
                    <img src="5.png" alt="" height="120px" width="100px"> <br />
                    <h3>PROFESSIONAL</h3> <br />
                    <span>Lorem ipsum dolor sit amet consectetur adipisicing elit.</span> <br />
                    <button>&dollar;200.00</button> <br />
                </box> <br />
                <box> <br />
                    <img src="5.png" alt="" height="120px" width="100px"> <br />
                    <h3>ULTIMATE</h3> <br />
                    <span>Lorem, ipsum dolor sit amet consectetur adipisicing elit.</span> <br />
                    <button>&dollar;250.00</button> <br />
                </box> <br />
            </div> <br />
        </div> <br />
    </div> <br />
    </div> <br />
    <div class="lrdiv"> <br />
        <div class="leftdiv"> <br />
        </div> <br />
        <div class="rightdiv"> <br />
            <div class="rcontent"> <br />
                <h1>AMAZING DANCE</h1> <br> <br> <br /> 
                <span>Lorem ipsum dolor sit amet, consectetur adipisicing elit. A, asperiores eius? Cum, placeat facere!</span> <br />
                <br> <br> <br> <br />
                <button>READ MORE</button> <br />
            </div> <br />
        </div> <br />
    </div> <br />
    <div class="lrdiv"> <br />
        <div class="rightdiv"> <br />
            <div class="rcontent"> <br />
                <h1>BEST DANCE</h1> <br> <br> <br />
                <span>Lorem ipsum dolor sit amet, consectetur adipisicing elit. A, asperiores eius? Cum, placeat facere!</span> <br />
                <br> <br> <br> <br />
                <button>READ MORE</button> <br />
            </div> <br />
        </div> <br />
        <div class="rightdiv2"> <br />
        </div> <br />
    </div> <br />
    <div class="div4"> <br />
        <div class="content4a"> <br />
            <h2>OUR STATISTICS</h2> <br> <br />
            <span>Lorem ipsum dolor sit amet consectetur adipisicing elit. Soluta </span><span> nostrum a aspernatur. Maxime, praesentium?</span> <br />
        </div> <br />
        <br> <br><br><br> <br />
        <div class="content4b"> <br />
            <div> <br />
                <h1>1240+</h1> <br />
                <span>Club</span> <br />
            </div> <br />
            <div> <br />
                <h1>2000+</h1> <br />
                <span>Active Member</span> <br />
            </div> <br />
            <div> <br />
                <h1>1000+</h1> <br />
                <span>Community</span> <br />
            </div> <br />
        </div> <br />
    </div> <br />
    <div class="div5"> <div class="overlay"></div> <br />
        <div class="content5"> <br />
            <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br> <br />
            <span>Lorem, ipsum dolor sit amet consectetur  </span><span>adipisicing elit. In quod molestias eius </span><span> facere ipsa?</span> <br />
            <br> <br> <br />
            <h2>HERBERT SIMON</h2> <br />
        </div> <br />
    </div> <br />
    <div class="div6"> <br />
        <div class="content6"> <br><br><br><br><br> <br />
            <h2>SUBSCRIBE</h2> <br> <br />
            <span>Lorem ipsum dolor sit amet consectetur adipisicing elit. Akin laborum quas accusantium corporis ipsanil libero?</span> <br> <br />
            <div><input type="text" placeholder="Your Email"><button>SUBSCRIBE</button></div> <br />
        </div> <br />
    </div> <br />
    <div class="div7"> <br />
        <div class="content7"> <br />
            <div> <br><br> <br />
                <h2>MUSICOLOGY</h2> <br />
                <span> <br>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Id eum in similique voluptas explicabo tempora cum nostrum laboriosam, nesciunt illo nam ipsum? <br><br></span> <br />
                <img src="11.png" alt=""> <br />
                <img src="10.png" alt=""> <br />
                <img src="9.png" alt=""> <br />
                <img src="8.png" alt=""> <br />
            </div> <br />
            <div> <br><br> <br />
                <h2>ABOUT</h2> <br />
                <span><br> History <br> Our Team <br> Brand Guidlines <br> Terms&Conditions <br> Privacy Policy</span> <br />
            </div> <br />
            <div> <br><br> <br />
                <h2>SERVICES</h2> <br />
                <span> <br> How to Ordr<br> Our Product <br> Order Status <br> Promo <br> Payment Method</span> <br />
            </div> <br />
            <div> <br><br> <br />
                <h2>OTHER</h2> <br />
                <span> <br> Contact Us <br> Help <br> Privacy</span> <br />
            </div> <br />
        </div> <br />
    </div> <br />
</body> <br />
</html> <br />
