#include "ll/core/gui/ImGuiHooks.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/render/ScreenRenderEvent.h"
#include <memory>


#include "ll/api/service/Bedrock.h"
#include "ll/core/gui/ImguiLevi.h"
#include "mc/client/game/ClientInstance.h"

namespace ll::gui {

ll::event::ListenerPtr            beforeScreenRenderEventListener;
ll::event::ListenerPtr            afterScreenRenderEventListener;
static std::unique_ptr<ImGuiLevi> g_Imgui = nullptr;

void init() {

    g_Imgui        = std::make_unique<ImGuiLevi>();
    auto& eventBus = ll::event::EventBus::getInstance();
    g_Imgui->initialize();
    beforeScreenRenderEventListener =
        eventBus.emplaceListener<ll::event::BeforeScreenRenderEvent>([](ll::event::BeforeScreenRenderEvent& event) {
            g_Imgui->beginRender(
                &event.uiRenderContext().mScreenContext,
                &ll::service::getClientInstance()->getKeyboardManager()
            );
            return true;
        });

    afterScreenRenderEventListener =
        eventBus.emplaceListener<ll::event::AfterScreenRenderEvent>([](ll::event::AfterScreenRenderEvent& event) {
            g_Imgui->endRender(&event.uiRenderContext().mScreenContext);
            return true;
        });
}
} // namespace ll::gui
