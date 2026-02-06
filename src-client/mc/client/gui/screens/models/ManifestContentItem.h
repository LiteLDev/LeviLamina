#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/client/gui/screens/models/ContentItemType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
struct ContentSource;
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
    // prevent constructor by default
    ManifestContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ManifestContentItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ManifestContentItem(::ContentSource* src, ::ContentItemType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentSource* src, ::ContentItemType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
