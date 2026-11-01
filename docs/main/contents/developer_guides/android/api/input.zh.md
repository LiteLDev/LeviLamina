# Input API

## 作用

Input API 让原生模组监听触摸、按键、鼠标事件，并控制 Android 软键盘。

## 头文件

```cpp
#include <pl/Input.hpp>
```

## 事件

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

callback 返回 `true` 表示消费事件。

## 函数

```cpp
void registerTouchCallback(pl::input::TouchCallback callback);
void registerKeyCallback(pl::input::KeyCallback callback);
void registerMouseCallback(pl::input::MouseCallback callback);

void showKeyboard();
void hideKeyboard();
```

## 示例

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

## 注意

- 当前没有 unregister API；请每进程只注册一次，或通过模组自有 enabled 状态转发。
- callback 保持短小，不要阻塞。
- 软键盘函数需要游戏 Activity 可用。
