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
    // symbol: ?findFileOrDirectoryEntry@FlatFileManifest@Core@@QEBAPEBVFlatFileManifestInfo@2@AEBVPath@2@_N@Z
    MCAPI class Core::FlatFileManifestInfo const* findFileOrDirectoryEntry(class Core::Path const&, bool) const;

    // symbol:
    // ?readFromStream@FlatFileManifest@Core@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@2@_N@Z
    MCAPI class Bedrock::Result<void> readFromStream(std::string const&, class Core::Path const&, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addMissingDirectoriesForEntry@FlatFileManifest@Core@@AEAAXAEBVPath@2@@Z
    MCAPI void _addMissingDirectoriesForEntry(class Core::Path const&);

    // symbol: ?_clear@FlatFileManifest@Core@@AEAAXXZ
    MCAPI void _clear();

    // symbol:
    // ?_createFromVector@FlatFileManifest@Core@@AEAAXAEBVPath@2@AEBV?$vector@VFlatFileManifestInfo@Core@@V?$allocator@VFlatFileManifestInfo@Core@@@std@@@std@@_K_N@Z
    MCAPI void
    _createFromVector(class Core::Path const&, std::vector<class Core::FlatFileManifestInfo> const&, uint64, bool);

    // symbol:
    // ?_readHeaderFromStream@FlatFileManifest@Core@@AEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> _readHeaderFromStream(class ReadOnlyBinaryStream&);

    // NOLINTEND
};

}; // namespace Core
