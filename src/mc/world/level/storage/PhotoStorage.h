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
    MCAPI explicit PhotoStorage(class Core::Path const& baseDir);

    MCAPI ~PhotoStorage();

    MCAPI static std::string const BOOKS_DIR;

    MCAPI static std::string const MANIFEST_NAME;

    MCAPI static std::string const PHOTOITEM_DIR;

    MCAPI static std::string const PHOTO_DIR;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _readManifest();

    // NOLINTEND
};
