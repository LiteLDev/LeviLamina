#pragma once

#include "ll/api/base/StdInt.h"
#include <mutex>
#include <string>
#include <unordered_map>
#include <variant>

class Player;
enum class DataDrivenScreenClosedReason : uchar;

namespace ll::ddui {

class CustomForm;
class MessageBox;

class DduiManager {
public:
    DduiManager() = delete;

    [[nodiscard]] static std::string getDatastoreName() { return "minecraft"; }
    [[nodiscard]] static std::string getCustomFormScreenId() { return "minecraft:custom_form"; }
    [[nodiscard]] static std::string getMessageBoxScreenId() { return "minecraft:message_box"; }
    [[nodiscard]] static std::string getCustomFormPropertyName() { return "custom_form_data_"; }
    [[nodiscard]] static std::string getMessageBoxPropertyName() { return "message_box_data_"; }

    static void registerCustomForm(uint id, Player& player, CustomForm* form);
    static void unregisterCustomForm(uint id, Player& player);

    static void registerMessageBox(uint id, Player& player, MessageBox* box);
    static void unregisterMessageBox(uint id, Player& player);

    static void handleDataStoreUpdate(
        Player&                                        player,
        std::string const&                             datastoreName,
        std::string const&                             property,
        std::string const&                             path,
        std::variant<double, bool, std::string> const& value
    );

    static void handleScreenClosed(uint formId, ::DataDrivenScreenClosedReason reason, Player& player);

private:
    friend class FormIdManager;

    static std::unordered_map<uint, CustomForm*>    mActiveCustomForms;
    static std::unordered_map<uint, MessageBox*>    mActiveMessageBoxes;
    static std::unordered_map<Player*, CustomForm*> mPlayerActiveCustomForms;
    static std::unordered_map<Player*, MessageBox*> mPlayerActiveMessageBoxes;
    static std::mutex                               mMutex;
};

} // namespace ll::ddui
