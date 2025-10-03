#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Chunk {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Chunk() = default;

    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>&) const = 0;

    // vIndex: 2
    virtual ::std::string ToString() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
