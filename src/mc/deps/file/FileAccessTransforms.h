#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileAccessTransforms {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEACCESSTRANSFORMS
public:
    FileAccessTransforms& operator=(FileAccessTransforms const&) = delete;
    FileAccessTransforms(FileAccessTransforms const&)            = delete;
    FileAccessTransforms()                                       = delete;
#endif

public:
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
};
