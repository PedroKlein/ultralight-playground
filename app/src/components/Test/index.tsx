import React, { useState } from "react";
import "./styles.scss";

const Test: React.FC = () => {
  const [test, setTest] = useState("NAO");
  const getMessage = () => {
    //@ts-ignore
    setTest(window["GetMessage"]());
  };
  return <button onClick={() => getMessage()}>{test}</button>;
};

export default Test;
