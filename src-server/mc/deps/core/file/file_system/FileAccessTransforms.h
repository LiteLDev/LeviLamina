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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $readTransform(::std::vector<uchar>& stream) const;

    MCNAPI bool $writeTransform(::std::vector<uchar>& stream) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
