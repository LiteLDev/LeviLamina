#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class PacketSender;
class PlayerLocationReceiver;
class PlayerLocationSender;
namespace mce { class UUID; }
// clang-format on

class PlayerListManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk1a674c;
    ::ll::UntypedStorage<8, 24>  mUnke5760d;
    ::ll::UntypedStorage<8, 24>  mUnk2ade5e;
    ::ll::UntypedStorage<8, 24>  mUnk1e3a79;
    ::ll::UntypedStorage<8, 128> mUnk86130e;
    ::ll::UntypedStorage<8, 128> mUnk5e1e17;
    ::ll::UntypedStorage<8, 16>  mUnka300dc;
    ::ll::UntypedStorage<8, 16>  mUnkadd5e8;
    ::ll::UntypedStorage<8, 16>  mUnk7dba24;
    ::ll::UntypedStorage<8, 8>   mUnk6f10d4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListManager& operator=(PlayerListManager const&);
    PlayerListManager(PlayerListManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerListManager();

    MCNAPI void _onAnyGameplayUsersRemoved();

    MCNAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCNAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCNAPI void
    initializeWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI void removeByUUID(::mce::UUID const& uuid);

    MCNAPI void setPacketSender(::PacketSender& packetSender);

    MCNAPI void setPlayerLocationReceiver(::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> playerLocationReceiver);

    MCNAPI void setPlayerLocationSender(::Bedrock::NonOwnerPointer<::PlayerLocationSender> playerLocationSender);

    MCNAPI ~PlayerListManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
