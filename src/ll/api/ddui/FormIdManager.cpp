#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/MessageBox.h"
#include "ll/api/form/FormIdManager.h"
#include "ll/core/ddui/CustomFormSession.h"
#include "ll/core/ddui/DduiManager.h"
#include "ll/core/ddui/MessageBoxSession.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ddui {

// NOTE: I don't know if there is another place where the DDUI form counter is incremented, so we use the regular one
uint FormIdManager::genFormId() { return ll::form::FormIdManager::genFormId(); }

CustomForm* FormIdManager::getCustomForm(Player const& player) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);

    if (auto it = DduiManager::mPlayerActiveSessions.find(player.getUuid());
        it != DduiManager::mPlayerActiveSessions.end() && it->second->isCustomForm()) {
        auto session = std::static_pointer_cast<CustomFormSession>(it->second);
        return session->mKeepAlive.get();
    }

    return nullptr;
}

MessageBox* FormIdManager::getMessageBox(Player const& player) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);

    if (auto it = DduiManager::mPlayerActiveSessions.find(player.getUuid());
        it != DduiManager::mPlayerActiveSessions.end() && !it->second->isCustomForm()) {
        auto session = std::static_pointer_cast<MessageBoxSession>(it->second);
        return session->mKeepAlive.get();
    }

    return nullptr;
}

void FormIdManager::close(Player const& player) {
    if (auto form = getCustomForm(player)) {
        form->close();
    } else if (auto mbox = getMessageBox(player)) {
        mbox->close();
    }
}

} // namespace ll::ddui
