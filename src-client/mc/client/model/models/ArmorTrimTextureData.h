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
    ::ll::TypedStorage<1, 1, bool>           mIsDyeable;
    ::ll::TypedStorage<1, 1, bool>           mIsDarker;
    ::ll::TypedStorage<1, 1, bool>           mIsLegging;
    ::ll::TypedStorage<8, 32, ::std::string> mMaterialName;
    ::ll::TypedStorage<8, 32, ::std::string> mPatternName;
    ::ll::TypedStorage<8, 32, ::std::string> mArmorTexturePath;
    ::ll::TypedStorage<8, 32, ::std::string> mCustomPatternPath;
    ::ll::TypedStorage<8, 32, ::std::string> mCustomMaterialPalettePath;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrimTextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArmorTrimTextureData(
        ::ArmorTrim const&            armorTrim,
        ::ItemStack const&            item,
        ::std::string const&          armorTexture,
        ::TrimMaterialRegistry const& trimMaterialRegistry
    );

    MCAPI ::ResourceLocation buildArmorTexturePath() const;

    MCAPI ::ResourceLocation buildArmorTrimTexturePath() const;

    MCAPI ::ResourceLocation buildMaterialTexturePath() const;

    MCAPI ::ResourceLocation buildPaletteMapTexturePath() const;

    MCAPI ::ResourceLocation buildTrimTexturePath() const;

    MCAPI void setCustomMaterialPalettePath(::std::string materialPalettePath);

    MCAPI void setCustomPatternPath(::std::string patternPath);

    MCAPI ~ArmorTrimTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ArmorTrim const&            armorTrim,
        ::ItemStack const&            item,
        ::std::string const&          armorTexture,
        ::TrimMaterialRegistry const& trimMaterialRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
