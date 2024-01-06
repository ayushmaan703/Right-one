function compchoices() {
    let choices = ['Rock', 'Paper', 'Scissors']
    let choice = choices[Math.floor(Math.random(Math.random) * 3)]
    return choice
}//done
function getresult(uc, cc) {
    let score = 0
    if (uc === cc)
        score = 0
    else if (uc === "Rock" && cc === "Scissors")
        score = 1
    else if (uc === "Paper" && cc === "Rock")
        score = 1
    else if (uc === "Scissors" && cc === "Paper")
        score = 1
    else
        score = -1
    return score
}//done
function play() {
    let btns = document.querySelectorAll('.btns')
    btns.forEach(btn => { btn.onclick = () => onclick1(btn) })

    let endgame = document.getElementById('end')
    endgame.onclick = () => endthegame()
    let sim=document.getElementById('simulate')
    sim.onclick=()=>{
for(let i =1;i<=5;i++){
    let choices1 = ['Rock', 'Paper', 'Scissors']
    let choice1 = choices1[Math.floor(Math.random(Math.random) * 3)]
   
    
        onclick2(choice1)
    }
}
   
}//done
function onclick2(valueofbtn) {
    let cc = compchoices()
    let uc = valueofbtn
    let s = getresult(uc, cc)
    showresult(s, uc, cc)

}//done
function onclick1(valueofbtn) {
    let cc = compchoices()
    let uc = valueofbtn.value
    let s = getresult(uc, cc)
    showresult(s, uc, cc)

}//done

function showresult(s, uc, cc) {
    let result = document.getElementById('result')
    let choice = document.getElementById('choice')
    let fs = document.getElementById('finalscore')
    switch (s) {
        case 1:
            result.innerText = 'You Won😁'
            break;
        case -1:
            result.innerText = 'You Lost 😣 '
            break;
        case 0:
            result.innerText = 'Its a tie!'
            break;
    }
    choice.innerText = `🧑 ${uc}  VS  🤖 ${cc}`
    fs.innerText = `${Number(fs.innerText) + s}`
}//done
function endthegame() {
    let result = document.getElementById('result')
    let choice = document.getElementById('choice')
    let fs = document.getElementById('finalscore')
    result.innerText = ''
    choice.innerText = ``
    fs.innerText = ''
}//done
function simulation(){
    let sim=document.getElementById('simulate')
    sim.onclick=()=>console.log("sim.value")
}
play()