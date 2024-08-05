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

    MCAPI
    InterfaceBinding(std::string, entt::meta_type, entt::meta_type, std::vector<struct Scripting::PropertyBinding>);

    MCAPI ~InterfaceBinding();

    // NOLINTEND
};

}; // namespace Scripting
