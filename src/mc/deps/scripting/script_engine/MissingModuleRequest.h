#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct MissingModuleRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnke95a67;
    ::ll::UntypedStorage<8, 104> mUnkf9e291;
    // NOLINTEND

public:
    // prevent constructor by default
    MissingModuleRequest& operator=(MissingModuleRequest const&);
    MissingModuleRequest(MissingModuleRequest const&);
    MissingModuleRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MissingModuleRequest(::Scripting::MissingModuleRequest&&);

    MCNAPI ~MissingModuleRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::MissingModuleRequest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
