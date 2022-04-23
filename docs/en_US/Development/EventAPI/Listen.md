# LLSE - Event Listening Documentation

> The event system allows plugins to **respond** to certain game events, allowing you to execute code when certain events occur.

The following APIs provide the ability to listen to **game events** and respond to them.

## 🔔 Monitor API

Register the specified listener function.  
When a certain event in the game occurs, the corresponding listener function you set will be called by the engine, and you can process the related event at this time.  

### Add a Listener  

`mc.listen(event,callback)`

- Parameters: 
  - event : `String`  
    The name of the event to listen for (see the list of listening events below).
  - callback : `Function`  
    Registered listener function (see below for function-related parameters).  
    When the specified event occurs, BDS will call the listener function you give and pass in the corresponding parameters.
- Return value: Whether the event was successfully monitored.
- Return value type: `Boolean` 

<br>

### Intercept Event

In LLSE's event monitoring system, generally you can pass `return false` to intercept an event that can be intercepted. Intercepting an event means that after the script intercepts the BDS will no longer handle the event as if it never happened.
For example: intercepting a chat event will cause everyone to not see the chat message  

However, intercepting events is only valid for BDS.  
That is to say, intercepting an event does not affect other LLSE scripts that have corresponding listeners to process this event, but BDS can no longer receive it.

<br>

### Avoid Mistakes

Sometimes, calling a specific API inside some event listeners will cause an infinite loop to collapse. Please avoid these situations.  
Example: If you use the `onConsoleCmd` event listener, and you call `mc.runcmd(Ex)`, it will trigger another `onConsoleCmd` event, which will lead to an infinite loop.