#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrimIconGenerationInfo {
public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&);
    ArmorTrimIconGenerationInfo(ArmorTrimIconGenerationInfo const&);
    ArmorTrimIconGenerationInfo();

public:
    // NOLINTBEGIN
    MCAPI static std::string buildTrimmedArmorName(std::string const&, std::string const&);

    // NOLINTEND
};
