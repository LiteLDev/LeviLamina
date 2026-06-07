#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace persona::color {

class ColorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkc39816;
    ::ll::UntypedStorage<8, 8>  mUnk51d530;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorInfo& operator=(ColorInfo const&);
    ColorInfo(ColorInfo const&);
    ColorInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ColorInfo(::mce::Color color, uint64 colorChannel);

    MCNAPI ::mce::Color getColor() const;

    MCNAPI uint64 getColorChannel() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::mce::Color color, uint64 colorChannel);
#endif
    // NOLINTEND
};

} // namespace persona::color
