#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
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
    ::ll::UntypedStorage<8, 32> mUnk807445;
    ::ll::UntypedStorage<8, 8>  mUnkb6e6bf;
    ::ll::UntypedStorage<8, 8>  mUnka6c43a;
    ::ll::UntypedStorage<1, 1>  mUnk3b7215;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const&);
    FlatFileManifestInfo(FlatFileManifestInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlatFileManifestInfo();

    MCNAPI ::Core::PathBuffer<::std::string> const& getPath() const;

    MCNAPI bool isDeleted() const;

    MCNAPI bool isFile() const;

    MCNAPI ::Bedrock::Result<void> readFromStream(::ReadOnlyBinaryStream& manifestFileStream);

    MCNAPI void setAttributes(::Core::FileType fileType, bool isDeleted);

    MCNAPI void setFileSize(uint64 fileSize);

    MCNAPI void setFileType(::Core::FileType fileType);

    MCNAPI void setPath(::Core::PathView path);

    MCNAPI void setSeekPos(uint64 seekPos);

    MCNAPI void writeToStream(::BinaryStream& manifestFileStream) const;

    MCNAPI ~FlatFileManifestInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
