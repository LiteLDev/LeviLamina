#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct EntityDiagnosticTimingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd9fcd9;
    ::ll::UntypedStorage<8, 32> mUnk1ca944;
    ::ll::UntypedStorage<8, 8>  mUnk8aa595;
    ::ll::UntypedStorage<1, 1>  mUnk8c7fdb;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityDiagnosticTimingInfo& operator=(EntityDiagnosticTimingInfo const&);
    EntityDiagnosticTimingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityDiagnosticTimingInfo(::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo const&);

    MCNAPI ::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo&
    operator=(::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo&&);

    MCNAPI ~EntityDiagnosticTimingInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
