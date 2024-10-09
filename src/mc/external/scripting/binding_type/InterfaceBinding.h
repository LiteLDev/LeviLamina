#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct InterfaceBinding {
public:
    // prevent constructor by default
    InterfaceBinding& operator=(InterfaceBinding const&);
    InterfaceBinding(InterfaceBinding const&);

public:
    // NOLINTBEGIN
    MCAPI InterfaceBinding();

    MCAPI InterfaceBinding(struct Scripting::InterfaceBinding&&);

    MCAPI InterfaceBinding(
        std::string                                    name_,
        entt::meta_type                                type_,
        entt::meta_type                                baseType_,
        std::vector<struct Scripting::PropertyBinding> properties_
    );

    MCAPI ~InterfaceBinding();

    // NOLINTEND
};

}; // namespace Scripting
