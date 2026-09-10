#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4d1d66;
    ::ll::UntypedStorage<8, 24> mUnkfd305d;
    ::ll::UntypedStorage<8, 32> mUnk53375b;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticSummary& operator=(EntitySystemDiagnosticSummary const&);
    EntitySystemDiagnosticSummary();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntitySystemDiagnosticSummary(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary const&);

    MCNAPI ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary&
    operator=(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary&&);

    MCNAPI ~EntitySystemDiagnosticSummary();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
