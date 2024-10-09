#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileAccessTransforms.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

class EncryptedZipTransforms : public ::FileAccessTransforms {
public:
    // prevent constructor by default
    EncryptedZipTransforms& operator=(EncryptedZipTransforms const&);
    EncryptedZipTransforms(EncryptedZipTransforms const&);
    EncryptedZipTransforms();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncryptedZipTransforms() = default;

    // vIndex: 1
    virtual bool readTransform(std::vector<uchar>& stream) const;

    // vIndex: 2
    virtual bool writeTransform(std::vector<uchar>& stream) const;

    MCAPI explicit EncryptedZipTransforms(
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
