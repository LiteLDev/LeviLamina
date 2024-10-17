#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Scripting {

struct MissingModuleRequest {
public:
    // prevent constructor by default
    MissingModuleRequest& operator=(MissingModuleRequest const&);
    MissingModuleRequest(MissingModuleRequest const&);
    MissingModuleRequest();

public:
    // NOLINTBEGIN
    MCAPI MissingModuleRequest(
        struct Scripting::ModuleDescriptor const& missingModule_,
        struct Scripting::ModuleDescriptor const& requestedBy_
    );

    MCAPI ~MissingModuleRequest();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct Scripting::ModuleDescriptor const& missingModule_,
        struct Scripting::ModuleDescriptor const& requestedBy_
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
