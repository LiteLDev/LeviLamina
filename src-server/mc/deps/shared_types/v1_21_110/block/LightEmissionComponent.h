#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110::BlockDefinition {

struct LightEmissionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5f605c;
    // NOLINTEND

public:
    // prevent constructor by default
    LightEmissionComponent& operator=(LightEmissionComponent const&);
    LightEmissionComponent(LightEmissionComponent const&);
    LightEmissionComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NameId();
    // NOLINTEND

};

}
