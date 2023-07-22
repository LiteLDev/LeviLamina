/**
 * @file  FileAccessTransforms.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileAccessTransforms.
 *
 */
class FileAccessTransforms {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEACCESSTRANSFORMS
public:
    class FileAccessTransforms& operator=(class FileAccessTransforms const &) = delete;
    FileAccessTransforms(class FileAccessTransforms const &) = delete;
    FileAccessTransforms() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILEACCESSTRANSFORMS
    /**
     * @symbol  ?readTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    MCVAPI bool readTransform(std::vector<unsigned char> &) const;
    /**
     * @symbol  ?writeTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    MCVAPI bool writeTransform(std::vector<unsigned char> &) const;
#endif

};