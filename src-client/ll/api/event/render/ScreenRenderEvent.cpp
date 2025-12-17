#include "ll/api/event/render/ScreenRenderEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline render {

void ScreenRenderEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["screenView"]      = serializeRefObj(screenView());
    nbt["uiRenderContext"] = serializeRefObj(uiRenderContext());
}

ScreenView&               ScreenRenderEvent::screenView() const { return mScreenView; }
MinecraftUIRenderContext& ScreenRenderEvent::uiRenderContext() const { return mUiRenderContext; }

LL_TYPE_INSTANCE_HOOK(
    BeforeScreenRenderEventHook,
    HookPriority::Normal,
    ScreenView,
    &ScreenView::render,
    void,
    ::UIRenderContext& uiRenderContext
) {
    auto beforeEv = BeforeScreenRenderEvent(*this, uiRenderContext);
    EventBus::getInstance().publish(beforeEv);
    if (beforeEv.isCancelled()) {
        return;
    }
    origin(uiRenderContext);
}

LL_TYPE_INSTANCE_HOOK(
    AfterScreenRenderEventHook,
    HookPriority::Normal,
    ScreenView,
    &ScreenView::render,
    void,
    ::UIRenderContext& uiRenderContext
) {
    origin(uiRenderContext);
    auto afterEv = AfterScreenRenderEvent(*this, uiRenderContext);
    EventBus::getInstance().publish(afterEv);
}

static std::unique_ptr<EmitterBase> beforeEmitterFactory();
class BeforeScreenRenderEventEmitter : public Emitter<beforeEmitterFactory, BeforeScreenRenderEvent> {
    memory::HookRegistrar<BeforeScreenRenderEventHook> hook;
};

static std::unique_ptr<EmitterBase> beforeEmitterFactory() {
    return std::make_unique<BeforeScreenRenderEventEmitter>();
}

static std::unique_ptr<EmitterBase> afterEmitterFactory();
class AfterScreenRenderEventEmitter : public Emitter<afterEmitterFactory, AfterScreenRenderEvent> {
    memory::HookRegistrar<AfterScreenRenderEventHook> hook;
};

static std::unique_ptr<EmitterBase> afterEmitterFactory() { return std::make_unique<AfterScreenRenderEventEmitter>(); }

} // namespace ll::event::inline render
