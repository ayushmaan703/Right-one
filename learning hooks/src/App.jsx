import { useState } from "react";
import "./App.css";
const Num = () => {
  let [count, setcount] = useState(0);
  const add = () => {
    if (count <= 50) setcount(count++);
    else alert("How free are you 🤷🏼");
  };
  const subtract = () => {
    if (count >= 0) setcount(count--);
    else alert("No need to go that far back ✋🏼 🛑");
  };

  return (
    <div className=" bg-gradient-to-b from-indigo-500 via-purple-500 to-pink-500 grid place-content-center  h-screen w-full ">
      <div className=" bg-white pt-10 pb-10 pr-8 pl-8 rounded-lg " id="test">
        <div className=" pt-6  flex centre place-content-center bg-gradient-to-r from-cyan-500 to-blue-500 rounded-t-md">
          <h1 className="   pt-3 pr-8 pl-8 pb-3 rounded-t-md test1 ">
            {count}
          </h1>
        </div>
        <div className="  rounded-b-md  bg-gradient-to-r from-cyan-500 to-blue-500 flex justify-evenly pb-6"> 
          <button
            onClick={add}
            className=" pt-3 pr-8 pl-8 pb-3 m-3 border rounded-md"
          >
            Up{"   "}
          </button>
          <button
            onClick={subtract}
            className=" pt-3 pr-8 pl-8 pb-3 m-3 border rounded-md"
          >
            Down
          </button>
        </div>
      </div>
    </div>
  );
};
export default Num;
