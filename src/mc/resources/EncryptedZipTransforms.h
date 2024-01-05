#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/file/FileAccessTransforms.h"

class EncryptedZipTransforms : public ::FileAccessTransforms {
public:
    // prevent constructor by default
    EncryptedZipTransforms& operator=(EncryptedZipTransforms const&);
    EncryptedZipTransforms(EncryptedZipTransforms const&);
    EncryptedZipTransforms();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EncryptedZipTransforms@@UEAA@XZ
    virtual ~EncryptedZipTransforms() = default;

    // vIndex: 1, symbol: ?readTransform@EncryptedZipTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool readTransform(std::vector<uchar>& stream) const;

    // vIndex: 2, symbol: ?writeTransform@EncryptedZipTransforms@@UEBA_NAEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool writeTransform(std::vector<uchar>& stream) const;

    // symbol:
    // ??0EncryptedZipTransforms@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    MCAPI explicit EncryptedZipTransforms(
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
