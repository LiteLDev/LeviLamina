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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&);
    ArmorTrimIconGenerationInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ArmorTrimIconGenerationInfo(::ArmorTrimIconGenerationInfo const&);

    MCAPI ArmorTrimIconGenerationInfo(
        ::std::string const&      armorName,
        ::std::string const&      armorType,
        ::ResourceLocation const& armorTextureLocation,
        ::ResourceLocation const& trimTextureLocation,
        ::std::string const&      armorMaterial,
        ::std::string const&      trimMaterial,
        ::std::string const&      trimPalette
    );

    MCAPI ~ArmorTrimIconGenerationInfo();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string buildPaletteName(::std::string const& trimMaterial, ::std::string const& armorMaterial);
#endif

    MCAPI static ::std::string buildTrimmedArmorName(::std::string const& trimMaterial, ::std::string const& armorName);

#ifdef LL_PLAT_C
    MCAPI static ::std::string buildTrimmedArmorName(
        ::std::string const& trimMaterial,
        ::std::string const& armorMaterial,
        ::std::string const& armorType
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ArmorTrimIconGenerationInfo const&);

    MCAPI void* $ctor(
        ::std::string const&      armorName,
        ::std::string const&      armorType,
        ::ResourceLocation const& armorTextureLocation,
        ::ResourceLocation const& trimTextureLocation,
        ::std::string const&      armorMaterial,
        ::std::string const&      trimMaterial,
        ::std::string const&      trimPalette
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
