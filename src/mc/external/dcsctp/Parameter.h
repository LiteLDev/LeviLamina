#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Parameter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Parameter() = default;

    virtual void SerializeTo(::std::vector<uchar>&) const = 0;

    virtual ::std::string ToString() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
