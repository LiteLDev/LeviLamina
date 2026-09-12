#include "mc/client/gui/GuiData.h"

#include "mc/client/game/IClientInstance.h"
#include "mc/client/gui/GameEventNotification.h"

void GuiData::setHudVisibilityState(::std::vector<::HudElement> const& elements, ::HudVisibility visibility) {
    for (auto element : elements) {
        auto idx = static_cast<size_t>(element);
        if (idx < mHudVisibilityState->size()) {
            (*mHudVisibilityState)[idx] = visibility;
        }
    }

    mClient.onGameEventNotification(::ui::GameEventNotification::HudElementVisibilityUpdated);
}

bool GuiData::isHudElementVisible(::HudElement element) const {
    auto idx = static_cast<size_t>(element);
    if (idx < mHudVisibilityState->size()) {
        return (*mHudVisibilityState)[idx] != ::HudVisibility::Hide;
    }

    return false;
}
