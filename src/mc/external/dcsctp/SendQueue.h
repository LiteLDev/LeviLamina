#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class OutgoingMessageIdTag; }
namespace dcsctp { struct Data; }
// clang-format on

namespace dcsctp {

class SendQueue {
public:
    // SendQueue inner types declare
    // clang-format off
    struct DataToSend;
    // clang-format on

    // SendQueue inner types define
    struct DataToSend {
    public:
        // prevent constructor by default
        DataToSend& operator=(DataToSend const&);
        DataToSend(DataToSend const&);
        DataToSend();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DataToSend(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>, ::dcsctp::Data);

        MCAPI ~DataToSend();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>, ::dcsctp::Data);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SendQueue& operator=(SendQueue const&);
    SendQueue(SendQueue const&);
    SendQueue();
};

} // namespace dcsctp
