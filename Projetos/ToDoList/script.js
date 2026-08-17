const listaTarefas = document.getElementById('listaTarefas');
const btnadicionar = document.getElementById('btnAdicionar');

let textoTarefa = document.getElementById("inputTarefa");

// Função de criação (A Fábrica)
function adicionarItem() {
    let novoItem = document.createElement('li');
    let btnConcluido = document.createElement('input')
    let btnDeletar = document.createElement('button');
    let box = document.createElement('span')


    if (textoTarefa.value === "") {
        alert("Erro : Espaço de tarefa vazia");
        return;
    } 

    box.innerText = textoTarefa.value + " ";
    box.classList.add("niga")
    novoItem.innerText = textoTarefa.value + " ";
    novoItem.classList.add("object");
    btnDeletar.innerText = "Apagar";
    btnDeletar.classList.add("btnDelete")
    btnConcluido.type = 'checkbox';
    textoTarefa.value = ""
    novoItem.appendChild(btnConcluido);
    novoItem.appendChild(btnDeletar);
    listaTarefas.appendChild(novoItem); 

    //função de remoção
    btnDeletar.addEventListener('click', function() {
        novoItem.remove();
    });

}

btnadicionar.addEventListener('click', adicionarItem);
textoTarefa.addEventListener('keydown', function(event) {
    if (event.key === "Enter") {
        adicionarItem();
    }
});




