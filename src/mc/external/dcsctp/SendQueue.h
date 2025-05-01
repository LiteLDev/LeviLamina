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
        // member functions
        // NOLINTBEGIN
        MCNAPI DataToSend(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>, ::dcsctp::Data);

        MCNAPI ~DataToSend();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>, ::dcsctp::Data);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
};

} // namespace dcsctp
