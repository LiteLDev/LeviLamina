#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileAccessTransforms();

    virtual bool readTransform(::std::vector<uchar>& stream) const;

    virtual bool writeTransform(::std::vector<uchar>& stream) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
