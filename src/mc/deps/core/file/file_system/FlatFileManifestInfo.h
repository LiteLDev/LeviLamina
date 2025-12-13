#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifestInfo {
public:
    // FlatFileManifestInfo inner types define
    enum class FlatFileManifestInfoFlags : uchar {
        File    = 1,
        Deleted = 128,
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
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const&);
    FlatFileManifestInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlatFileManifestInfo(::Core::FlatFileManifestInfo const&);

    MCNAPI ::Bedrock::Result<void> readFromStream(::ReadOnlyBinaryStream& manifestFileStream);

    MCNAPI void setPath(::Core::PathView path);

    MCNAPI ~FlatFileManifestInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FlatFileManifestInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
