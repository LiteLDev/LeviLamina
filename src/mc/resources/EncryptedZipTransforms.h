#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileAccessTransforms.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
// clang-format on

class EncryptedZipTransforms : public ::FileAccessTransforms {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk766005;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedZipTransforms& operator=(EncryptedZipTransforms const&);
    EncryptedZipTransforms(EncryptedZipTransforms const&);
    EncryptedZipTransforms();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool readTransform(::std::vector<uchar>& stream) const /*override*/;

    virtual bool writeTransform(::std::vector<uchar>&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EncryptedZipTransforms(
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $readTransform(::std::vector<uchar>& stream) const;

    MCNAPI bool $writeTransform(::std::vector<uchar>&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
