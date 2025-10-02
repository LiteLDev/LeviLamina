#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class RakString; }
namespace RakNet { struct AddressOrGUID; }
// clang-format on

namespace RakNet {

struct FilterSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> banOnFilterTimeExceed;
    ::ll::TypedStorage<1, 1, bool> kickOnDisallowedMessage;
    ::ll::TypedStorage<1, 1, bool> banOnDisallowedMessage;
    ::ll::TypedStorage<4, 4, uint> disallowedMessageBanTimeMS;
    ::ll::TypedStorage<4, 4, uint> timeExceedBanTimeMS;
    ::ll::TypedStorage<4, 4, uint> maxMemberTimeMS;
    ::ll::TypedStorage<8, 8, void (*)(::RakNet::RakPeerInterface*, ::RakNet::AddressOrGUID, int, void*, uchar)>
                                    invalidMessageCallback;
    ::ll::TypedStorage<8, 8, void*> disallowedCallbackUserData;
    ::ll::TypedStorage<8, 8, void (*)(::RakNet::RakPeerInterface*, ::RakNet::AddressOrGUID, int, void*)>
                                          timeoutCallback;
    ::ll::TypedStorage<8, 8, void*>       timeoutUserData;
    ::ll::TypedStorage<4, 4, int>         filterSetID;
    ::ll::TypedStorage<1, 256, bool[256]> allowedIDs;
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<::RakNet::RakString, ::RakNet::RakString, $unknown_type>>
        allowedRPC4;
    // NOLINTEND
};

} // namespace RakNet
