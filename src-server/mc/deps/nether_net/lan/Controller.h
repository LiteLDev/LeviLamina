#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    Controller();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Controller();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
