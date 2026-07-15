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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void sendPermissionsRequest(::ActorUniqueID playerId);
#endif
    // NOLINTEND
};
