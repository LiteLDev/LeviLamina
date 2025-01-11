#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileAccessTransforms() = default;

    // vIndex: 1
    virtual bool readTransform(::std::vector<uchar>& stream) const;

    // vIndex: 2
    virtual bool writeTransform(::std::vector<uchar>& stream) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $readTransform(::std::vector<uchar>& stream) const;

    MCAPI bool $writeTransform(::std::vector<uchar>& stream) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
