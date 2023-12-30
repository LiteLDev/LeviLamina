#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ResolvedTypes {
public:
    // prevent constructor by default
    ResolvedTypes& operator=(ResolvedTypes const&);
    ResolvedTypes(ResolvedTypes const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ResolvedTypes@QuickJS@Scripting@@QEAA@XZ
    MCAPI ResolvedTypes();

    // symbol: ?isHandleType@ResolvedTypes@QuickJS@Scripting@@QEBA_NAEBVmeta_type@entt@@@Z
    MCAPI bool isHandleType(entt::meta_type const&) const;

    // symbol: ?isNumericType@ResolvedTypes@QuickJS@Scripting@@QEBA_NAEBVmeta_type@entt@@@Z
    MCAPI bool isNumericType(entt::meta_type const&) const;

    // symbol: ??1ResolvedTypes@QuickJS@Scripting@@QEAA@XZ
    MCAPI ~ResolvedTypes();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
