#include "ll/api/event/Cancellable.h"
#include "ll/api/event/render/RenderEvent.h"

#include "mc/client/gui/screens/ScreenView.h"
#include "mc/client/renderer/screen/MinecraftUIRenderContext.h"

namespace ll::event::inline render {

class ScreenRenderEvent : public Cancellable<RenderEvent> {
    ScreenView&               mScreenView;
    MinecraftUIRenderContext& mUiRenderContext;

public:
    explicit ScreenRenderEvent(ScreenView& view, UIRenderContext& context)
    : Cancellable(),
      mScreenView(view),
      mUiRenderContext(reinterpret_cast<MinecraftUIRenderContext&>(context)) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ScreenView&               screenView() const;
    LLNDAPI MinecraftUIRenderContext& uiRenderContext() const;
};

class BeforeScreenRenderEvent final : public ScreenRenderEvent {
public:
    explicit BeforeScreenRenderEvent(ScreenView& view, UIRenderContext& context) : ScreenRenderEvent(view, context) {}
};

class AfterScreenRenderEvent final : public ScreenRenderEvent {
public:
    explicit AfterScreenRenderEvent(ScreenView& view, UIRenderContext& context) : ScreenRenderEvent(view, context) {}
};

} // namespace ll::event::inline render