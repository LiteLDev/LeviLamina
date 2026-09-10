#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ScoreboardIdentityPacketType.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardIdentityPacketInfo;
// clang-format on

class SetScoreboardIdentityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScoreboardIdentityPacketType>                 mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScoreboardIdentityPacketInfo>> mIdentityInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SetScoreboardIdentityPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
