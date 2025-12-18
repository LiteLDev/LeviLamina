#include "ll/api/event/render/UIRenderEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline render {

void UIRenderEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["screenView"]      = serializeRefObj(screenView());
    nbt["uiRenderContext"] = serializeRefObj(uiRenderContext());
}

ScreenView&               UIRenderEvent::screenView() const { return mScreenView; }
MinecraftUIRenderContext& UIRenderEvent::uiRenderContext() const { return mUiRenderContext; }

LL_TYPE_INSTANCE_HOOK(
    BeforeUIRenderEventHook,
    HookPriority::Normal,
    ScreenView,
    &ScreenView::render,
    void,
    ::UIRenderContext& uiRenderContext
) {
    auto beforeEv = BeforeUIRenderEvent(*this, uiRenderContext);
    EventBus::getInstance().publish(beforeEv);
    if (beforeEv.isCancelled()) {
        return;
    }
    origin(uiRenderContext);
}

LL_TYPE_INSTANCE_HOOK(
    AfterUIRenderEventHook,
    HookPriority::Normal,
    ScreenView,
    &ScreenView::render,
    void,
    ::UIRenderContext& uiRenderContext
) {
    origin(uiRenderContext);
    auto afterEv = AfterUIRenderEvent(*this, uiRenderContext);
    EventBus::getInstance().publish(afterEv);
}

static std::unique_ptr<EmitterBase> beforeEmitterFactory();
class BeforeUIRenderEventEmitter : public Emitter<beforeEmitterFactory, BeforeUIRenderEvent> {
    memory::HookRegistrar<BeforeUIRenderEventHook> hook;
};

static std::unique_ptr<EmitterBase> beforeEmitterFactory() { return std::make_unique<BeforeUIRenderEventEmitter>(); }

static std::unique_ptr<EmitterBase> afterEmitterFactory();
class AfterUIRenderEventEmitter : public Emitter<afterEmitterFactory, AfterUIRenderEvent> {
    memory::HookRegistrar<AfterUIRenderEventHook> hook;
};

static std::unique_ptr<EmitterBase> afterEmitterFactory() { return std::make_unique<AfterUIRenderEventEmitter>(); }

} // namespace ll::event::inline render
