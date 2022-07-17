# LLSE - GUI Form Interface Documentation

> This API allows you to create, modify or affect the **GUI interface** in the game.

Obviously, the clear and intuitive UI interface helps players quickly get started with the use of plugins and provides a good user experience.

## 📊 Form Related API

for a specific player object `pl`, the following form interfaces are available:

### Send a Modal Form to the Player

A modal form contains a title, a text display, and two buttons.

`pl.sendModalForm(title,content,confirmButton,cancelButton,callback)`

- Parameters: 
  - title : `String`  
    Form title.  
  - content : `String`  
    Form content.
  - confirmButton : `String`  
    Button 1 text.  
  - cancelButton : `String`  
    Button 2 text.  
  - callback : `Function`  
    Function called after player clicks a button.  
- Return value: The ID of the sent form.  
- Return value type: `Integer`
  - If the return value is `Null`, it means the sending failed.

- Parameter `callback` The callback function prototype: `function(player,result)`  

  - player : `Player`  
    The player object that interacts with the form.
    
  - result : `Boolean`    
    Player clicks **Confirm** button is `true`, **Cancel** button is `false`.   
    
    If the id is `Null`, the player cancels the form.

<br>

### Send a Normal Form to the Player  

A normal form contains a title, a text display box and several buttons, and the icon displayed on the button can be set.  
Due to the relatively complex content setup of buttons, it is recommended to use the form builder API in the next section to better accomplish this task.

`pl.sendSimpleForm(title,content,buttons,images,callback)`

- Parameters: 

  - title : `String`  
    Form title.  
  - content : `String`  
    Form Content.
  - buttons : `Array<String,String,...>`  
    String array of individual button texts.
  - images : `Array<String,String,...>`  
    Image path corresponding to each button.
  - callback : `Function`  
    The function called after the player clicks a button.  
- Return value: The sent form ID.  
- Return value type: `Integer`
  - If the return value is `Null`, it means the sending failed.

Parameter `callback` The callback function prototype: `function(player,id)`  

- player : `Player`  
  The player object that interacts with the form.
- id : `Integer`    
  The serial number of the form button that the player clicked, starting from 0.  
  If the id is `Null`, the player cancels the form.

<br>

Use the texture pack path or URL `images` to identify the icon corresponding to the button.   
For each button on the form, set the corresponding icon as follows:

1. If using a texture pack path, the image path should look like `textures/items/apple`
2. If you use a URL path, you can put the full URL here, like `https://www.baidu.com/img/flexible/logo/pc/result.png`
3. If you don't need to display an image for this button, set the corresponding image path to an empty string.

<br>

### Send Custom Form to Player (JSON Format)  

Custom forms can contain rich custom controls.  
Since the relevant JSON definition format is relatively complex, it is recommended to use the form builder API in the next section to better accomplish this task.

`pl.sendCustomForm(json,callback)`

- Parameters: 
  - json : `String`  
    Custom form JSON string.  
  - callback : `Function`  
    Callback function to be called after the player submits the form.  
- Return value: The sent form ID. 
- Return value type: `Integer`  
  - If the return value is Null, it means the sending failed.

Parameter `callback` The callback function prototype: `function(player,data)`  

- player : `Player`  
  The player object that interacts with the form.
- data : `Array<...>`    
  The returned form content array.  
  In the array, the first item must be `Null`, starting from the second item, the content of each control is stored in the order of the controls on the form.  
  If data is only `Null`, the player cancels the form.

<br>