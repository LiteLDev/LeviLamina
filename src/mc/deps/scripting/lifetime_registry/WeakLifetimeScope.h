#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCNAPI WeakLifetimeScope();

    MCNAPI explicit WeakLifetimeScope(::Scripting::LifetimeRegistryReference* registryRef);

    MCNAPI WeakLifetimeScope(::Scripting::WeakLifetimeScope&& rhs);

    MCNAPI WeakLifetimeScope(::Scripting::WeakLifetimeScope const& rhs);

    MCNAPI ::Scripting::ContextId getContextId() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope&& rhs);

    MCNAPI ::Scripting::WeakLifetimeScope& operator=(::Scripting::WeakLifetimeScope const& rhs);

    MCNAPI bool operator==(::Scripting::WeakLifetimeScope const& rhs) const;

    MCNAPI bool valid() const;

    MCNAPI ~WeakLifetimeScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::LifetimeRegistryReference* registryRef);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope&& rhs);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
