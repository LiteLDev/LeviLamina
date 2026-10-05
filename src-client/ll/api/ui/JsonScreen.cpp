#include "ll/api/ui/JsonScreen.h"

#include <algorithm>
#include <mutex>
#include <vector>

#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Signature.h"
#include "ll/api/service/TargetedBedrock.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/AbstractScene.h"
#include "mc/client/gui/screens/AbstractScreenSetupCleanupStrategy.h"
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/client/gui/screens/ISceneFactoryImpl.h"
#include "mc/client/gui/screens/IScreenModelFactory.h"
#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/client/gui/screens/ScreenContext.h"
#include "mc/client/gui/screens/ScreenController.h"
#include "mc/client/gui/screens/ScreenView.h"
#include "mc/client/gui/screens/UIScene.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/interfaces/ISceneStack.h"
#include "mc/client/gui/screens/models/ClientInstanceScreenModel.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/string/StringHash.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/enums/ButtonState.h"

namespace ll::ui {

namespace {}

} // namespace ll::ui

// The base setupScreen has no exported definition, but deriving from the class emits the
// base vtable locally, which references it; the base vtable is never used at runtime.
void AbstractScreenSetupCleanupStrategy::setupScreen(::ScreenContext&) {}

namespace ll::ui {

namespace {

// ScreenSetupCleanupHelper::setupForStandardUIDrawing has no exported symbol; located by a byte
// signature (1.26.51). A failed scan is safe: the scene keeps the previous camera state.
void setupForStandardUIDrawing(::ScreenContext& screenContext, ::IClientInstance& client) {
    using Fn     = void (*)(::ScreenContext&, ::IClientInstance&);
    static Fn fn = []() -> Fn {
        using namespace ll::literals;
        return static_cast<Fn>(
            ("56 48 83 EC 40 0F 29 7C 24 30 0F 29 74 24 20 48 8B 81 A0 00 00 00 48 85 C0 74 0D F0 FF 40 08 48 8B B1 A0 "
             "00 00 00"_sig)
                .resolve(true)
        );
    }();
    if (fn != nullptr) {
        fn(screenContext, client);
    } else {
        getLogger().warn("JsonScreen: setupForStandardUIDrawing signature not found; UI camera setup will be skipped");
    }
}

class JsonScreenSetupCleanupStrategy : public ::AbstractScreenSetupCleanupStrategy {
    ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> mClient;

    ::IClientInstance* tryGetClient() const { return mClient.get().get(); }

public:
    explicit JsonScreenSetupCleanupStrategy(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> client)
    : mClient(std::move(client)) {}

    void setupScreen(::ScreenContext& screenContext) override {
        if (auto* client = tryGetClient()) {
            setupForStandardUIDrawing(screenContext, *client);
        }
    }

    void cleanupScreen(::ScreenContext& screenContext) override { screenContext.isDrawingUI = false; }

    ::EyeRenderingModeBit getEyeRenderingMode() const override {
        auto* client = tryGetClient();
        return static_cast<::EyeRenderingModeBit>(client != nullptr && !client->useLowFrequencyUIRender() ? 4 : 2);
    }
};

} // namespace

std::mutex sDeferredPopsMutex;

struct DeferredPop {
    Bedrock::NotNullNonOwnerPtr<ISceneStack> stack;
    std::weak_ptr<UIScene>                   scene;
};

std::vector<DeferredPop> sDeferredPops;

bool canSceneBeTransitioned(UIScene& scene) {
    return !scene.mScreenView || !(scene.mScreenView->mIsEntering || scene.mScreenView->mIsExiting);
}

void requestPop(ISceneStack& stack, std::weak_ptr<UIScene> const& weakScene) {
    auto scene = weakScene.lock();
    if (!scene) {
        return;
    }
    if (canSceneBeTransitioned(*scene)) {
        stack.schedulePopScreen(1);
        return;
    }
    std::lock_guard lock(sDeferredPopsMutex);
    for (auto const& entry : sDeferredPops) {
        if (entry.scene.lock().get() == scene.get()) {
            return;
        }
    }
    sDeferredPops.emplace_back(DeferredPop{stack, weakScene});
}

LL_TYPE_INSTANCE_HOOK(
    JsonScreenDeferredPopHook,
    memory::HookPriority::Normal,
    UIScene,
    &UIScene::$frameUpdate,
    void,
    MinecraftUIFrameUpdateContext& frameUpdateContext
) {
    origin(frameUpdateContext);
    std::vector<DeferredPop> deferred;
    {
        std::lock_guard lock(sDeferredPopsMutex);
        deferred.swap(sDeferredPops);
    }
    for (auto& entry : deferred) {
        if (auto scene = entry.scene.lock()) {
            if (canSceneBeTransitioned(*scene)) {
                if (auto* stack = entry.stack.get().get()) {
                    stack->schedulePopScreen(1);
                }
            } else {
                std::lock_guard lock(sDeferredPopsMutex);
                sDeferredPops.emplace_back(std::move(entry));
            }
        }
    }
}

class JsonScreen::Controller : public ::ClientInstanceScreenController {
    JsonScreen*         mOwner;
    std::weak_ptr<bool> mOwnerAlive;

public:
    Controller(JsonScreen& owner, std::weak_ptr<bool> ownerAlive, std::shared_ptr<::ClientInstanceScreenModel> model)
    : ::ClientInstanceScreenController(std::move(model)),
      mOwner(&owner),
      mOwnerAlive(std::move(ownerAlive)) {
        auto handledButtons = owner.getHandledButtonIds();
        if (std::ranges::find(handledButtons, "button.menu_cancel") == handledButtons.end()) {
            registerButtonEventHandler(
                StringHash{"button.menu_cancel"},
                ButtonState::Down,
                PreviousButtonStateRequirement::Any,
                [this](UIPropertyBag*) -> ::ui::ViewRequest {
                    if (!mOwnerAlive.expired()) {
                        mOwner->close();
                    }
                    return ::ui::ViewRequest::ConsumeEvent;
                }
            );
        }
        for (auto const& name : handledButtons) {
            registerButtonEventHandler(
                StringHash{name},
                ButtonState::Down,
                PreviousButtonStateRequirement::Any,
                [this, name](UIPropertyBag* bag) -> ::ui::ViewRequest {
                    if (mOwnerAlive.expired()) {
                        return ::ui::ViewRequest::None;
                    }
                    return mOwner->onButtonEvent(name, bag) ? ::ui::ViewRequest::ConsumeEvent : ::ui::ViewRequest::None;
                }
            );
        }
    }

