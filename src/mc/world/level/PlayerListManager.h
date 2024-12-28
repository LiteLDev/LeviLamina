#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class PacketSender;
class PlayerListEntry;
namespace mce { class UUID; }
// clang-format on

class PlayerListManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1a674c;
    ::ll::UntypedStorage<8, 24> mUnke5760d;
    ::ll::UntypedStorage<8, 16> mUnka300dc;
    ::ll::UntypedStorage<8, 16> mUnkadd5e8;
    ::ll::UntypedStorage<8, 16> mUnk7dba24;
    ::ll::UntypedStorage<8, 8>  mUnk6f10d4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListManager& operator=(PlayerListManager const&);
    PlayerListManager(PlayerListManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerListManager();

    MCAPI void _onAnyGameplayUsersRemoved();

    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& getPlayerList() const;

    MCAPI ::std::string const& getPlayerPlatformOnlineId(::mce::UUID const& uuid) const;

    MCAPI ::std::string const& getPlayerXUID(::mce::UUID const& uuid) const;

    MCAPI void initializeWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI void setPacketSender(::PacketSender& packetSender);

    MCAPI ::PlayerListEntry* tryGetPlayerEntry(::mce::UUID const& uuid);

    MCAPI ~PlayerListManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
