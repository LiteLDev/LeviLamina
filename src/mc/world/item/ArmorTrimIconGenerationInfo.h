#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

class ArmorTrimIconGenerationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mTrimmedArmorName;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mArmorTextureLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimTextureLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimmedArmorLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimKeyPaletteLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimValuePaletteLocation;
    ::ll::TypedStorage<1, 1, bool>                mIsLeatherArmor;
    ::ll::TypedStorage<1, 1, bool>                mIsValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::string
    buildPaletteName(::std::string const& trimMaterial, ::std::string const& armorMaterial);

    MCAPI static ::std::string buildTrimmedArmorName(::std::string const& trimMaterial, ::std::string const& armorName);

    MCAPI_C static ::std::string buildTrimmedArmorName(
        ::std::string const& trimMaterial,
        ::std::string const& armorMaterial,
        ::std::string const& armorType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::ArmorTrimIconGenerationInfo const&);

    MCAPI_C void* $ctor(
        ::std::string const&      armorName,
        ::std::string const&      armorType,
        ::ResourceLocation const& armorTextureLocation,
        ::ResourceLocation const& trimTextureLocation,
        ::std::string const&      armorMaterial,
        ::std::string const&      trimMaterial,
        ::std::string const&      trimPalette
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
