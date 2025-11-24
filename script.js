
function checkStrength(){
    let pwd = document.getElementById("password").value;
    let result = document.getElementById("result");

    let strength = 0;
    if(pwd.length >= 8) strength++;
    if(/[A-Z]/.test(pwd)) strength++;
    if(/[a-z]/.test(pwd)) strength++;
    if(/[0-9]/.test(pwd)) strength++;
    if(/[@$!%*?&#]/.test(pwd)) strength++;

    let msg = "";

    if(strength <= 2) msg = "Weak";
    else if(strength == 3) msg = "Medium";
    else msg = "Strong";

    result.innerText = "Strength: " + msg;
}
