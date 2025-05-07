#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

struct ManifestContentItem : public ::ContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest const>> mManifest;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mIconPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mZipPath;
    ::ll::TypedStorage<8, 32, ::std::string>                          mFileSystem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ManifestContentItem() /*override*/ = default;
    // NOLINTEND
};
