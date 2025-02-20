#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
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
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatFileManifestInfo();

    MCAPI FlatFileManifestInfo(::Core::FlatFileManifestInfo const&);

    MCAPI ::Bedrock::Result<void> readFromStream(::ReadOnlyBinaryStream& manifestFileStream);

    MCAPI void setAttributes(::Core::FileType fileType, bool isDeleted);

    MCAPI void setPath(::Core::PathView path);

    MCAPI ~FlatFileManifestInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Core::FlatFileManifestInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
