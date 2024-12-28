#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

class GenericRequestServiceHandler {
public:
    // prevent constructor by default
    GenericRequestServiceHandler& operator=(GenericRequestServiceHandler const&);
    GenericRequestServiceHandler(GenericRequestServiceHandler const&);
    GenericRequestServiceHandler();
};

} // namespace Realms
