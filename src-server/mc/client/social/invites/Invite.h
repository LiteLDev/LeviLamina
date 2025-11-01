#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Invites {

struct Invite {
public:
    // Invite inner types define
    enum class State : int {
        Uninitialized = 0,
        Accepted      = 1,
        Declined      = 2,
    };

    enum class InvitationType : int {
        None   = 0,
        Realms = 1,
        Game   = 2,
    };

    enum class InvitationStatus : int {
        Active   = 0,
        Accepted = 1,
        Rejected = 2,
        Expired  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9d568f;
    ::ll::UntypedStorage<8, 32> mUnkf59ece;
    ::ll::UntypedStorage<4, 4>  mUnkbac056;
    ::ll::UntypedStorage<8, 32> mUnkb3d768;
    ::ll::UntypedStorage<8, 32> mUnkf28c69;
    ::ll::UntypedStorage<8, 32> mUnk8c97c0;
    ::ll::UntypedStorage<8, 32> mUnkc6c2d1;
    ::ll::UntypedStorage<8, 32> mUnka78911;
    ::ll::UntypedStorage<4, 4>  mUnkad5dfb;
    ::ll::UntypedStorage<4, 4>  mUnk77bca4;
    ::ll::UntypedStorage<8, 8>  mUnkc9bf84;
    ::ll::UntypedStorage<8, 8>  mUnk799b57;
    // NOLINTEND

public:
    // prevent constructor by default
    Invite& operator=(Invite const&);
    Invite(Invite const&);
    Invite();
};

} // namespace Invites
