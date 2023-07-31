#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class EncryptedZipTransforms {

public:
    // prevent constructor by default
    EncryptedZipTransforms& operator=(EncryptedZipTransforms const&) = delete;
    EncryptedZipTransforms(EncryptedZipTransforms const&)            = delete;
    EncryptedZipTransforms()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readTransform\@EncryptedZipTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool readTransform(std::vector<unsigned char>&) const;
    /**
     * @vftbl 2
     * @symbol ?writeTransform\@EncryptedZipTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool writeTransform(std::vector<unsigned char>&) const;
    /**
     * @symbol
     * ??0EncryptedZipTransforms\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI
    EncryptedZipTransforms(class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);
    // NOLINTEND
};
