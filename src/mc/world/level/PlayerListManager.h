#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListManager {
public:
    // prevent constructor by default
    PlayerListManager& operator=(PlayerListManager const&);
    PlayerListManager(PlayerListManager const&);

public:
    // NOLINTBEGIN
    MCAPI PlayerListManager();

    MCAPI std::unordered_map<class mce::UUID, class PlayerListEntry>& getPlayerList();

    MCAPI std::unordered_map<class mce::UUID, class PlayerListEntry> const& getPlayerList() const;

    MCAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const& uuid) const;

    MCAPI std::string const& getPlayerXUID(class mce::UUID const& uuid) const;

    MCAPI void initializeWithGameplayUserManagerOnServer(class GameplayUserManager& gameplayUserManager);

    MCAPI void setPacketSender(class PacketSender& packetSender);

    MCAPI ~PlayerListManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onAnyGameplayUsersRemoved();

    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
