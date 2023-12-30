#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

template <typename T0>
class UnwrappedSequenceNumber {
public:
    // prevent constructor by default
    UnwrappedSequenceNumber& operator=(UnwrappedSequenceNumber const&);
    UnwrappedSequenceNumber(UnwrappedSequenceNumber const&);
    UnwrappedSequenceNumber();
};

}; // namespace dcsctp
