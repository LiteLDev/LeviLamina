#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InsideBlockEventMap;
// clang-format on

class InsideBlockNotifierComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockEventMap>> mBlockList;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const&);
    InsideBlockNotifierComponent(InsideBlockNotifierComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InsideBlockNotifierComponent& operator=(::InsideBlockNotifierComponent&&);
    // NOLINTEND
};
