#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentInfo;
// clang-format on

struct DefaultSystemTraits {
public:
    // prevent constructor by default
    DefaultSystemTraits& operator=(DefaultSystemTraits const&);
    DefaultSystemTraits(DefaultSystemTraits const&);
    DefaultSystemTraits();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ComponentInfo> generateDetailedComponentInfo();

    MCAPI static ::std::string generateName(::std::string name);
    // NOLINTEND
};
