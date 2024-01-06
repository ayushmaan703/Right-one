const btn = document.getElementById("search");
const userinput = () => {
  const city = document.getElementById("city").value;
  searching(city);
};
btn.onclick = () => userinput();
//btn.addEventListener("keydown",(e)=>{
  //if(e.keycode == "0"){
   // btn.onclick = () => userinput();
 // }
//});
const searching = async (city) => {
  const url = `https://open-weather13.p.rapidapi.com/city/${city}`;
  const options = {
    method: "GET",
    headers: {
  'X-RapidAPI-Key': 'b57f89da3dmshd00245f871854c9p1ca2ccjsnd4ab59b27bc5',
    'X-RapidAPI-Host': 'open-weather13.p.rapidapi.com',
    },
  };

  try {
    const response = await fetch(url, options);
    const result = await response.json();
    showdata(result);
  } catch (error) {
    console.error(error);
  }
};
const showdata = (data) => {
  //if(data != data.name){
  //   const clear2= document.getElementById("clear");
//clear2.innerText="Enter correct name"
 // }
  
  const temp1 = document.getElementById("temp");
  const clear1 = document.getElementById("clear");
  const maxtemp = document.getElementById("max-temp");
  const mintemp = document.getElementById("min-temp");
  temp1.innerText="Feels like: " + convert(data.main.feels_like);
  clear1.innerText=data.weather[0].main;
  maxtemp.innerText="Max Temp: "  +convert(data.main.temp_max);
  mintemp.innerText="Min Temp: " +convert(data.main.temp_min);
};
const convert =(far)=>{
  const cel=(5/9)*(far-32);
  return Math.floor(cel);
}
document.addEventListner("keydown",(e)=>{
  if(e.keycode == "13"){
   userinput();
  }
});
