#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace Core { class FlatFileManifestInfo; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkac2d9c;
    ::ll::UntypedStorage<8, 24> mUnkae11c7;
    ::ll::UntypedStorage<8, 8> mUnk77e960;
    ::ll::UntypedStorage<8, 8> mUnk2f7b1d;
    ::ll::UntypedStorage<8, 32> mUnk5f9a29;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileManifest& operator=(FlatFileManifest const&);
    FlatFileManifest(FlatFileManifest const&);
    FlatFileManifest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addMissingDirectoriesForEntry(::Core::PathView fileOrDirectoryPath);

    MCNAPI void _clear();

    MCNAPI void _createFromVector(::Core::PathView manifestPath, ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector, uint64 version, bool validatePaths);

    MCNAPI ::Bedrock::Result<void> _readHeaderFromStream(::ReadOnlyBinaryStream& manifestFileStream);

    MCNAPI void createFromVectorWithValidation(::Core::PathView manifestPath, ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector, uint64 version);

    MCNAPI ::Core::FlatFileManifestInfo const* findFileOrDirectoryEntry(::Core::PathView filePath, bool skipDeleted) const;

    MCNAPI ::Bedrock::Result<void> readFromStream(::std::string const& manifestFileStr, ::Core::PathView manifestPath, bool validatePaths);

    MCNAPI void writeToStream(::BinaryStream& manifestFileStream) const;
    // NOLINTEND

};

}
