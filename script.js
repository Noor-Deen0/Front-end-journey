const textarea =document.getElementById("code");
const reset =document.getElementById("reset");
const solution =document.getElementById("solution");
const output =document.querySelector(".output");
const code =textarea.value;
let userEntry =textarea.value;
function updateCode() {output.innerHTML=textarea.value;}
const htmlSolution ="<em>this is my text.</em>";
let solutionEntry =html;

reset.addEventListener("click,()=> { 
    textarea.value=code;
    userEntry =textarea.value;
    solutionEntry=htmlSolution;
    solution.value="Show solution";
updateCode();
});