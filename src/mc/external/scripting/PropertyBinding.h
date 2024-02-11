#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct PropertyBinding {
public:
    // prevent constructor by default
    PropertyBinding& operator=(PropertyBinding const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyBinding@Scripting@@QEAA@XZ
    MCAPI PropertyBinding();

    // symbol: ??0PropertyBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI PropertyBinding(struct Scripting::PropertyBinding&&);

    // symbol: ??0PropertyBinding@Scripting@@QEAA@AEBU01@@Z
    MCAPI PropertyBinding(struct Scripting::PropertyBinding const&);

    // symbol: ?isValidPropertyValue@PropertyBinding@Scripting@@QEBA_NAEBVmeta_any@entt@@@Z
    MCAPI bool isValidPropertyValue(entt::meta_any const&) const;

    // symbol: ??1PropertyBinding@Scripting@@QEAA@XZ
    MCAPI ~PropertyBinding();

    // NOLINTEND
};

}; // namespace Scripting
