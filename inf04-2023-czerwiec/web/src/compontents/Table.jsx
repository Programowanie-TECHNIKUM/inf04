import React, { useState } from 'react'
import console from '../console';

export default () => {

    const [title, setTitle] = useState('');
    const [rodzaj, setRodzaj] = useState('1');

  return (
    <div>
      <form>
        <div className="form-group">
          <label htmlFor="title">Tytul filmu</label>
          <input 
            type="text" 
            className="form-control" 
            onChange={(e) => setTitle(e.target.value)} 
            value={title}
          />
        </div>
        <div>
          <label htmlFor="rodzaj">Rodzaj</label>
          <select 
            name="rodzaj" 
            id="rodzaj" 
            className="form-control"
            onChange={(e) => setRodzaj(e.target.value)}
            value={rodzaj}
          >
            <option value=""></option>
            <option value="1">Komedia</option>
            <option value="2">Obyczajowy</option>
            <option value="3">Sencacyjny</option>
            <option value="4">Horror</option>
          </select>
        </div>
      </form>
      <div className="btn btn-primary" onClick={() => console(title, rodzaj)}>Dodaj</div>
    </div>
  );
};