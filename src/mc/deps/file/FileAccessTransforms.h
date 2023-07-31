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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILEACCESSTRANSFORMS
    /**
     * @symbol ?readTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    MCVAPI bool readTransform(std::vector<unsigned char>&) const;
    /**
     * @symbol ?writeTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    MCVAPI bool writeTransform(std::vector<unsigned char>&) const;
#endif
    // NOLINTEND
};
