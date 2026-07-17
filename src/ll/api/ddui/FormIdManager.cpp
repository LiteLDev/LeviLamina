#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/MessageBox.h"
#include "ll/core/ddui/DduiManager.h"
#include "ll/core/ddui/CustomFormSession.h"
#include "ll/core/ddui/MessageBoxSession.h"
#include "ll/api/form/FormIdManager.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ddui {

uint FormIdManager::genFormId() {
    return ll::form::FormIdManager::genFormId();
}

CustomForm* FormIdManager::getCustomForm(uint id) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);
    auto it = DduiManager::mActiveSessions.find(id);
    if (it != DduiManager::mActiveSessions.end() && it->second->isCustomForm()) {
        auto session = std::static_pointer_cast<CustomFormSession>(it->second);
        return session->mWrapper;
    }
    return nullptr;
}

CustomForm* FormIdManager::getCustomForm(Player& player) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);
    auto it = DduiManager::mPlayerActiveSessions.find(player.getUuid().asString());
    if (it != DduiManager::mPlayerActiveSessions.end() && it->second->isCustomForm()) {
        auto session = std::static_pointer_cast<CustomFormSession>(it->second);
        return session->mWrapper;
    }
    return nullptr;
}

MessageBox* FormIdManager::getMessageBox(uint id) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);
    auto it = DduiManager::mActiveSessions.find(id);
    if (it != DduiManager::mActiveSessions.end() && !it->second->isCustomForm()) {
        auto session = std::static_pointer_cast<MessageBoxSession>(it->second);
        return session->mWrapper;
    }
    return nullptr;
}

MessageBox* FormIdManager::getMessageBox(Player& player) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);
    auto it = DduiManager::mPlayerActiveSessions.find(player.getUuid().asString());
    if (it != DduiManager::mPlayerActiveSessions.end() && !it->second->isCustomForm()) {
        auto session = std::static_pointer_cast<MessageBoxSession>(it->second);
        return session->mWrapper;
    }
    return nullptr;
}

} // namespace ll::ddui
