#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ConstantFactory {
public:
    // prevent constructor by default
    ConstantFactory& operator=(ConstantFactory const&);
    ConstantFactory();

public:
    // NOLINTBEGIN
    MCAPI ConstantFactory(struct Scripting::ConstantFactory&&);

    MCAPI ConstantFactory(struct Scripting::ConstantFactory const&);

    MCAPI
    ConstantFactory(std::string, entt::meta_type, bool, std::function<entt::meta_any(class Scripting::WeakLifetimeScope&)>);

    MCAPI ~ConstantFactory();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Scripting::ConstantFactory&&);

    MCAPI void* ctor$(struct Scripting::ConstantFactory const&);

    MCAPI void*
    ctor$(std::string, entt::meta_type, bool, std::function<entt::meta_any(class Scripting::WeakLifetimeScope&)>);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
