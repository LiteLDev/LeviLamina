#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::RunLoop { class Condition; }
// clang-format on

namespace NetherNet::RunLoop {

class Controller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc1c0f9;
    // NOLINTEND

public:
    // prevent constructor by default
    Controller& operator=(Controller const&);
    Controller(Controller const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Controller();

    MCAPI ::NetherNet::RunLoop::Condition GetCondition() const;

    MCAPI bool IsThreadRunning() const;

    MCAPI void RequestRun() const;

    MCAPI void RequestStop() const;

    MCAPI void RequestSuspend() const;

    MCAPI ~Controller();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::RunLoop
