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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FileAccessTransforms();

    // vIndex: 1, symbol: ?readTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool readTransform(std::vector<uchar>&) const;

    // vIndex: 2, symbol: ?writeTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool writeTransform(std::vector<uchar>&) const;

    // NOLINTEND
};
