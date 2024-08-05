#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class WeakObjectHandle {
public:
    // NOLINTBEGIN
    MCAPI WeakObjectHandle();

    MCAPI WeakObjectHandle(class Scripting::WeakObjectHandle&& rhs);

    MCAPI WeakObjectHandle(class Scripting::WeakObjectHandle const& rhs);

    MCAPI WeakObjectHandle(class Scripting::WeakLifetimeScope, struct Scripting::ObjectHandle);

    MCAPI struct Scripting::ObjectHandle getHandle() const;

    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI class Scripting::WeakLifetimeScope getScope() const;

    MCAPI class Scripting::WeakObjectHandle& operator=(class Scripting::WeakObjectHandle&& rhs);

    MCAPI class Scripting::WeakObjectHandle& operator=(class Scripting::WeakObjectHandle const& rhs);

    MCAPI bool operator==(class Scripting::WeakObjectHandle const& rhs) const;

    MCAPI bool valid() const;

    MCAPI ~WeakObjectHandle();

    // NOLINTEND
};

}; // namespace Scripting
