#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {
public:
    // prevent constructor by default
    FileAccessTransforms& operator=(FileAccessTransforms const&);
    FileAccessTransforms(FileAccessTransforms const&);
    FileAccessTransforms();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileAccessTransforms() = default;

    // vIndex: 1
    virtual bool readTransform(std::vector<uchar>& stream) const;

    // vIndex: 2
    virtual bool writeTransform(std::vector<uchar>& stream) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool readTransform$(std::vector<uchar>& stream) const;

    MCAPI bool writeTransform$(std::vector<uchar>& stream) const;

    // NOLINTEND
};
