#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class Properties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd1b489;
    // NOLINTEND

public:
    // prevent constructor by default
    Properties& operator=(Properties const&);
    Properties(Properties const&);
    Properties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addProperty(::Social::Events::Property const& property);
    // NOLINTEND
};

} // namespace Social::Events
