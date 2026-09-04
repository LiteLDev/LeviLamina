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
    ::ll::TypedStorage<1, 1, uchar>                           mID;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mPattern;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack()>> mIngredientItemFunctor;
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    ::ll::TypedStorage<8, 32, ::std::string>                  mNameID;
    ::ll::TypedStorage<2, 2, short>                           mPatternItemType;
    ::ll::TypedStorage<1, 1, bool>                            mIgnoreAux;
    ::ll::TypedStorage<1, 1, bool>                            mHiddenFromCrafting;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerPattern();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerPattern(::std::string const& name, ::std::string const& nameID, bool hiddenFromCrafting);

    MCAPI BannerPattern(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType
    );

    MCAPI BannerPattern(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType,
        bool                             ignoreAux
    );

    MCAPI BannerPattern(
        ::std::string const& name,
        ::std::string const& nameID,
        ::std::string const& row1,
        ::std::string const& row2,
        ::std::string const& row3
    );

    MCAPI bool hasPattern() const;

    MCAPI bool matchesPatternItem(::ItemStackBase const& item) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BannerPattern> const& mPatterns();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::std::string const& nameID, bool hiddenFromCrafting);

    MCAPI void* $ctor(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType
    );

    MCAPI void* $ctor(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType,
        bool                             ignoreAux
    );

    MCAPI void* $ctor(
        ::std::string const& name,
        ::std::string const& nameID,
        ::std::string const& row1,
        ::std::string const& row2,
        ::std::string const& row3
    );
    // NOLINTEND
};
