#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class PlayerAbilitiesManager;
struct ActorUniqueID;
// clang-format on

class PlayerPermissionsSynchroniser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>           mPacketSender;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager>> mPlayerAbilitiesManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsSynchroniser();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerPermissionsSynchroniser(
        ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager
    );

#ifdef LL_PLAT_C
    MCAPI void sendPermissionsRequest(::ActorUniqueID playerId);
#endif

    MCAPI void setPacketSender(::PacketSender& packetSender);

    MCAPI ~PlayerPermissionsSynchroniser();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
