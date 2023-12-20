#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
        // NOLINTBEGIN
        // symbol: ??0DataToSend@SendQueue@dcsctp@@QEAA@UData@2@@Z
        MCAPI explicit DataToSend(struct dcsctp::Data);

        // symbol: ??1DataToSend@SendQueue@dcsctp@@QEAA@XZ
        MCAPI ~DataToSend();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SendQueue& operator=(SendQueue const&);
    SendQueue(SendQueue const&);
    SendQueue();
};

}; // namespace dcsctp
