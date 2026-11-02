# Input API

## Purpose

Input API lets native mods observe touch, key, and mouse events and control the
Android soft keyboard.

## Header

```cpp
#include <pl/Input.hpp>
```

## Events

```cpp
struct TouchEvent {
  int action;
  int pointerId;
  float x;
  float y;
};

struct KeyEvent {
  int keyCode;
  unsigned int unicodeChar;
  bool isKeyDown;
};

struct MouseEvent {
  int button;
  bool isDown;
};
```

Callbacks return `true` to consume the event.

## Functions

```cpp
void registerTouchCallback(pl::input::TouchCallback callback);
void registerKeyCallback(pl::input::KeyCallback callback);
void registerMouseCallback(pl::input::MouseCallback callback);

void showKeyboard();
void hideKeyboard();
```

## Example

```cpp
#include <pl/Input.hpp>

bool MyMod::enable() {
  pl::input::registerTouchCallback([](const pl::input::TouchEvent &event) {
    (void)event;
    return false;
  });

  pl::input::registerKeyCallback([](const pl::input::KeyEvent &event) {
    return event.isKeyDown && event.keyCode == 111;
  });

  return true;
}
```

## Notes

- There is currently no unregister API; register callbacks once per process or
  route them through mod-owned enabled state.
- Keep callbacks short and non-blocking.
- Keyboard functions require the game Activity to be available.
