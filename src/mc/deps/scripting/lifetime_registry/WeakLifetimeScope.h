#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
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
    // prevent constructor by default
    WeakLifetimeScope& operator=(WeakLifetimeScope const&);
    WeakLifetimeScope(WeakLifetimeScope const&);
    WeakLifetimeScope();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeakLifetimeScope(::Scripting::WeakLifetimeScope&& rhs);

    MCFOLD ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI ~WeakLifetimeScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
