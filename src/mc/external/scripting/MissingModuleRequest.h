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
    // symbol: ??0MissingModuleRequest@Scripting@@QEAA@AEBUModuleDescriptor@1@0@Z
    MCAPI MissingModuleRequest(struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&);

    // symbol: ??1MissingModuleRequest@Scripting@@QEAA@XZ
    MCAPI ~MissingModuleRequest();

    // NOLINTEND
};

}; // namespace Scripting
