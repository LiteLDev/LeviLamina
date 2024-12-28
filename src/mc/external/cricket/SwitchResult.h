#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket::IceControllerInterface {

struct SwitchResult {
public:
    // prevent constructor by default
    SwitchResult& operator=(SwitchResult const&);
    SwitchResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SwitchResult(::cricket::IceControllerInterface::SwitchResult const&);

    MCAPI ~SwitchResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::IceControllerInterface::SwitchResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket::IceControllerInterface
