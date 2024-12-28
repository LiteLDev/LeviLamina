#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace edu::auth {

template <typename T0>
struct GenericCredentialsEvent {
public:
    // prevent constructor by default
    GenericCredentialsEvent& operator=(GenericCredentialsEvent const&);
    GenericCredentialsEvent(GenericCredentialsEvent const&);
    GenericCredentialsEvent();
};

} // namespace edu::auth
