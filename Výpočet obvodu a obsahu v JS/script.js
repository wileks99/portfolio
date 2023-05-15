 function vyber() {
    if (document.getElementById('ctverec').checked) {
        document.getElementById('1').style.display = "block";
        document.getElementById('2').style.display = "none";
        document.getElementById('3').style.display = "none";
        document.getElementById('4').style.display = "none";
        document.getElementById('5').style.display = "none";
        document.getElementById('6').style.display = "none";
        document.getElementById('7').style.display = "none";        
    }

    if (document.getElementById('obdelnik').checked) {
        document.getElementById('1').style.display = "none";
        document.getElementById('2').style.display = "block";
        document.getElementById('3').style.display = "none";
        document.getElementById('4').style.display = "none";
        document.getElementById('5').style.display = "none";
        document.getElementById('6').style.display = "none";
        document.getElementById('7').style.display = "none";    
    }

    if (document.getElementById('trojuhelnik').checked) {
        document.getElementById('1').style.display = "none";
        document.getElementById('2').style.display = "none";
        document.getElementById('3').style.display = "block";
        document.getElementById('4').style.display = "none";
        document.getElementById('5').style.display = "none";
        document.getElementById('6').style.display = "none";
        document.getElementById('7').style.display = "none";    
    }    

    if (document.getElementById('kruh').checked) {
        document.getElementById('1').style.display = "none";
        document.getElementById('2').style.display = "none";
        document.getElementById('3').style.display = "none";
        document.getElementById('4').style.display = "block";
        document.getElementById('5').style.display = "none";
        document.getElementById('6').style.display = "none";
        document.getElementById('7').style.display = "none";    
    }

    if (document.getElementById('krychle').checked) {
        document.getElementById('1').style.display = "none";
        document.getElementById('2').style.display = "none";
        document.getElementById('3').style.display = "none";
        document.getElementById('4').style.display = "none";
        document.getElementById('5').style.display = "block";
        document.getElementById('6').style.display = "none";
        document.getElementById('7').style.display = "none";    
    }

    if (document.getElementById('kvadr').checked) {
        document.getElementById('1').style.display = "none";
        document.getElementById('2').style.display = "none";
        document.getElementById('3').style.display = "none";
        document.getElementById('4').style.display = "none";
        document.getElementById('5').style.display = "none";
        document.getElementById('6').style.display = "block";
        document.getElementById('7').style.display = "none";    
    }

    if (document.getElementById('valec').checked) {
        document.getElementById('1').style.display = "none";
        document.getElementById('2').style.display = "none";
        document.getElementById('3').style.display = "none";
        document.getElementById('4').style.display = "none";
        document.getElementById('5').style.display = "none";
        document.getElementById('6').style.display = "none";
        document.getElementById('7').style.display = "block";    
    }
}

function ctverec(a) {
    var a;
    var obvod;
    var obsah;

    if (a<=0) {
        alert("Zadal jsi neplatne hodnoty!");
    }

    else {
    obvod = 4*a;
    obsah = a*a;

    document.getElementById('obvod').innerHTML= obvod;
    document.getElementById('obsah').innerHTML= obsah;
        }
}

function obdelnik(a, b) {
    var a;
    var b;
    var obvod;
    var obsah;

    if (a<=0 || b<=0) {
        alert("Zadal jsi neplatne hodnoty!");
    }

    else {
    obvod = 2*a + 2*b;
    obsah = a*b;

    document.getElementById('obvod').innerHTML= obvod;
    document.getElementById('obsah').innerHTML= obsah;
        }
}

function trojuhelnik(a,b,c) {
    var a;
    var b;
    var c;

    obvod = eval(a) + eval(b) + eval(c);
    s = eval(obvod)/2;
    obsah = Math.sqrt(eval(s) * (eval(s)-eval(a)) * (eval(s)-eval(b)) * (eval(s)-eval(c)));
    if (a>0 & b>0 & c>0) {
    
    document.getElementById('obvod').innerHTML = obvod;
    document.getElementById('obsah').innerHTML = obsah;
    }

    else {
        alert("Zadal jsi neplatne hodnoty!");
    }
        }


function kruh(r) {
    var r;
    var obvod;
    var obsah;

    if (r<=0) {
        alert("Zadal jsi neplatne hodnoty!");
    }

    else {
    obvod = 2*Math.PI*r;
    obsah = Math.PI*r*r;

    document.getElementById('obvod').innerHTML= obvod;
    document.getElementById('obsah').innerHTML= obsah;
        }
}

function krychle(a) {
    var a;
    var objem;
    var povrch;

    if (a<=0) {
        alert("Zadal jsi neplatne hodnoty!");
    }

    else {
    objem = a*a*a;
    povrch = 6*a*a;

    document.getElementById('obvod').innerHTML= objem;
    document.getElementById('obsah').innerHTML= povrch;
        }
}

function kvadr(a, b, c) {
    var a;
    var b;
    var c;
    var objem;
    var povrch;

    if (a<=0 || b<=0 || c<=0) {
        alert("Zadal jsi neplatne hodnoty!");
    }

    else {
    objem = a*b*c;
    povrch = 2*(a*b + a*c + b*c);

    document.getElementById('obvod').innerHTML= objem;
    document.getElementById('obsah').innerHTML= povrch;
        }
}

function valec(r, v) {
    var r;
    var v;
    var objem;
    var povrch;

    if (r<=0 || v<=0) {
        alert("Zadal jsi neplatne hodnoty!");
    }

    else {
    objem = Math.PI * (r*r) * v;
    povrch = 2 * Math.PI * r *(eval(r) + eval(v));

    document.getElementById('obvod').innerHTML= objem;
    document.getElementById('obsah').innerHTML= povrch;
        }
}

function zobraz_ctverec() {
    document.getElementById("object").innerHTML ="<img src='picture/ctverec.jpg' height='200px' width='200px'>"
}

function zneviditelni_ctverec() {
    document.getElementById("object").innerHTML ="<img src=''>"
}

function zobraz_obdelnik() {
    document.getElementById("object").innerHTML ="<img src='picture/obdelnik.png' height='200px' width='200px'>"
}

function zneviditelni_obdelnik() {
    document.getElementById("object").innerHTML ="<img src=''>"
}

function zobraz_trojuhelnik() {
    document.getElementById("object").innerHTML ="<img src='picture/trojuhelnik.png' height='200px' width='200px'>"
}

function zneviditelni_trojuhelnik() {
    document.getElementById("object").innerHTML ="<img src=''>"
}

function zobraz_kruh() {
    document.getElementById("object").innerHTML ="<img src='picture/kruh.png' height='200px' width='200px'>"
}

function zneviditelni_kruh() {
    document.getElementById("object").innerHTML ="<img src=''>"
}

function zobraz_krychle() {
    document.getElementById("object").innerHTML ="<img src='picture/krychle.png' height='200px' width='200px'>"
}

function zneviditelni_krychle() {
    document.getElementById("object").innerHTML ="<img src=''>"
}

function zobraz_kvadr() {
    document.getElementById("object").innerHTML ="<img src='picture/kvadr.png' height='200px' width='200px'>"
}

function zneviditelni_kvadr() {
    document.getElementById("object").innerHTML ="<img src=''>"
}

function zobraz_valec() {
    document.getElementById("object").innerHTML ="<img src='picture/valec.png' height='200px' width='200px'>"
}

function zneviditelni_valec() {
    document.getElementById("object").innerHTML ="<img src=''>"
}