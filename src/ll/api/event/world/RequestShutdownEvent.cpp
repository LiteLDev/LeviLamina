#include "ll/api/event/world/RequestShutdownEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline world {

void RequestShutdownEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["minecraft"] = (uintptr_t)&minecraft();
    nbt["message"]   = message();
}

Minecraft&         RequestShutdownEvent::minecraft() const { return mMinecraft; }
std::string const& RequestShutdownEvent::message() const { return mMessage; }

LL_TYPED_INSTANCE_HOOK(
    RequestShutdownEventHook,
    HookPriority::Normal,
    Minecraft,
    &Minecraft::requestServerShutdown,
    void,
    std::string const& message
) {
    EventBus::getInstance().publish(RequestShutdownEvent(*this, message));
    origin(message);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class RequestShutdownEventEmitter : public Emitter<RequestShutdownEvent, emitterFactory> {
    memory::HookRegistrar<RequestShutdownEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<RequestShutdownEventEmitter>();
}
} // namespace ll::event::inline world
