#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"

// auto generated forward declare list
// clang-format off
namespace BlockTraitConversionUtils { struct ConvertedSet; }
// clang-format on

namespace BlockTraitConversionUtils {

struct FacingDirectionToCardinalDirection {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockTraitConversionUtils::ConvertedSet& R20U3();

    MCNAPI static ::BlockTraitConversionUtils::ConvertedSet& R20U4();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> conversionTable();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> furnaceConversionTable();
    // NOLINTEND
};

} // namespace BlockTraitConversionUtils
