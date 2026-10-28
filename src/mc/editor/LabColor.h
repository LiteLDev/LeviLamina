#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace Editor::Colors {

class LabColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk72b386;
    ::ll::UntypedStorage<4, 4> mUnk6dbe79;
    ::ll::UntypedStorage<4, 4> mUnkd2258a;
    // NOLINTEND

public:
    // prevent constructor by default
    LabColor& operator=(LabColor const&);
    LabColor(LabColor const&);
    LabColor();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI float ciede2000DeltaE(::Editor::Colors::LabColor const& rhs) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Editor::Colors::LabColor fromLinearRGB(::mce::Color const& linearRgb);

    MCNAPI static ::Editor::Colors::LabColor fromsRGB(::mce::Color const& srgb);
#endif
    // NOLINTEND
};

} // namespace Editor::Colors
