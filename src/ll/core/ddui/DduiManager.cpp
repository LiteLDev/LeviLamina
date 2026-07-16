#include "ll/core/ddui/DduiManager.h"
#include "ll/api/ddui/CustomForm.h"
#include "ll/api/ddui/FormIdManager.h"
#include "ll/api/ddui/MessageBox.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

namespace ll::ddui {

std::unordered_map<uint, CustomForm*>    DduiManager::mActiveCustomForms;
std::unordered_map<uint, MessageBox*>    DduiManager::mActiveMessageBoxes;
std::unordered_map<Player*, CustomForm*> DduiManager::mPlayerActiveCustomForms;
std::unordered_map<Player*, MessageBox*> DduiManager::mPlayerActiveMessageBoxes;
std::mutex                               DduiManager::mMutex;

void DduiManager::registerCustomForm(uint id, Player& player, CustomForm* form) {
    std::lock_guard<std::mutex> lock(mMutex);

    mActiveCustomForms[id]            = form;
    mPlayerActiveCustomForms[&player] = form;
}

void DduiManager::unregisterCustomForm(uint id, Player& player) {
    std::lock_guard<std::mutex> lock(mMutex);

    mActiveCustomForms.erase(id);
    mPlayerActiveCustomForms.erase(&player);
}

void DduiManager::registerMessageBox(uint id, Player& player, MessageBox* box) {
    std::lock_guard<std::mutex> lock(mMutex);

    mActiveMessageBoxes[id]            = box;
    mPlayerActiveMessageBoxes[&player] = box;
}

void DduiManager::unregisterMessageBox(uint id, Player& player) {
    std::lock_guard<std::mutex> lock(mMutex);

    mActiveMessageBoxes.erase(id);
    mPlayerActiveMessageBoxes.erase(&player);
}

void DduiManager::handleDataStoreUpdate(
    Player&                                        player,
    std::string const&                             datastoreName,
    std::string const&                             property,
    std::string const&                             path,
    std::variant<double, bool, std::string> const& value
) {
    if (datastoreName == getDatastoreName()) {
        if (property.rfind(getCustomFormPropertyName(), 0) == 0) {
            std::string idStr   = property.substr(getCustomFormPropertyName().length());
            bool        isDigit = !idStr.empty();
            for (char c : idStr) {
                if (c < '0' || c > '9') {
                    isDigit = false;
                    break;
                }
            }
            if (isDigit) {
                uint formId = std::stoul(idStr);
                if (auto* form = FormIdManager::getCustomForm(formId)) {
                    form->handleDataStoreUpdate(property, path, value);
                    return;
                }
            }
            if (auto* form = FormIdManager::getCustomForm(player)) {
                form->handleDataStoreUpdate(property, path, value);
            }
        } else if (property.rfind(getMessageBoxPropertyName(), 0) == 0) {
            std::string idStr   = property.substr(getMessageBoxPropertyName().length());
            bool        isDigit = !idStr.empty();
            for (char c : idStr) {
                if (c < '0' || c > '9') {
                    isDigit = false;
                    break;
                }
            }
            if (isDigit) {
                uint formId = std::stoul(idStr);
                if (auto* box = FormIdManager::getMessageBox(formId)) {
                    box->handleDataStoreUpdate(property, path, value);
                    return;
                }
            }
            if (auto* box = FormIdManager::getMessageBox(player)) {
                box->handleDataStoreUpdate(property, path, value);
            }
        }
    }
}

void DduiManager::handleScreenClosed(uint formId, ::DataDrivenScreenClosedReason reason, Player& player) {
    if (auto* form = FormIdManager::getCustomForm(formId)) {
        form->handleScreenClosed(reason, player);
    } else if (auto* box = FormIdManager::getMessageBox(formId)) {
        box->handleScreenClosed(reason, player);
    }
}

} // namespace ll::ddui
