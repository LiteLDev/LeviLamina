#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

namespace Core {

class FlatFileManifestInfo {
public:
    // FlatFileManifestInfo inner types define
    enum class FlatFileManifestInfoFlags : uchar {
        // bitfield representation
        File    = 1 << 0,
        Deleted = 1 << 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2488ef;
    ::ll::UntypedStorage<8, 8>  mUnkb6e6bf;
    ::ll::UntypedStorage<8, 8>  mUnka6c43a;
    ::ll::UntypedStorage<1, 1>  mUnk3b7215;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileManifestInfo(FlatFileManifestInfo const&);
    FlatFileManifestInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Core::FlatFileManifestInfo& operator=(::Core::FlatFileManifestInfo const&);

    MCAPI ::Bedrock::Result<void> readFromStream(::ReadOnlyBinaryStream& manifestFileStream);

    MCAPI ~FlatFileManifestInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
