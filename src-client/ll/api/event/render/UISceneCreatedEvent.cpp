#include "ll/api/event/render/UISceneCreatedEvent.h"

#include <unordered_set>

#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/client/gui/screens/UIScene.h"
#include "mc/deps/nbt/CompoundTag.h"

namespace ll::event::inline render {

UISceneCreatedEvent::UISceneCreatedEvent(std::shared_ptr<UIScene> scene, std::string screenName)
: mScene(std::move(scene)),
  mScreenName(std::move(screenName)) {}

void UISceneCreatedEvent::serialize(CompoundTag& nbt) const {
    RenderEvent::serialize(nbt);
    nbt["screenName"] = getScreenName();
    if (mScene) {
        nbt["scene"] = serializeRefObj(*mScene);
    }
}

std::string const& UISceneCreatedEvent::getScreenName() const { return mScreenName; }

std::shared_ptr<UIScene> const& UISceneCreatedEvent::scene() const { return mScene; }

UIScene* UISceneCreatedEvent::tryGetUIScene() const { return mScene.get(); }

LL_TYPE_INSTANCE_HOOK(
    CreateUISceneEventHook,
    HookPriority::Normal,
    SceneFactory,
    &SceneFactory::createUIScene,
    std::shared_ptr<UIScene>,
    std::string const&                screenName,
    std::shared_ptr<ScreenController> controller
) {
    auto scene = origin(screenName, controller);
    if (scene) {
        UISceneCreatedEvent event{scene, screenName};
        EventBus::getInstance().publish(event);
    }
    return scene;
}

static std::unique_ptr<EmitterBase> emitterFactory();

class UISceneCreatedEventEmitter : public Emitter<emitterFactory, UISceneCreatedEvent> {
    memory::HookRegistrar<CreateUISceneEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<UISceneCreatedEventEmitter>(); }

} // namespace ll::event::inline render
