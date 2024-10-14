#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct ClassBinding {
public:
    // prevent constructor by default
    ClassBinding& operator=(ClassBinding const&);

public:
    // NOLINTBEGIN
    MCAPI ClassBinding();

    MCAPI ClassBinding(struct Scripting::ClassBinding&&);

    MCAPI ClassBinding(struct Scripting::ClassBinding const&);

    MCAPI
    ClassBinding(std::string, entt::meta_type, entt::meta_type, std::vector<struct Scripting::FunctionBinding>, std::shared_ptr<struct Scripting::IteratorBinding>, std::vector<struct Scripting::FunctionBinding>, std::vector<struct Scripting::PropertyBinding>, std::vector<struct Scripting::ConstantFactory>);

    MCAPI ~ClassBinding();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
