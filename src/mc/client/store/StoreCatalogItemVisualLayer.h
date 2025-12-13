#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TextStyle;
struct IStoreCatalogItem;
// clang-format on

class StoreCatalogItemVisualLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb89a06;
    ::ll::UntypedStorage<8, 64> mUnkc2388b;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreCatalogItemVisualLayer& operator=(StoreCatalogItemVisualLayer const&);
    StoreCatalogItemVisualLayer(StoreCatalogItemVisualLayer const&);
    StoreCatalogItemVisualLayer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit StoreCatalogItemVisualLayer(::gsl::not_null<::IStoreCatalogItem*> storeItem);

    MCNAPI_C ::std::unordered_set<::std::string> const getIconOverlayAnchors();

    MCNAPI_C ::TextStyle const getIconOverlayTextStyle(::std::string const& anchor, int index);

    MCNAPI_C ::std::string const getIconOverlayTextureFileSystem(::std::string const& anchor, int index);

    MCNAPI_C ::std::string const getIconOverlayTextureName(::std::string const& anchor, int index);

    MCNAPI_C bool iconOverlayIsValid(::std::string const& anchor) const;

    MCNAPI_C ~StoreCatalogItemVisualLayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::gsl::not_null<::IStoreCatalogItem*> storeItem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
