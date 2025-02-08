import React, { useState, useEffect } from 'react';

const LEDMatrix = () => {
  const [frame, setFrame] = useState(0);
  
  const pattern = [
    0b00000000,
    0b11100111,
    0b11100111,
    0b11100111,
    0b11100111,
    0b11100111,
    0b11100111,
    0b00000000
  ];

  useEffect(() => {
    const timer = setInterval(() => {
      setFrame(f => (f + 1) % pattern.length);
    }, 333);
    return () => clearInterval(timer);
  }, []);

  return (
    <div className="p-4 bg-gray-100 rounded-lg shadow-lg">
      <h2 className="text-xl font-bold mb-4">LED Matrix Simulator</h2>
      <div className="grid grid-rows-8 gap-1 bg-gray-800 p-4 rounded-lg">
        {pattern.map((row, i) => (
          <div key={i} className="grid grid-cols-8 gap-1">
            {Array.from({ length: 8 }, (_, j) => (
              <div
                key={j}
                className={`w-8 h-8 rounded-full ${
                  (row & (1 << (7 - j))) ? 'bg-yellow-400 shadow-lg' : 'bg-gray-600'
                }`}
              />
            ))}
          </div>
        ))}
      </div>
    </div>
  );
};

export default LEDMatrix;