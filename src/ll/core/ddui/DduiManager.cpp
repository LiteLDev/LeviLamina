#include "ll/core/ddui/DduiManager.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"
#include "mc/world/actor/player/Player.h"
#include <charconv>

namespace ll::ddui {

std::mutex                                                  DduiManager::mMutex;
std::unordered_map<uint, std::shared_ptr<DduiSession>>      DduiManager::mActiveSessions;
std::unordered_map<mce::UUID, std::shared_ptr<DduiSession>> DduiManager::mPlayerActiveSessions;

constexpr size_t MaxClientStringSize = 2500;

void DduiManager::registerSession(std::shared_ptr<DduiSession> const& session, Player& player) {
    std::shared_ptr<DduiSession> oldSession;
    {
        std::lock_guard<std::mutex> lock(mMutex);

        mce::UUID uuid = player.getUuid();
        if (auto it = mPlayerActiveSessions.find(uuid); it != mPlayerActiveSessions.end()) {
            oldSession = it->second;
        }

        mActiveSessions[session->getId()] = session;
        mPlayerActiveSessions[uuid]       = session;
    }

    if (oldSession) {
        oldSession->close(&player);
    }
}

void DduiManager::unregisterSession(uint id, mce::UUID const& playerUuid) {
    std::lock_guard<std::mutex> lock(mMutex);
    mActiveSessions.erase(id);

    if (auto it = mPlayerActiveSessions.find(playerUuid);
        it != mPlayerActiveSessions.end() && it->second->getId() == id) {
        mPlayerActiveSessions.erase(it);
    }
}

std::optional<uint> DduiManager::parseFormId(std::string_view str) {
    if (str.empty() || str.size() > 10) return std::nullopt;

    uint value = 0;

    auto [ptr, ec] = std::from_chars(str.data(), str.data() + str.size(), value);
    if (ec == std::errc() && ptr == str.data() + str.size()) {
        return value;
    }

    return std::nullopt;
}

void DduiManager::handleDataStoreUpdate(
    Player&                                        player,
    std::string const&                             datastoreName,
    std::string const&                             property,
    std::string const&                             path,
    std::variant<double, bool, std::string> const& value
) {
    if (property.length() > 256 || path.length() > 256) return;
    if (auto const* str = std::get_if<std::string>(&value)) {
        if (str->size() > MaxClientStringSize) return;
    }

    if (datastoreName == getDatastoreName()) {
        std::shared_ptr<DduiSession> session;
        if (property.rfind(getCustomFormPropertyName(), 0) == 0) {
            std::string idStr = property.substr(getCustomFormPropertyName().length());

            auto formIdOpt = parseFormId(idStr);
            if (formIdOpt) {
                std::lock_guard<std::mutex> lock(mMutex);

                if (auto it = mActiveSessions.find(*formIdOpt); it != mActiveSessions.end()) {
                    session = it->second;
                }
            }
        } else if (property.rfind(getMessageBoxPropertyName(), 0) == 0) {
            std::string idStr = property.substr(getMessageBoxPropertyName().length());

            auto formIdOpt = parseFormId(idStr);
            if (formIdOpt) {
                std::lock_guard<std::mutex> lock(mMutex);

                if (auto it = mActiveSessions.find(*formIdOpt); it != mActiveSessions.end()) {
                    session = it->second;
                }
            }
        }

        if (session) {
            if (session->getPlayerUuid() == player.getUuid()) {
                session->handleDataStoreUpdate(property, path, value);
            }
        }
    }
}

void DduiManager::handleScreenClosed(uint formId, ::DataDrivenScreenClosedReason reason, Player& player) {
    std::shared_ptr<DduiSession> session;
    {
        std::lock_guard<std::mutex> lock(mMutex);

        if (auto it = mActiveSessions.find(formId); it != mActiveSessions.end()) {
            session = it->second;
        }
    }

    if (session) {
        if (session->getPlayerUuid() == player.getUuid()) {
            session->handleScreenClosed(reason);
        }
    }
}

void DduiManager::closeSessionForPlayer(mce::UUID const& uuid, Player* player) {
    std::shared_ptr<DduiSession> session;
    {
        std::lock_guard<std::mutex> lock(mMutex);

        if (auto it = mPlayerActiveSessions.find(uuid); it != mPlayerActiveSessions.end()) {
            session = it->second;
        }
    }

    if (session) {
        session->close(player);
    }
}

} // namespace ll::ddui
