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
    MCNAPI static bool isValidImage(::mce::Image const& image);

    MCNAPI static void resizeHalfSkinData(::mce::Image& image);

    MCNAPI static void validateAlpha(::mce::Image& image, bool isPremium);
#endif
    // NOLINTEND
};

} // namespace persona
