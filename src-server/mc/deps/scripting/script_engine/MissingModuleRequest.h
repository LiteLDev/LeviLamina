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
    MCNAPI MissingModuleRequest(::Scripting::MissingModuleRequest&&);

    MCNAPI MissingModuleRequest(
        ::Scripting::ModuleDescriptor const& missingModule_,
        ::Scripting::ModuleDescriptor const& requestedBy_
    );

    MCNAPI ~MissingModuleRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::MissingModuleRequest&&);

    MCNAPI void*
    $ctor(::Scripting::ModuleDescriptor const& missingModule_, ::Scripting::ModuleDescriptor const& requestedBy_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
