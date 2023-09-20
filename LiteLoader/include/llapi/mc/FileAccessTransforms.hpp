/**
 * @file  FileAccessTransforms.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool readTransform(std::vector<unsigned char> &) const;
    /**
     * @vftbl 2
     * @symbol ?writeTransform\@FileAccessTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool writeTransform(std::vector<unsigned char> &) const;

};
