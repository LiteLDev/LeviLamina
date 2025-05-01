#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket::IceControllerInterface {

struct SwitchResult {
public:
    // prevent constructor by default
    SwitchResult& operator=(SwitchResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SwitchResult(::cricket::IceControllerInterface::SwitchResult const&);

    MCNAPI ~SwitchResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceControllerInterface::SwitchResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket::IceControllerInterface
