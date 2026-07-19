#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/form/FormIdManager.h"
#include "ll/core/ddui/DduiManager.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ddui {

// NOTE: I don't know if there is another place where the DDUI form counter is incremented, so we use the regular one
uint FormIdManager::genFormId() { return ll::form::FormIdManager::genFormId(); }

void FormIdManager::close(Player const& player) { DduiManager::closeSessionForPlayer(player.getUuid()); }

} // namespace ll::ddui
