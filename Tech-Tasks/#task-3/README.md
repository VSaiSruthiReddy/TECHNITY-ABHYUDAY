HTML CODE: <br /> 
<!DOCTYPE html>  <br />
<html lang="en"> <br />
<head> <br />
  <meta charset="UTF-8"> <br />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"> <br />
  <title>Unique Form Design</title> <br />
  <link rel="stylesheet" href="style.css"> <br />
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.1/css/all.min.css" /> <br />
</head> <br />
<body> <br />
  <form action="thank-you.html"> <br />
    <h2>Create Your Account</h2> <br />
    <div class="form-group full-name"> <br />
      <label for="full-name">Full Name</label> <br />
      <input type="text" id="full-name" placeholder="Your full name"> <br />
    </div> <br />
    <div class="form-group email"> <br />
      <label for="email">Email Address</label> <br />
      <input type="email" id="email" placeholder="Your email address"> <br />
    </div> <br />
    <div class="form-group password"> <br />
      <label for="password">Create Password</label> <br />
      <input type="password" id="password" placeholder="Choose a strong password"> <br />
      <i id="pass-toggle-btn" class="fa-solid fa-eye"></i> <br />
    </div> <br /> 
    <div class="form-group birthdate"> <br />
      <label for="birthdate">Birth Date</label> <br />
      <input type="date" id="birthdate"> <br />
    </div> <br />
    <div class="form-group gender"> <br />
      <label for="gender">Gender</label> <br />
      <select id="gender"> <br />
        <option value="" selected disabled>Select your gender</option> <br />
        <option value="Male">Male</option> <br />
        <option value="Female">Female</option> <br />
        <option value="Other">Other</option> <br />
      </select> <br />
    </div> <br />
    <div class="form-group submit-btn"> <br />
      <input type="submit" value="Sign Up"> <br />
    </div> <br />
  </form> <br />
  <script src="script.js"></script> <br />
</body> <br />
</html> <br />
<br />
<br />
CSS CODE: <br />
@import url('https://fonts.googleapis.com/css2?family=Open+Sans:wght@400;500;600;700&display=swap'); <br />
 <br />
* { <br />
  margin: 0; <br /> 
  padding: 0; <br />
  box-sizing: border-box; <br />
  font-family: 'Open Sans', sans-serif; <br />
} <br />
 <br />
body { <br />
  display: flex; <br />
  align-items: center; <br />
  justify-content: center; <br />
  min-height: 100vh; <br />
  padding: 0 10px; <br />
  background: #44355B; <br />
} <br />
 <br />
form { <br />
  padding: 25px; <br />
  background: #fff; <br />
  max-width: 500px; <br />
  width: 100%; <br />
  border-radius: 10px; <br />
  box-shadow: 0 10px 20px rgba(0, 0, 0, 0.1); <br />
} <br />
 <br />
form h2 { <br />
  font-size: 30px; <br />
  text-align: center; <br />
  margin: 0px 0 30px; <br />
  color: #E75A7C; <br />
} <br />
 <br />
form .form-group { <br />
  margin-bottom: 20px; <br />
  position: relative; <br />
} <br />
 <br />
form label { <br />
  display: block; <br />
  font-size: 16px; <br />
  margin-bottom: 10px; <br />
  color: #6E7494; <br />
} <br />
 <br />
form input, <br />
form select { <br />
  height: 50px; <br />
  padding: 12px; <br />
  width: 100%; <br /> 
  font-size: 16px; <br /> 
  outline: none; <br />
  background: #F4F6F9; <br />
  border-radius: 5px; <br />
  border: 1px solid #D2D6E4; <br />
  color: #414E6E; <br />
} <br />
 <br />
form input:focus, <br />
form select:focus { <br />
  border-color: #9A8DA7; <br />
} <br />
 <br />
form input.error, <br />
form select.error { <br />
  border-color: #E75A7C; <br />
  background: #FEE2E5; <br /> 
} <br />
 <br />
form small { <br />
  font-size: 14px; <br /> 
  margin-top: 5px; <br />
  display: block; <br />
  color: #E75A7C; <br />
} <br />
 <br />
form .password i { <br />
  position: absolute; <br /> 
  right: 0; <br />
  height: 50px; <br />
  top: 35px; <br />
  font-size: 15px; <br />
  line-height: 50px; <br />
  width: 50px; <br />
  cursor: pointer; <br />
  color: #6E7494; <br />
  text-align: center; <br />
} <br />
 <br />
.submit-btn { <br />
  margin-top: 30px; <br />
} <br />
 <br />
.submit-btn input { <br />
  color: white; <br />
  border: none; <br />
  height: auto; <br /> 
  font-size: 18px; <br /> 
  padding: 15px 0; <br />
  border-radius: 7px; <br />
  cursor: pointer; <br />
  font-weight: 600; <br />
  text-align: center; <br />
  background: #E75A7C; <br />
  transition: 0.2s ease; <br />
} <br />
 <br />
.submit-btn input:hover { <br />
  background: #E34768; <br />
} <br />
<br />
<br />
JAVASCRIPT CODE:





