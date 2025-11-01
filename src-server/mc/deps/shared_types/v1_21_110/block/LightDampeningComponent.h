#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct LightDampeningComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbc15a0;
    // NOLINTEND

public:
    // prevent constructor by default
    LightDampeningComponent& operator=(LightDampeningComponent const&);
    LightDampeningComponent(LightDampeningComponent const&);
    LightDampeningComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NameId();
    // NOLINTEND

};

}
