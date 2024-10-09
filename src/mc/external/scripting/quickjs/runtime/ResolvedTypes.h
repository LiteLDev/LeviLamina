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
    MCAPI ResolvedTypes();

    MCAPI bool isHandleType(entt::meta_type const& type) const;

    MCAPI bool isNumericType(entt::meta_type const& type) const;

    MCAPI ~ResolvedTypes();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
