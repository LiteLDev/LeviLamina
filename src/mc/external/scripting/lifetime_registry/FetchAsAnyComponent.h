#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

struct FetchAsAnyComponent {
public:
    // prevent constructor by default
    FetchAsAnyComponent& operator=(FetchAsAnyComponent const&);
    FetchAsAnyComponent(FetchAsAnyComponent const&);
    FetchAsAnyComponent();

public:
    // NOLINTBEGIN
    MCAPI FetchAsAnyComponent(struct Scripting::internal::FetchAsAnyComponent&&);

    MCAPI struct Scripting::internal::FetchAsAnyComponent& operator=(struct Scripting::internal::FetchAsAnyComponent&&);

    MCAPI ~FetchAsAnyComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Scripting::internal::FetchAsAnyComponent&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting::internal
