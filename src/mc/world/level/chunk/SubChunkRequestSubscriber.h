#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacket.h"

// auto generated forward declare list
// clang-format off
class SubChunkRequestManager;
// clang-format on

class SubChunkRequestSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SubChunkRequestManager&>                                       mManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(::SubChunkPacket::SubChunkRequestResult)>> mCallback;
    // NOLINTEND
};
