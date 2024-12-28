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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc28ee3;
    ::ll::UntypedStorage<4, 4> mUnk42d11b;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeakLifetimeScope();

    MCAPI explicit WeakLifetimeScope(::Scripting::LifetimeRegistryReference* registryRef);

    MCAPI WeakLifetimeScope(::Scripting::WeakLifetimeScope&& rhs);

    MCAPI WeakLifetimeScope(::Scripting::WeakLifetimeScope const& rhs);

    MCAPI void addListener(::std::weak_ptr<::Scripting::ILifetimeScopeListener> listener) const;

    MCAPI ::Scripting::ContextId getContextId() const;

    MCAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope const& rhs);

    MCAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope&& rhs);

    MCAPI bool operator==(::Scripting::WeakLifetimeScope const& rhs) const;

    MCAPI void removeListener(::std::shared_ptr<::Scripting::ILifetimeScopeListener> listener) const;

    MCAPI bool valid() const;

    MCAPI ~WeakLifetimeScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::LifetimeRegistryReference* registryRef);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope&& rhs);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
