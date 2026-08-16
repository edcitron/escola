const listaTarefas = document.getElementById('listaTarefas');
const btnadicionar = document.getElementById('btnAdicionar');

// Função de criação (A Fábrica)
function adicionarItem() {
    let textoTarefa = document.getElementById("inputTarefa");
    let novoItem = document.createElement('li');
    let btnDeletar = document.createElement('button');


    if (textoTarefa.value === "") {
        alert("Erro : Espaço de tarefa vazia");
        return;
    } 

    novoItem.innerText = textoTarefa.value + " ";
    novoItem.classList.add("object");
    btnDeletar.innerText = "Apagar";
    btnDeletar.classList.add("btnDelete")
    textoTarefa.value = ""
    novoItem.appendChild(btnDeletar);
    listaTarefas.appendChild(novoItem); 

    //função de remoção
    btnDeletar.addEventListener('click', function() {
        novoItem.remove();
    });

}

btnadicionar.addEventListener('click', adicionarItem);




