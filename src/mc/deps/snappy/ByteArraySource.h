#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy {

class ByteArraySource {
public:
    // prevent constructor by default
    ByteArraySource& operator=(ByteArraySource const&);
    ByteArraySource(ByteArraySource const&);
    ByteArraySource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ByteArraySource();

    // vIndex: 1
    virtual uint64 Available() const;

    // vIndex: 2
    virtual char const* Peek(uint64* len);

    // vIndex: 3
    virtual void Skip(uint64 n);

    // NOLINTEND
};

}; // namespace snappy
