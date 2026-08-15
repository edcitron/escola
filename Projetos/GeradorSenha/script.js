const geradorButton = document.getElementById('gerador');
const resultadoSenha = document.getElementById('resultadoSenha');

const caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
let resultado = "";

function gerar() {
    resultado = "";
    for (let i = 0; i < 8; i++) {
        resultado += caracteres[Math.floor(Math.random() * caracteres.length)];
    }
    resultadoSenha.innerText = resultado;
}
geradorButton.addEventListener('click', gerar);