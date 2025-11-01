#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DcSctpMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkcab3e9;
    ::ll::UntypedStorage<4, 4> mUnk893946;
    ::ll::UntypedStorage<8, 24> mUnkbd7732;
    // NOLINTEND

public:
    // prevent constructor by default
    DcSctpMessage& operator=(DcSctpMessage const&);
    DcSctpMessage(DcSctpMessage const&);
    DcSctpMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DcSctpMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
