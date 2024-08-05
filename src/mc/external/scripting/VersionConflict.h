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
    MCAPI VersionConflict(struct Scripting::VersionConflict&&);

    MCAPI
    VersionConflict(struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&);

    MCAPI ~VersionConflict();

    // NOLINTEND
};

}; // namespace Scripting
