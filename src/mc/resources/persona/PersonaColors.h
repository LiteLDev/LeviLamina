#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace persona {

class PersonaColors {
public:
    // prevent constructor by default
    PersonaColors& operator=(PersonaColors const&);
    PersonaColors(PersonaColors const&);
    PersonaColors();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mHairColors();

    MCAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mIrisColors();

    MCAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mMouthColors();

    MCAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mPremiumColors();

    MCAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mScleraColors();

    MCAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mSkinColors();
    // NOLINTEND
};

} // namespace persona
