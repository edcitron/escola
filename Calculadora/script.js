//JavaScript 

const visor = document.getElementById('visor');
const buttonsNumeros = document.querySelectorAll('.teclaNum');
const buttonOperadores = document.querySelectorAll('.teclaOpera');
const buttonCE = document.getElementById('CEbutton');
const buttonResultado = document.getElementById('resultadoButton');
const buttonQuebra = document.getElementById('quebraButton');

let resultado;
let expressao;
let quebra = true;

for (let i = 0; i < buttonsNumeros.length; i++) {
    buttonsNumeros[i].addEventListener('click', function() {
        if(visor.innerText == 0) {
            visor.innerText = buttonsNumeros[i].innerText;
        } else {
            visor.innerText += buttonsNumeros[i].innerText;
        }    
    });
}

for (let i = 0; i < buttonOperadores.length; i++) {
    buttonOperadores[i].addEventListener('click', function() {

        let textoAtual = visor.innerText;
        let ultimoCaractere = textoAtual.slice(-1);
        let operadorClicado = buttonOperadores[i].innerText;

        if (textoAtual == "0") {
            if (operadorClicado == "-") {
                visor.innerText = operadorClicado; 
            } else {
                visor.innerText += operadorClicado; 
            }
        } 
        else {
            if (ultimoCaractere == '+' || ultimoCaractere == '-' || ultimoCaractere == '*' || ultimoCaractere == '/' || ultimoCaractere == '.') {
            } else {
                visor.innerText += operadorClicado;
            }
        }
    });
}

// Limitaçãd da quebra
buttonQuebra.addEventListener('click', function() {
    if (quebra == true) {
        //visor.innerText += ".";
        quebra = false;
    } 
})

// Função de Limpeza
buttonCE.addEventListener('click', function() {
    visor.innerText = 0;
    quebra = true;
})

// Função de Resultado
buttonResultado.addEventListener('click', function() {
    expressao = visor.innerText;
    resultado = eval(expressao);
    visor.innerText = resultado;
})