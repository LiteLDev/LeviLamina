#pragma once

#include "ll/api/base/StdInt.h"
#include "ll/core/ddui/DduiSession.h"
#include "mc/platform/UUID.h"
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>

class Player;
enum class DataDrivenScreenClosedReason : uchar;

namespace ll::ddui {

class DduiManager {
public:
    DduiManager() = delete;

    static void registerSession(std::shared_ptr<DduiSession> const& session, Player& player);
    static void unregisterSession(uint id, mce::UUID const& playerUuid);

    static void handleDataStoreUpdate(
        Player&                                        player,
        std::string const&                             datastoreName,
        std::string const&                             property,
        std::string const&                             path,
        std::variant<double, bool, std::string> const& value
    );

    static void handleScreenClosed(uint formId, ::DataDrivenScreenClosedReason reason, Player& player);

    static std::optional<uint> parseFormId(std::string_view str);

    static void closeSessionForPlayer(mce::UUID const& uuid, Player* player = nullptr);

private:
    friend class FormIdManager;
    friend class CustomForm;
    friend class CustomFormSession;
    friend class MessageBox;
    friend class MessageBoxSession;

    [[nodiscard]] static std::string getDatastoreName() { return "minecraft"; }
    [[nodiscard]] static std::string getCustomFormScreenId() { return "minecraft:custom_form"; }
    [[nodiscard]] static std::string getMessageBoxScreenId() { return "minecraft:message_box"; }
    [[nodiscard]] static std::string getCustomFormPropertyName() { return "custom_form_data_"; }
    [[nodiscard]] static std::string getMessageBoxPropertyName() { return "message_box_data_"; }

    [[nodiscard]] static std::string getCustomFormPropertyName(uint formId) {
        return getCustomFormPropertyName() + std::to_string(formId);
    }
    [[nodiscard]] static std::string getMessageBoxPropertyName(uint formId) {
        return getMessageBoxPropertyName() + std::to_string(formId);
    }

    static std::mutex                                                  mMutex;
    static std::unordered_map<uint, std::shared_ptr<DduiSession>>      mActiveSessions;
    static std::unordered_map<mce::UUID, std::shared_ptr<DduiSession>> mPlayerActiveSessions;
};

} // namespace ll::ddui
