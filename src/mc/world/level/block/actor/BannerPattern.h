#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Tag;
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
    BannerPattern& operator=(BannerPattern const&);
    BannerPattern();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerPattern(::BannerPattern const&);

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

    MCFOLD bool getIgnoreAux() const;

    MCAPI ::ItemStack getIngredientItem() const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD ::std::string const& getNameID() const;

    MCFOLD ::std::vector<::std::string> const& getPattern() const;

    MCAPI bool hasPattern() const;

#ifdef LL_PLAT_C
    MCFOLD bool isHiddenFromCrafting() const;
#endif

    MCAPI bool matchesPatternItem(::ItemStackBase const& item) const;

    MCAPI bool requiresIngredientItem() const;

    MCAPI bool requiresPatternItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<uchar> findPatternIndexByNameID(::std::string const& nameID);

#ifdef LL_PLAT_C
    MCAPI static ::ItemInstance getItemFromPattern(::BannerPattern const& pattern);
#endif

    MCAPI static ::std::optional<uchar> getPatternIndexFromName(::std::string const& name);

    MCAPI static uchar getPatternIndexFromNameID(::std::string const& nameID);

    MCAPI static ::std::optional<::std::reference_wrapper<::std::string const>> getPatternNameFromIndex(uchar index);

    MCAPI static ::CompoundTag const* tryGetPatternDataFromTag(::Tag const* tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& BASE_NAME();

    MCAPI static char const* const& SQUARE_TOP_LEFT_NAME_ID();

    MCAPI static ::std::vector<::BannerPattern> const& mPatterns();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BannerPattern const&);

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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
