## 📃 Normal Form Builder API

> These APIs can assist developers to easily construct a common form.

LLSE provides a **normal form object** to easily create a custom form and send it to a specific player.

### Create Form Object

Before using these APIs, you need to use this function to create a blank normal form object:

`mc.newSimpleForm()`

- Return value: Newly created blank form object.
- Return value type: `SimpleForm`

<br>

### Add Form Elements

Once created, you can use the following member functions (member methods) to add new form elements to the object.  
For a specific form object `fm`, the following functions are available:

#### Set the Title of the Form

`fm.setTitle(title)`

- Parameter: 
  - title : `String`  
    Title of the form.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `SimpleForm`

<br>

#### Set the Content of the Form

`fm.setContent(content)`

- Parameter: 
  - content: `String`  
    Text content of the form.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `SimpleForm`

<br>

#### Add a Row of Buttons to the Form 

`fm.addButton(text[,image])`

- Parameters: 
  - text : `String`  
    String of button text.
  - image: `String`  
    (Optional parameter) the path where the button image is located.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `SimpleForm`

<br>

Use the texture pack path or URL `image` to identify the icon corresponding to the button.  
For each button on the form, set the corresponding icon as follows:

1. If using a texture pack path, the image path should look like `textures/items/apple`
2. If you use a URL path, you can put the full URL here, like `https://www.baidu.com/img/flexible/logo/pc/result.png`
3. If you don't need to display an image for this button, just don't pass in this parameter.

<br>

### Send Form

Finally, when everything is in place, you can send the configured form object to the player and listen for player interaction messages.  
Form objects can be sent repeatedly, each time a different form ID is returned, and the respective callback functions are called when there is player interaction, without fighting.  

For a player object `pl`, using the function:

`pl.sendForm(fm,callback)`

- Parameters: 
  - fm : `SimpleForm`  
    The configured form object.  
  - callback : `Function`  
    Callback function to be called after the player interacts with the form element.   
- Return value: The sent form ID.  
- Return value type: `Integer`  
  - If the return value is `Null`, it means the sending failed.

Parameter `callback` The callback function prototype: `function(player,id)`  

- player : `Player`  
  The player object that interacts with the form 
- id : `Integer`    
  The serial number of the form button that the player clicked, starting from 0.  
  If id is `Null`, the player canceled the form.

<br>

## 📰 Custom Form Builder API

> These APIs can assist developers to easily construct a custom form, no longer need to worry about writing JSON

LLSE provides a **Custom Form Object** to easily create a custom form and send it to a specific player.

### Create Form Object

Before using these APIs, you need to use this function to create a blank custom form object.

`mc.newCustomForm()`

- Return value: Newly created blank form object.
- Return value type: `CustomForm`

<br>

### Add Form Elements

Once created, you can use the following member functions (member methods) to add new form elements to the object.  
For a specific form object `fm`, the following functions are available:

#### Set the Title of the Form

`fm.setTitle(title)`

- Parameters: 
  - title : `String`  
    Title of the form.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

#### Add a Line of Text to the Form  

`fm.addLabel(text)`

- Parameters: 
  - text : `String`  
    Line of text.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

#### Add a Row of Input Boxes to the Form  

`fm.addInput(title[,placeholder,default])`

- Parameters: 

  - title : `String`  
    Description text in an input box.
  - placeholder : `String`  
    (Optional parameter) The default prompt in the input box.
  - default : `String`  
    (Optional parameter) the default input in the input box.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

#### Add a Row of Switch Options to the Form  

`fm.addSwitch(title[,default])`

- Parameters: 
  - title : `String`  
    Description text for a switch option.
  - default : `Boolean`  
    (Optional parameter) Default state of the switch on/off.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

#### Add a Drop-Down Menu to the Form  

`fm.addDropdown(title,items[,default])`

- Parameters: 

  - title : `String`  
    Description text for a dropdown menu.

  - items : `Array<String,String,...>`  
    List of option texts in the drop down menu.

  - default : `Integer`  
    (Optional parameter) The number of the list item selected by default in the drop-down menu.  
    The sequence number starts from 0. The default is 0, that is, the first item in the list is selected by default.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

#### Add a Row of Cursor Sliders to the Form  

`fm.addSlider(title,min,max[,step,default])`

- Parameters: 
  - title : `String`  
    Description text for a Slider.
  - min : `Integer`  
    Slider minimum value.
  - max : `Integer`  
    Slider maximum value.
  - step : `Integer`  
    (Optional parameter) The minimum division value of the cursor slider adjustment, the default is 1.
  - default : `Integer`  
    (Optional parameter) The default initial grid number of the cursor slider, the value must be between the minimum and maximum grid number.  
    Defaults to 0, i.e. the slider is at the beginning of the slider row.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

#### Add a Row of Step Sliders to the Form  

`fm.addStepSlider(title,items[,default])`

- Parameters: 
  - title : `String`  
    Description text for a step slider.

  - items : `Array<String,String,...>`  
    List of option texts for the step slider.

  - default : `Integer`  
    (Optional parameter) Default initial options for step slider. Serial numbers start from 0.  
    Defaults to 0, i.e. the slider is at the beginning of the slider row.
- Return value: The processed form object (for other operations in the chain).
- Return value type: `CustomForm`

<br>

### Send Form

Finally, when everything is in place, you can send the configured form object to the player and listen for player interaction messages.
Form objects can be sent repeatedly, each time a different form ID is returned, and the respective callback functions are called when there is player interaction, without fighting. 

For a player object `pl`, using the function:

`pl.sendForm(fm,callback)`

- Parameters: 
  - fm : `CustomForm`  
    Configured custom form object.  
  - callback : `Function`  
    Callback function to be called after the player submits the form.  
- Return value: The sent form ID.
- Return value type: `Integer`  
  - If the return value is `Null`, it means the sending failed.

Parameter `callback` The callback function prototype: `function(player,data)`  

- player : `Player`  
  The player object that interacts with the form.
- data : `Array<...>`    
  The returned form content array.  
  The contents of each control are stored in the array in the order of the controls on the form.  
  if data is `Null`, the player cancels the form.

<br>