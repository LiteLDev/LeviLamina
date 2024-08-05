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
    MCAPI MissingModuleRequest(struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&);

    MCAPI ~MissingModuleRequest();

    // NOLINTEND
};

}; // namespace Scripting
