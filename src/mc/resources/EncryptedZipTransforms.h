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
    // vIndex: 1
    virtual bool readTransform(::std::vector<uchar>& stream) const /*override*/;

    // vIndex: 2
    virtual bool writeTransform(::std::vector<uchar>& stream) const /*override*/;

    // vIndex: 0
    virtual ~EncryptedZipTransforms() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EncryptedZipTransforms(::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $readTransform(::std::vector<uchar>& stream) const;

    MCFOLD bool $writeTransform(::std::vector<uchar>& stream) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
