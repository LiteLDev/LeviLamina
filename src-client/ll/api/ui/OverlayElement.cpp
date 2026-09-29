#include "ll/api/ui/OverlayElement.h"

#include <mutex>
#include <shared_mutex>
#include <vector>

#include "ll/api/event/EventBus.h"
#include "ll/api/event/render/UISceneCreatedEvent.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/TargetedBedrock.h"
#include "ll/api/ui/CustomControlInjection.h"
#include "ll/api/ui/CustomUIRendererRegistry.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/gui/controls/UIControl.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/AbstractScene.h"
#include "mc/client/gui/screens/UIScene.h"
#include "mc/client/gui/screens/interfaces/ISceneStack.h"

namespace ll::ui {

namespace {

std::shared_mutex                                            sPendingMutex;
std::vector<std::pair<std::weak_ptr<bool>, OverlayElement*>> sPendingAttaches;

void registerPending(OverlayElement& overlay, std::weak_ptr<bool> token) {
    std::unique_lock lock(sPendingMutex);
    // 去重并顺手清理已失效/已挂载的条目
    std::erase_if(sPendingAttaches, [&](auto const& entry) {
        return entry.first.expired() || entry.second->isAttached() || entry.second == &overlay;
    });
    sPendingAttaches.emplace_back(std::move(token), &overlay);
}

void unregisterPending(OverlayElement& overlay) {
    std::unique_lock lock(sPendingMutex);
    std::erase_if(sPendingAttaches, [&](auto const& entry) { return entry.second == &overlay; });
}

} // namespace

struct OverlayElement::Impl {
    bool                                                         enabled = false;
    std::weak_ptr<UIControl>                                     attached;
    std::shared_ptr<event::Listener<event::UISceneCreatedEvent>> listener;
    UIScene*                                                     pendingScene = nullptr;
    std::shared_ptr<bool>                                        aliveToken   = std::make_shared<bool>();
};

// 场景创建时控件树常未构建完成（异步加载），attach 失败的控件登记在这里，
// 由宿主场景自身的 frameUpdate 持续驱动重试，直到父控件出现。
LL_TYPE_INSTANCE_HOOK(
    UISceneFrameUpdateHook,
    memory::HookPriority::Normal,
    UIScene,
    &UIScene::$frameUpdate,
    void,
    MinecraftUIFrameUpdateContext& frameUpdateContext
) {
    origin(frameUpdateContext);
    // 拷贝待处理列表后再遍历：tryAttachFrame 失败时会重新 registerPending（独占锁），
    // 不能在持锁状态下调用，否则死锁
    std::vector<std::pair<std::weak_ptr<bool>, OverlayElement*>> pending;
    {
        std::shared_lock lock(sPendingMutex);
        pending = sPendingAttaches;
    }
    for (auto const& [token, overlay] : pending) {
        if (!token.expired()) {
            overlay->tryAttachFrame(*this);
        }
    }
}

OverlayElement::OverlayElement() : mImpl(std::make_unique<Impl>()) {}

OverlayElement::~OverlayElement() { disable(); }

std::string_view OverlayElement::getTargetSceneName() const { return "hud.hud_screen"; }

void OverlayElement::onAttach(UIControl&) {}

void OverlayElement::onDetach() {}

void OverlayElement::enable() {
    if (mImpl->enabled) {
        return;
    }
    if (auto result =
            CustomUIRendererRegistry::registerRenderer(getRendererName(), [this] { return createRenderer(); });
        !result) {
        getLogger().error("OverlayElement: failed to register renderer: {}", result.error().message());
        return;
    }
    mImpl->enabled = true;
    static std::once_flag hookOnce;
    std::call_once(hookOnce, [] { memory::HookRegistrar<UISceneFrameUpdateHook>::hook(); });

    mImpl->listener = event::EventBus::getInstance().emplaceListener<event::UISceneCreatedEvent>(
        [this](event::UISceneCreatedEvent& ev) {
            // 直接比较创建场景时使用的名字（即 UISceneCreatedEvent::getScreenName()），
            // 不依赖 UIScene::equalsScreenName 的匹配语义
            if (ev.getScreenName() != getTargetSceneName()) {
                return;
            }
            if (auto* scene = ev.tryGetUIScene()) {
                mImpl->pendingScene = scene;
                attach(*scene);
            }
        }
    );

    // The host scene may already exist (mod loaded late): scan the current stack once.
    // Callback semantics: return true to continue iterating, false to stop.
    if (auto client = service::getClientInstance()) {
        client->getCurrentSceneStack()->forEachScreen(
            [this](AbstractScene& scene) {
                if (scene.getScreenName() == getTargetSceneName()) {
                    if (auto* uiScene = dynamic_cast<UIScene*>(&scene)) {
                        mImpl->pendingScene = uiScene;
                        attach(*uiScene);
                    }
                    return false;
                }
                return true;
            },
            /*topDown=*/false
        );
    }
}

void OverlayElement::disable() {
    if (!mImpl->enabled) {
        return;
    }
    mImpl->enabled      = false;
    mImpl->pendingScene = nullptr;
    unregisterPending(*this);
    if (mImpl->listener) {
        event::EventBus::getInstance().removeListener<event::UISceneCreatedEvent>(mImpl->listener);
        mImpl->listener.reset();
    }
    if (auto control = mImpl->attached.lock()) {
        if (auto parent = control->mParent.lock()) {
            parent->removeChild(control);
        }
        mImpl->attached.reset();
        onDetach();
    }
    CustomUIRendererRegistry::unregisterRenderer(getRendererName());
}

bool OverlayElement::isAttached() const { return !mImpl->attached.expired(); }

void OverlayElement::attach(UIScene& scene) {
    if (!mImpl->enabled || !mImpl->attached.expired()) {
        return;
    }
    auto control = attachCustomControl(scene, getTargetParentControlName(), getControlDefName());
    if (control) {
        mImpl->attached = *control;
        onAttach(**control);
        return;
    }
    // 控件树尚未构建完成（异步加载）——登记到 frameUpdate 持续重试列表
    if (mImpl->pendingScene == &scene) {
        registerPending(*this, mImpl->aliveToken);
    }
}

void OverlayElement::tryAttachFrame(UIScene& scene) {
    if (!mImpl->enabled || mImpl->pendingScene != &scene) {
        return;
    }
    attach(scene);
    if (!mImpl->attached.expired()) {
        mImpl->pendingScene = nullptr;
        unregisterPending(*this);
    }
}

} // namespace ll::ui
