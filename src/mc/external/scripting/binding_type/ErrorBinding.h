#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct ErrorBinding {
public:
    // prevent constructor by default
    ErrorBinding& operator=(ErrorBinding const&);
    ErrorBinding(ErrorBinding const&);
    ErrorBinding();

public:
    // NOLINTBEGIN
    MCAPI ErrorBinding(struct Scripting::ErrorBinding&&);

    MCAPI
    ErrorBinding(std::string name_, entt::meta_type type_, std::vector<struct Scripting::PropertyBinding> properties_);

    MCAPI ~ErrorBinding();

    // NOLINTEND
};

}; // namespace Scripting
