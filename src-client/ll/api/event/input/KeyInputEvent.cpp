#include "ll/api/event/input/KeyInputEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

#include "mc/deps/input/HIDController.h"
#include "mc/deps/input/win32/HIDControllerWin32.h"

namespace ll::event::inline input {

void KeyInputEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["keyCode"] = keyCode();
    nbt["action"]  = static_cast<int>(action());
}

void KeyInputEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    keyCode() = nbt["keyCode"];
    mAction   = static_cast<Action>(static_cast<int>(nbt["action"]));
}

HIDController&        KeyInputEvent::controller() const { return mController; }
int&                  KeyInputEvent::keyCode() const { return mKeyCode; }
KeyInputEvent::Action KeyInputEvent::action() const { return mAction; }
bool                  KeyInputEvent::isDown() const { return mAction == Action::Down; }

LL_TYPE_INSTANCE_HOOK(
    KeyInputDownEventHook,
    HookPriority::Normal,
    HIDController,
    &HIDController::$onKeyDown,
    void,
    int keyCode
) {
    auto code = keyCode;
    auto ev   = KeyInputEvent(*this, code, KeyInputEvent::Action::Down);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return;
    }
    origin(code);
}

LL_TYPE_INSTANCE_HOOK(
    KeyInputUpEventHook,
    HookPriority::Normal,
    HIDControllerWin32,
    &HIDControllerWin32::$onKeyUp,
    void,
    int keyCode
) {
    auto code = keyCode;
    auto ev   = KeyInputEvent(*this, code, KeyInputEvent::Action::Up);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return;
    }
    origin(code);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class KeyInputEventEmitter : public Emitter<emitterFactory, KeyInputEvent> {
    memory::HookRegistrar<KeyInputDownEventHook> hookDown;
    memory::HookRegistrar<KeyInputUpEventHook>   hookUp;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<KeyInputEventEmitter>(); }

} // namespace ll::event::inline input
