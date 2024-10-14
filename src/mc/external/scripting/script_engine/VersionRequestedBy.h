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
    MCAPI VersionRequestedBy(
        struct Scripting::Version          version_,
        struct Scripting::Version          originalVersion,
        struct Scripting::ModuleDescriptor by_,
        bool                               supported_,
        bool                               missing_,
        bool                               explicitRequest_,
        bool                               promotion_
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Scripting
