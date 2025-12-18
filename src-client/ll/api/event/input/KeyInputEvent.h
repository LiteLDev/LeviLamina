#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/input/InputEvent.h"

class HIDController;

namespace ll::event::inline input {

class KeyInputEvent final : public Cancellable<InputEvent> {
public:
    enum class Action : int {
        Up   = 0,
        Down = 1,
    };

private:
    HIDController& mController;
    int&           mKeyCode;
    Action         mAction;

public:
    constexpr explicit KeyInputEvent(HIDController& controller, int& keyCode, Action action)
    : Cancellable(),
      mController(controller),
      mKeyCode(keyCode),
      mAction(action) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI HIDController& controller() const;
    LLNDAPI int&           keyCode() const;
    LLNDAPI Action         action() const;
    LLNDAPI bool           isDown() const;
};
} // namespace ll::event::inline input
