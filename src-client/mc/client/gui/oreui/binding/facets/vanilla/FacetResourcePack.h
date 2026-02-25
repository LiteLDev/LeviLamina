#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"

namespace OreUI {

struct FacetResourcePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId> mId;
    ::ll::TypedStorage<8, 32, ::std::string>                mName;
    ::ll::TypedStorage<8, 32, ::std::string>                mType;
    ::ll::TypedStorage<8, 32, ::std::string>                mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                mSize;
    ::ll::TypedStorage<8, 32, ::std::string>                mContentId;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>       mImageURL;
    ::ll::TypedStorage<1, 1, bool>                          mIsMarketplaceItem;
    ::ll::TypedStorage<1, 1, bool>                          mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                          mHasSettings;
    ::ll::TypedStorage<1, 1, bool>                          mIsAddon;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetResourcePack& operator=(FacetResourcePack const&);
    FacetResourcePack(FacetResourcePack const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetResourcePack();

    MCAPI FacetResourcePack(::OreUI::FacetResourcePack&&);

    MCAPI ~FacetResourcePack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::OreUI::FacetResourcePack&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
