#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PhotoStorage {
public:
    // prevent constructor by default
    PhotoStorage& operator=(PhotoStorage const&);
    PhotoStorage(PhotoStorage const&);
    PhotoStorage();

public:
    // NOLINTBEGIN
    // symbol: ??0PhotoStorage@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit PhotoStorage(class Core::Path const& baseDir);

    // symbol: ??1PhotoStorage@@QEAA@XZ
    MCAPI ~PhotoStorage();

    // symbol: ?BOOKS_DIR@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BOOKS_DIR;

    // symbol: ?MANIFEST_NAME@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const MANIFEST_NAME;

    // symbol: ?PHOTOITEM_DIR@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PHOTOITEM_DIR;

    // symbol: ?PHOTO_DIR@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PHOTO_DIR;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_readManifest@PhotoStorage@@AEAAXXZ
    MCAPI void _readManifest();

    // NOLINTEND
};
