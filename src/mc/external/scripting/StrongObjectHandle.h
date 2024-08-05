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

    MCAPI StrongObjectHandle(class Scripting::WeakLifetimeScope, struct Scripting::ObjectHandle, bool);

    MCAPI entt::meta_any asAny();

    MCAPI struct Scripting::ObjectHandle getHandle() const;

    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI class Scripting::WeakLifetimeScope getScope() const;

    MCAPI class Scripting::StrongObjectHandle& operator=(class Scripting::StrongObjectHandle&& rhs);

    MCAPI class Scripting::StrongObjectHandle& operator=(class Scripting::StrongObjectHandle const& rhs);

    MCAPI bool operator==(class Scripting::StrongObjectHandle const& rhs) const;

    MCAPI bool valid() const;

    MCAPI ~StrongObjectHandle();

    MCAPI static struct Scripting::ObjectHandle release(class Scripting::StrongObjectHandle&&);

    MCAPI static class Scripting::StrongObjectHandle const InvalidHandle;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI StrongObjectHandle();

    MCAPI void _addReference();

    // NOLINTEND
};

}; // namespace Scripting
