#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
// clang-format on

class BannerPattern : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mID;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPattern;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack()>> mIngredientItemFunctor;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mNameID;
    ::ll::TypedStorage<2, 2, short> mPatternItemType;
    ::ll::TypedStorage<1, 1, bool> mIgnoreAux;
    ::ll::TypedStorage<1, 1, bool> mHiddenFromCrafting;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerPattern() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool matchesPatternItem(::ItemStackBase const& item) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& BASE_NAME();

    MCAPI static char const* const& CREEPER_NAME_ID();

    MCAPI static char const* const& CURLY_BORDER_NAME_ID();

    MCAPI static char const* const& SQUARE_TOP_LEFT_NAME_ID();

    MCAPI static ::std::vector<::BannerPattern> const& mPatterns();
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
