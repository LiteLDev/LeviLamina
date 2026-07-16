#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/MessageBox.h"
#include "ll/core/ddui/DduiManager.h"
#include "mc/world/actor/player/Player.h"

namespace ll::ddui {

uint       FormIdManager::mNextFormId = 20000;
std::mutex FormIdManager::mMutex;

// NOTE: This value should be synchronized with the BDS counter, but its location is currently unknown.
uint FormIdManager::genFormId() {
    std::lock_guard<std::mutex> lock(mMutex);
    return mNextFormId++;
}

CustomForm* FormIdManager::getCustomForm(uint id) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);

    auto it = DduiManager::mActiveCustomForms.find(id);
    return it != DduiManager::mActiveCustomForms.end() ? it->second : nullptr;
}

CustomForm* FormIdManager::getCustomForm(Player& player) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);

    auto it = DduiManager::mPlayerActiveCustomForms.find(&player);
    return it != DduiManager::mPlayerActiveCustomForms.end() ? it->second : nullptr;
}

MessageBox* FormIdManager::getMessageBox(uint id) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);

    auto it = DduiManager::mActiveMessageBoxes.find(id);
    return it != DduiManager::mActiveMessageBoxes.end() ? it->second : nullptr;
}

MessageBox* FormIdManager::getMessageBox(Player& player) {
    std::lock_guard<std::mutex> lock(DduiManager::mMutex);

    auto it = DduiManager::mPlayerActiveMessageBoxes.find(&player);
    return it != DduiManager::mPlayerActiveMessageBoxes.end() ? it->second : nullptr;
}

} // namespace ll::ddui
