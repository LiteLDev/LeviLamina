#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4d1d66;
    ::ll::UntypedStorage<8, 24> mUnkfd305d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticSummary& operator=(EntitySystemDiagnosticSummary const&);
    EntitySystemDiagnosticSummary(EntitySystemDiagnosticSummary const&);
    EntitySystemDiagnosticSummary();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EntitySystemDiagnosticSummary();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
