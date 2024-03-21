#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Scripting {

struct VersionConflict {
public:
    // prevent constructor by default
    VersionConflict& operator=(VersionConflict const&);
    VersionConflict(VersionConflict const&);
    VersionConflict();

public:
    // NOLINTBEGIN
    // symbol: ??0VersionConflict@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI VersionConflict(struct Scripting::VersionConflict&&);

    // symbol: ??0VersionConflict@Scripting@@QEAA@AEBUModuleDescriptor@1@0000@Z
    MCAPI
    VersionConflict(struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&);

    // symbol: ??1VersionConflict@Scripting@@QEAA@XZ
    MCAPI ~VersionConflict();

    // NOLINTEND
};

}; // namespace Scripting
