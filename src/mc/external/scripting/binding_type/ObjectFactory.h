#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ObjectFactory {
public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory();

public:
    // NOLINTBEGIN
    MCAPI ObjectFactory(struct Scripting::ObjectFactory&&);

    MCAPI ObjectFactory(struct Scripting::ObjectFactory const&);

    MCAPI ObjectFactory(
        std::string,
        std::function<class Scripting::StrongObjectHandle(class Scripting::WeakLifetimeScope)>,
        entt::meta_type
    );

    MCAPI ~ObjectFactory();

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
