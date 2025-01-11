#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class ConfigParamsBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConfigParamsBase() = default;

    // vIndex: 1
    virtual uint getClusterSize() const = 0;

    // vIndex: 2
    virtual uint getChunkSize() const = 0;

    // vIndex: 3
    virtual uint getDataBlockSize() const = 0;

    // vIndex: 4
    virtual uint getTotalBlocksCount() const = 0;

    // vIndex: 5
    virtual uint getFirstFileDataBlockIndex() const = 0;

    // vIndex: 6
    virtual bool isLargeWritesEmulated() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SFAT
