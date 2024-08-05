#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace Core { class FlatFileManifestInfo; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class FlatFileManifest {
public:
    // prevent constructor by default
    FlatFileManifest& operator=(FlatFileManifest const&);
    FlatFileManifest(FlatFileManifest const&);
    FlatFileManifest();

public:
    // NOLINTBEGIN
    MCAPI class Core::FlatFileManifestInfo const*
    findFileOrDirectoryEntry(class Core::Path const& filePath, bool skipDeleted) const;

    MCAPI class Bedrock::Result<void>
    readFromStream(std::string const& manifestFileStr, class Core::Path const& manifestPath, bool validatePaths);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addMissingDirectoriesForEntry(class Core::Path const& fileOrDirectoryPath);

    MCAPI void _clear();

    MCAPI void _createFromVector(
        class Core::Path const&                              manifestPath,
        std::vector<class Core::FlatFileManifestInfo> const& manifestInfoVector,
        uint64                                               version,
        bool                                                 validatePaths
    );

    MCAPI class Bedrock::Result<void> _readHeaderFromStream(class ReadOnlyBinaryStream& manifestFileStream);

    // NOLINTEND
};

}; // namespace Core
