#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct VersionRequestedBy {
public:
    // prevent constructor by default
    VersionRequestedBy& operator=(VersionRequestedBy const&);
    VersionRequestedBy(VersionRequestedBy const&);
    VersionRequestedBy();

public:
    // NOLINTBEGIN
    // symbol: ??0VersionRequestedBy@Scripting@@QEAA@UVersion@1@0UModuleDescriptor@1@_N222@Z
    MCAPI VersionRequestedBy(
        struct Scripting::Version,
        struct Scripting::Version,
        struct Scripting::ModuleDescriptor,
        bool,
        bool,
        bool,
        bool
    );

    // NOLINTEND
};

}; // namespace Scripting
