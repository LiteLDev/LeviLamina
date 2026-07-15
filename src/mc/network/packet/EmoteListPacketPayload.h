#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct EmoteListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>            mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>> mEmotePieceIds;
    // NOLINTEND
};
