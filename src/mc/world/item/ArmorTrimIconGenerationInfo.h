#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ArmorTrimIconGenerationInfo(ArmorTrimIconGenerationInfo const&);
    ArmorTrimIconGenerationInfo();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string
    buildTrimmedArmorName(::std::string const& trimMaterial, ::std::string const& armorName);
    // NOLINTEND
};
