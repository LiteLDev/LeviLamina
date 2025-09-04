#include "mc/server/commands/CommandOrigin.h"
#include "mc/locale/I18n.h"
#include "mc/locale/Localization.h"
#include "mc/world/actor/player/Player.h"

std::string CommandOrigin::getLocaleCode() const {
    if (auto* player = static_cast<Player*>(getEntity()); player && player->isPlayer()) {
        return player->getLocaleCode();
    }
    return getI18n().getCurrentLanguage()->mCode.get();
}