    void onOpen() override {
        if (!mOwnerAlive.expired()) {
            mOwner->onOpen();
        }
    }

    ::ui::ViewRequest tryExit() override {
        if (!mOwnerAlive.expired()) {
            mOwner->close();
        }
        return ::ui::ViewRequest::ConsumeEvent;
    }

    void onTerminate() override {
        if (!mOwnerAlive.expired()) {
            mOwner->mCloseRequested = false;
            mOwner->onClose();
        }
    }

    ::ui::DirtyFlag tick() override {
        if (!mOwnerAlive.expired()) {
            mOwner->onTick();
        }
        return ::ClientInstanceScreenController::tick();
    }
};

JsonScreen::JsonScreen() : mAliveToken(std::make_shared<bool>()) {}

JsonScreen::~JsonScreen() { close(); }

std::vector<std::string> JsonScreen::getHandledButtonIds() const { return {}; }

void JsonScreen::onOpen() {}

void JsonScreen::onClose() {}

void JsonScreen::onTick() {}

bool JsonScreen::onButtonEvent(std::string const&, UIPropertyBag*) { return false; }

void JsonScreen::open() {
    if (isOpen()) {
        return;
    }
    auto client = service::getClientInstance();
    if (!client) {
        getLogger().warn("JsonScreen: open() '{}' aborted: no client instance", getScreenName());
        return;
    }
    auto& sceneFactory = client->getSceneFactory();
    auto& modelFactory = sceneFactory.mFactoryImpl.get()->getScreenModelFactory();
    auto  model        = modelFactory.createModel<::ClientInstanceScreenModel>(getScreenName(), sceneFactory);
    if (!model) {
        getLogger().warn("JsonScreen: open() '{}' aborted: createModel failed", getScreenName());
        return;
    }
    mController = std::make_shared<Controller>(*this, mAliveToken, std::move(model));
    auto scene  = sceneFactory.createUIScene(getScreenName(), mController);
    if (!scene) {
        getLogger().warn("JsonScreen: open() '{}' aborted: createUIScene failed", getScreenName());
        mController.reset();
        return;
    }
    mScene          = scene;
    mCloseRequested = false;
    scene->$setScreenSetupCleanup(
        std::make_unique<JsonScreenSetupCleanupStrategy>(::Bedrock::NotNullNonOwnerPtr<::IClientInstance>{
            ::Bedrock::NonOwnerPointer<::IClientInstance>{
                                                          static_cast<::Bedrock::EnableNonOwnerReferences const&>(*client).mControlBlock,
                                                          static_cast<::IClientInstance*>(&*client)
            }
    })
    );
    client->getCurrentSceneStack()->pushScreen(std::move(scene), false);

    static std::once_flag sDeferredPopHookOnce;
    std::call_once(sDeferredPopHookOnce, [] { memory::HookRegistrar<JsonScreenDeferredPopHook>::hook(); });
}

void JsonScreen::close() {
    if (mCloseRequested || !mScene.lock()) {
        return;
    }
    auto client = service::getClientInstance();
    if (!client) {
        return;
    }
    mCloseRequested = true;
    requestPop(*client->getCurrentSceneStack(), mScene);
}

bool JsonScreen::isOpen() const { return !mScene.expired(); }

UIScene* JsonScreen::scene() const {
    auto scene = mScene.lock();
    return scene ? scene.get() : nullptr;
}

} // namespace ll::ui
