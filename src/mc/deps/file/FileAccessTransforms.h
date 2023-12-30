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
    // vIndex: 0, symbol: __gen_??1FileAccessTransforms@@UEAA@XZ
    virtual ~FileAccessTransforms() = default;

    // vIndex: 1, symbol: ?readTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool readTransform(std::vector<uchar>& stream) const;

    // vIndex: 2, symbol: ?writeTransform@FileAccessTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool writeTransform(std::vector<uchar>& stream) const;

    // NOLINTEND
};
