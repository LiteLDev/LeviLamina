#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
namespace Core { class FlatFileManifestInfo; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk15f051;
    ::ll::UntypedStorage<8, 24> mUnk4b8622;
    ::ll::UntypedStorage<8, 8>  mUnk77e960;
    ::ll::UntypedStorage<8, 8>  mUnk2f7b1d;
    ::ll::UntypedStorage<8, 32> mUnkcac0b2;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileManifest& operator=(FlatFileManifest const&);
    FlatFileManifest(FlatFileManifest const&);
    FlatFileManifest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createFromVector(
        ::Core::PathView                                   manifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector,
        uint64                                             version,
        bool                                               validatePaths
    );

    MCNAPI ::Core::FlatFileManifestInfo const*
    findFileOrDirectoryEntry(::Core::PathView filePath, bool skipDeleted) const;

    MCNAPI void writeToStream(::BinaryStream& manifestFileStream) const;

    MCNAPI ~FlatFileManifest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
