#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/file/FileAccessTransforms.h"

class EncryptedZipTransforms : public ::FileAccessTransforms {
public:
    // prevent constructor by default
    EncryptedZipTransforms& operator=(EncryptedZipTransforms const&) = delete;
    EncryptedZipTransforms(EncryptedZipTransforms const&)            = delete;
    EncryptedZipTransforms()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?readTransform@EncryptedZipTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool readTransform(std::vector<uchar>&) const;

    // vIndex: 2, symbol: ?writeTransform@EncryptedZipTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool writeTransform(std::vector<uchar>&) const;

    // symbol:
    // ??0EncryptedZipTransforms@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI EncryptedZipTransforms(gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);

    // NOLINTEND
};
