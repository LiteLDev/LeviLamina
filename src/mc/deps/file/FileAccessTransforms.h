#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {

public:
    // prevent constructor by default
    FileAccessTransforms& operator=(FileAccessTransforms const&) = delete;
    FileAccessTransforms(FileAccessTransforms const&)            = delete;
    FileAccessTransforms()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool readTransform(std::vector<unsigned char>&) const;
    /**
     * @vftbl 2
     * @symbol ?writeTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool writeTransform(std::vector<unsigned char>&) const;
    // NOLINTEND
};
