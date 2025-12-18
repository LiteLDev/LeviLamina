#include "ll/api/event/Cancellable.h"
#include "ll/api/event/render/RenderEvent.h"

#include "mc/client/gui/screens/ScreenView.h"
#include "mc/client/renderer/screen/MinecraftUIRenderContext.h"

namespace ll::event::inline render {

class UIRenderEvent : public Cancellable<RenderEvent> {
    ScreenView&               mScreenView;
    MinecraftUIRenderContext& mUiRenderContext;

public:
    explicit UIRenderEvent(ScreenView& view, UIRenderContext& context)
    : Cancellable(),
      mScreenView(view),
      mUiRenderContext(reinterpret_cast<MinecraftUIRenderContext&>(context)) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ScreenView&               screenView() const;
    LLNDAPI MinecraftUIRenderContext& uiRenderContext() const;
};

class BeforeUIRenderEvent final : public UIRenderEvent {
public:
    explicit BeforeUIRenderEvent(ScreenView& view, UIRenderContext& context) : UIRenderEvent(view, context) {}
};

class AfterUIRenderEvent final : public UIRenderEvent {
public:
    explicit AfterUIRenderEvent(ScreenView& view, UIRenderContext& context) : UIRenderEvent(view, context) {}
};

} // namespace ll::event::inline render