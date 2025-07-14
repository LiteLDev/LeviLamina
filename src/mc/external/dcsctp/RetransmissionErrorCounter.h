#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class RetransmissionErrorCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd7db3b;
    ::ll::UntypedStorage<4, 8>  mUnk93e650;
    ::ll::UntypedStorage<4, 4>  mUnk3a53e4;
    // NOLINTEND

public:
    // prevent constructor by default
    RetransmissionErrorCounter& operator=(RetransmissionErrorCounter const&);
    RetransmissionErrorCounter(RetransmissionErrorCounter const&);
    RetransmissionErrorCounter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI bool Increment(::std::string_view reason);
    // NOLINTEND
};

} // namespace dcsctp
