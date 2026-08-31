#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct MissingModuleRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnke95a67;
    ::ll::UntypedStorage<8, 96> mUnkf9e291;
    // NOLINTEND

public:
    // prevent constructor by default
    MissingModuleRequest& operator=(MissingModuleRequest const&);
    MissingModuleRequest(MissingModuleRequest const&);
    MissingModuleRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MissingModuleRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
