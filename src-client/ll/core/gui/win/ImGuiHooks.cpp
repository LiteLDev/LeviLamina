#include "ll/core/gui/ImGuiHooks.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/render/UIRenderEvent.h"
#include <memory>


#include "ll/api/service/Bedrock.h"
#include "ll/core/gui/ImguiLevi.h"
#include "mc/client/game/ClientInstance.h"

namespace ll::gui {

ll::event::ListenerPtr            beforeUIRenderEventListener;
ll::event::ListenerPtr            afterUIRenderEventListener;
static std::unique_ptr<ImGuiLevi> g_Imgui = nullptr;

void init() {

    g_Imgui        = std::make_unique<ImGuiLevi>();
    auto& eventBus = ll::event::EventBus::getInstance();
    g_Imgui->initialize();
    beforeUIRenderEventListener =
        eventBus.emplaceListener<ll::event::BeforeUIRenderEvent>([](ll::event::BeforeUIRenderEvent& event) {
            g_Imgui->beginRender(
                &event.uiRenderContext().mScreenContext,
                &ll::service::getClientInstance()->getKeyboardManager()
            );
            return true;
        });

    afterUIRenderEventListener =
        eventBus.emplaceListener<ll::event::AfterUIRenderEvent>([](ll::event::AfterUIRenderEvent& event) {
            g_Imgui->endRender(&event.uiRenderContext().mScreenContext);
            return true;
        });
}
} // namespace ll::gui
