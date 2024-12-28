#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {
public:
    // prevent constructor by default
    FileAccessTransforms& operator=(FileAccessTransforms const&);
    FileAccessTransforms(FileAccessTransforms const&);
    FileAccessTransforms();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileAccessTransforms();

    // vIndex: 1
    virtual bool readTransform(::std::vector<uchar>& stream) const;

    // vIndex: 2
    virtual bool writeTransform(::std::vector<uchar>& stream) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
