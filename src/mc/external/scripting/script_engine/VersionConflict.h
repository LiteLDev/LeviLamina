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

    MCAPI VersionConflict(
        struct Scripting::ModuleDescriptor const& conflictModule_,
        struct Scripting::ModuleDescriptor const& requestedByA_,
        struct Scripting::ModuleDescriptor const& requestedByB_,
        struct Scripting::ModuleDescriptor const& versionWantedByA_,
        struct Scripting::ModuleDescriptor const& versionWantedByB_
    );

    MCAPI ~VersionConflict();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
