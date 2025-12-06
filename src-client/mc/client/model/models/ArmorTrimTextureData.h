#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ArmorTrim;
class ItemStack;
class ResourceLocation;
class TrimMaterialRegistry;
// clang-format on

class ArmorTrimTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc85967;
    ::ll::UntypedStorage<1, 1>  mUnkab1cea;
    ::ll::UntypedStorage<1, 1>  mUnk59b073;
    ::ll::UntypedStorage<8, 32> mUnk4d5f01;
    ::ll::UntypedStorage<8, 32> mUnkd20962;
    ::ll::UntypedStorage<8, 32> mUnk80ba0f;
    ::ll::UntypedStorage<8, 32> mUnk5366e6;
    ::ll::UntypedStorage<8, 32> mUnk743849;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrimTextureData& operator=(ArmorTrimTextureData const&);
    ArmorTrimTextureData(ArmorTrimTextureData const&);
    ArmorTrimTextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArmorTrimTextureData(
        ::ArmorTrim const&            armorTrim,
        ::ItemStack const&            item,
        ::std::string const&          armorTexture,
        ::TrimMaterialRegistry const& trimMaterialRegistry
    );

    MCNAPI ::ResourceLocation buildArmorTexturePath() const;

    MCNAPI ::ResourceLocation buildArmorTrimTexturePath() const;

    MCNAPI ::ResourceLocation buildMaterialTexturePath() const;

    MCNAPI ::ResourceLocation buildPaletteMapTexturePath() const;

    MCNAPI ::ResourceLocation buildTrimTexturePath() const;

    MCNAPI ~ArmorTrimTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ArmorTrim const&            armorTrim,
        ::ItemStack const&            item,
        ::std::string const&          armorTexture,
        ::TrimMaterialRegistry const& trimMaterialRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
