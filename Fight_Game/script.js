const p1name = document.getElementById("player1");
const p1attack = document.getElementById("attackp1");
const p1heal = document.getElementById("healp1");
const p1heatlh = document.getElementById("healthp1");
const p2name = document.getElementById("player2");
const p2attack = document.getElementById("attackp2");
const p2heal = document.getElementById("healp2");
const p2health = document.getElementById("healthp2");
const simulate = document.getElementById("sim");
const result = document.getElementById("showresult");
const reset = document.getElementById("reset");
const startnewgame = document.getElementById("newgame");
const p1img = document.getElementById("player1img");
const p2img = document.getElementById("player2img");
let onclickofQ = "no";
let onclickofp = "no";
let player1name_entry = prompt("Enter The Name Of First Player");
let player2name_entry = prompt("Enter The Name Of Second Player");
p1name.innerText = '" '+player1name_entry+' "';
p2name.innerText = '" '+player2name_entry+' "';

class playersinfo {
  constructor(name, health, attackdamage) {
    this.name = name;
    this.health = health;
    this.attackdamage = attackdamage;
  }
  attack(player, enemy, damage) {
    let dmg = Math.ceil(Math.random() * damage);
    enemy.health -= dmg;
    console.log(onclickofQ)
    if (dmg >= 8 && onclickofQ == "yes") {
      p1img.src = "https://i.gifer.com/WiCG.gif";
      result.innerText = `${player.name} made a special move and did a damage of ${dmg}`;
      onclickofQ="no"
    }  if (dmg < 8 && onclickofQ == "yes") {
      p1img.src = "https://i.gifer.com/ZAbo.gif";
      result.innerText = ``;
      onclickofQ="no"
    }
    if (dmg >= 8 && onclickofp == "yes1") {
      p2img.src = "https://i.gifer.com/6Z5n.gif";
      result.innerText = `${player.name} made a special move`;
      onclickofp = "no";
    }
    if (dmg < 8 && onclickofp == "yes1") {
      p2img.src = "https://i.gifer.com/6fB6.gif";
      result.innerText = ``;
      onclickofp = "no";
    }

    updategameinfo(player1, player2, gamestatus);
  }
  heal(player) {
    let healing = Math.ceil(Math.random() * 5);
    player.health += healing;
    updategameinfo(player1, player2, gamestatus);
  }
}
class game {
  constructor() {
    this.gameover = false;
  }
  play(p1, p2) {
    this.reset(p1, p2);
    while (!this.gameover) {
      p1.attack(p1, p2, p1.attackdamage);
      p2.heal(p2);
      p2.attack(p2, p1, p2.attackdamage);
      p1.heal(p1);
      console.log("Stimule runned this much times before showing result");
      if (p1.health <= 0 || p2.health <= 0) {
        this.gameover = true;
      }
    }
    this.declarewinner(p1, p2, this.gameover);
  }
  reset(p1, p2) {
    p1heatlh.innerText = 100;
    p2health.innerText = 100;
    p1.health = 100;
    p2.health = 100;
    result.innerText = "";
    this.gameover = false;
    p1img.src = "https://i.gifer.com/Yrhj.gif";
    p2img.src = "https://i.gifer.com/HaCB.gif";
  }
  declarewinner(p1, p2, stats) {
    if (stats == true && p1.health <= 0) {
      result.innerText = `"${p2.name}"  WON THE MATCH! AGAINST  "${p1.name}"`;
    }
    if (stats == true && p2.health <= 0) {
      result.innerText = `"${p1.name}"  WON THE MATCH! AGAINST  "${p2.name}"`;
    }
  }
}
const updategameinfo = (p1, p2, stats) => {
  if (p1.health <= 0 || p2.health <= 0) {
    p1heatlh.innerText = 0;
    p2health.innerText = 0;
  } else {
    p1heatlh.innerText = `HEALTH ${p1.health}`;
    p2health.innerText = `HEALTH ${p2.health}`;
  }
  if (p1.health <= 0 || p2.health <= 0) {
    Game.isover = true;
    stats = Game.isover;
    Game.declarewinner(player1, player2, stats);
  }
};
const newgame = () => {
  let player1name_entry = prompt("Enter The Name Of First Player");
  let player2name_entry = prompt("Enter The Name Of Second Player");
  p1name.innerText = '" '+player1name_entry+' "';
  p2name.innerText = '" '+player2name_entry+' "';
  Game.reset(player1, player2);
};
let player1 = new playersinfo(player1name_entry, 100, 10);
let player2 = new playersinfo(player2name_entry, 100, 10);
let Game = new game();
gamestatus = Game.isover;
p1attack.onclick = () => {
  onclickofQ = "yes";
  player1.attack(player1, player2, player1.attackdamage);
};
p2attack.onclick = () => {
  onclickofp == "yes1";
  player2.attack(player2, player1, player2.attackdamage);
};
p1heal.onclick = () => player1.heal(player1);
p2heal.onclick = () => player1.heal(player2);
reset.onclick = () => Game.reset(player1, player2);
simulate.onclick = () => Game.play(player1, player2);
startnewgame.onclick = () => newgame();

document.addEventListener("keydown", (e) => {
  if (
    (e.key == "q" && player2.health > 0 && Game.gameover == false) ||
    e.key == "Q"
  ) {
    onclickofQ = "yes";
    player1.attack(player1, player2, player1.attackdamage);
  }
});
document.addEventListener("keydown", (e) => {
  if (
    (e.key == "p" && player1.health > 0 && Game.gameover == false) ||
    e.key == "P"
  ) {
    onclickofp == "yes1";
    player2.attack(player2, player1, player2.attackdamage);
  }
});
document.addEventListener("keydown", (e) => {
  if ((e.key == "a" && Game.gameover == false) || e.key == "A")
    player1.heal(player1);
});
document.addEventListener("keydown", (e) => {
  if ((e.key == "l" && Game.gameover == false) || e.key == "L")
    player1.heal(player2);
});
