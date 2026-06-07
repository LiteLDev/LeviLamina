#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace persona {

class SkinValidator {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void _validateAlpha(
        ::mce::Image& image,
        uint          x0,
        uint          y0,
        uint          x1,
        uint          y1,
        float         percentTransparentAllowed,
        bool          allowAlpha
    );

    MCNAPI static bool isPremiumGeometry(::std::string const& geometryName);

    MCNAPI static bool isValidCapeImage(::mce::Image const& image);

    MCNAPI static bool isValidImage(::mce::Image const& image);
#endif

    MCNAPI static bool isValidSize(uint64 skinSize);

#ifdef LL_PLAT_C
    MCNAPI static void resizeHalfSkinData(::mce::Image& image);

    MCNAPI static void validateAlpha(::mce::Image& image, bool isPremium);
#endif
    // NOLINTEND
};

} // namespace persona
