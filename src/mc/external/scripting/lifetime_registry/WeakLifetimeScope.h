#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class WeakLifetimeScope {
public:
    // NOLINTBEGIN
    MCAPI WeakLifetimeScope();

    MCAPI explicit WeakLifetimeScope(class Scripting::LifetimeRegistryReference* registryRef);

    MCAPI WeakLifetimeScope(class Scripting::WeakLifetimeScope&& rhs);

    MCAPI WeakLifetimeScope(class Scripting::WeakLifetimeScope const& rhs);

    MCAPI void addListener(std::weak_ptr<class Scripting::ILifetimeScopeListener> listener) const;

    MCAPI struct Scripting::ContextId getContextId() const;

    MCAPI class Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI class Scripting::WeakLifetimeScope& operator=(class Scripting::WeakLifetimeScope&& rhs);

    MCAPI class Scripting::WeakLifetimeScope& operator=(class Scripting::WeakLifetimeScope const& rhs);

    MCAPI bool operator==(class Scripting::WeakLifetimeScope const& rhs) const;

    MCAPI void removeListener(std::shared_ptr<class Scripting::ILifetimeScopeListener> listener) const;

    MCAPI void reset();

    MCAPI bool valid() const;

    MCAPI ~WeakLifetimeScope();

    // NOLINTEND
};

}; // namespace Scripting
