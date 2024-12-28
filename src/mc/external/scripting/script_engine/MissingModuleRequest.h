#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

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
    MCAPI MissingModuleRequest(::Scripting::MissingModuleRequest&&);

    MCAPI MissingModuleRequest(
        ::Scripting::ModuleDescriptor const& missingModule_,
        ::Scripting::ModuleDescriptor const& requestedBy_
    );

    MCAPI ~MissingModuleRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::MissingModuleRequest&&);

    MCAPI void*
    $ctor(::Scripting::ModuleDescriptor const& missingModule_, ::Scripting::ModuleDescriptor const& requestedBy_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
