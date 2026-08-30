#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Parameter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Parameter();

    virtual void SerializeTo(::std::vector<uchar>& out) const = 0;

    virtual ::std::string ToString() const = 0;
    // NOLINTEND
};

} // namespace dcsctp
