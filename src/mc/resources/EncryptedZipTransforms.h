#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileAccessTransforms.h"

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

    virtual bool writeTransform(::std::vector<uchar>& stream) const /*override*/;

    virtual ~EncryptedZipTransforms() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $readTransform(::std::vector<uchar>& stream) const;

    MCNAPI bool $writeTransform(::std::vector<uchar>& stream) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
