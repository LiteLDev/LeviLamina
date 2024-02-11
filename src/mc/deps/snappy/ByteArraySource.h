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
    // vIndex: 0, symbol: ??1ByteArraySource@snappy@@UEAA@XZ
    virtual ~ByteArraySource();

    // vIndex: 1, symbol: ?Available@ByteArraySource@snappy@@UEBA_KXZ
    virtual uint64 Available() const;

    // vIndex: 2, symbol: ?Peek@ByteArraySource@snappy@@UEAAPEBDPEA_K@Z
    virtual char const* Peek(uint64* len);

    // vIndex: 3, symbol: ?Skip@ByteArraySource@snappy@@UEAAX_K@Z
    virtual void Skip(uint64 n);

    // NOLINTEND
};

}; // namespace snappy
