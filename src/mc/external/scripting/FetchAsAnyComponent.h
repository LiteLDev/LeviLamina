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
    // symbol: ??0FetchAsAnyComponent@internal@Scripting@@QEAA@$$QEAU012@@Z
    MCAPI FetchAsAnyComponent(struct Scripting::internal::FetchAsAnyComponent&&);

    // symbol: ??4FetchAsAnyComponent@internal@Scripting@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Scripting::internal::FetchAsAnyComponent& operator=(struct Scripting::internal::FetchAsAnyComponent&&);

    // symbol: ??1FetchAsAnyComponent@internal@Scripting@@QEAA@XZ
    MCAPI ~FetchAsAnyComponent();

    // NOLINTEND
};

}; // namespace Scripting::internal
