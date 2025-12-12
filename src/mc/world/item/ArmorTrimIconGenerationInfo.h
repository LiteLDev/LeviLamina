#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class ArmorTrimIconGenerationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8eaa3f;
    ::ll::UntypedStorage<8, 56> mUnk98987f;
    ::ll::UntypedStorage<8, 56> mUnk74b0b7;
    ::ll::UntypedStorage<8, 56> mUnk1c1977;
    ::ll::UntypedStorage<8, 56> mUnke90de4;
    ::ll::UntypedStorage<8, 56> mUnk323b2e;
    ::ll::UntypedStorage<1, 1>  mUnk58d5d6;
    ::ll::UntypedStorage<1, 1>  mUnk13ae4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&);
    ArmorTrimIconGenerationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ArmorTrimIconGenerationInfo(::ArmorTrimIconGenerationInfo const&);

    MCNAPI_C ArmorTrimIconGenerationInfo(
        ::std::string const&      armorName,
        ::std::string const&      armorType,
        ::ResourceLocation const& armorTextureLocation,
        ::ResourceLocation const& trimTextureLocation,
        ::std::string const&      armorMaterial,
        ::std::string const&      trimMaterial,
        ::std::string const&      trimPalette
    );

    MCNAPI_C ~ArmorTrimIconGenerationInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::string
    buildPaletteName(::std::string const& trimMaterial, ::std::string const& armorMaterial);

    MCNAPI static ::std::string
    buildTrimmedArmorName(::std::string const& trimMaterial, ::std::string const& armorName);

    MCNAPI_C static ::std::string buildTrimmedArmorName(
        ::std::string const& trimMaterial,
        ::std::string const& armorMaterial,
        ::std::string const& armorType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ArmorTrimIconGenerationInfo const&);

    MCNAPI_C void* $ctor(
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
    MCNAPI_C void $dtor();
    // NOLINTEND
};
