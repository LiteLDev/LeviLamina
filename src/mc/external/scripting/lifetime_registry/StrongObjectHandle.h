#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class StrongObjectHandle {
public:
    // NOLINTBEGIN
    MCAPI StrongObjectHandle(class Scripting::StrongObjectHandle&& rhs);

    MCAPI StrongObjectHandle(class Scripting::StrongObjectHandle const& rhs);

    MCAPI StrongObjectHandle(
        class Scripting::WeakLifetimeScope scope,
        struct Scripting::ObjectHandle     objHandle,
        bool                               addReference
    );

    MCAPI entt::meta_any asAny();

    MCAPI struct Scripting::ObjectHandle getHandle() const;

    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI class Scripting::WeakLifetimeScope getScope() const;

    MCAPI class Scripting::StrongObjectHandle& operator=(class Scripting::StrongObjectHandle&& rhs);

    MCAPI class Scripting::StrongObjectHandle& operator=(class Scripting::StrongObjectHandle const& rhs);

    MCAPI bool operator==(class Scripting::StrongObjectHandle const& rhs) const;

    MCAPI bool valid() const;

    MCAPI ~StrongObjectHandle();

    MCAPI static struct Scripting::ObjectHandle release(class Scripting::StrongObjectHandle&& handleRef);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI StrongObjectHandle();

    MCAPI void _addReference();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class Scripting::StrongObjectHandle const& InvalidHandle();

    // NOLINTEND
};

}; // namespace Scripting
