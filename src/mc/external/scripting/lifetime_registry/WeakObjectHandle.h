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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7db6bc;
    ::ll::UntypedStorage<8, 16> mUnkb898e0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeakObjectHandle();

    MCAPI WeakObjectHandle(::Scripting::WeakObjectHandle const&);

    MCAPI WeakObjectHandle(::Scripting::WeakObjectHandle&& rhs);

    MCAPI WeakObjectHandle(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle);

    MCAPI ::Scripting::ObjectHandle getHandle() const;

    MCAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI ::Scripting::WeakLifetimeScope getScope() const;

    MCAPI ::Scripting::WeakObjectHandle& operator=(::Scripting::WeakObjectHandle const&);

    MCAPI ::Scripting::WeakObjectHandle& operator=(::Scripting::WeakObjectHandle&& rhs);

    MCAPI bool operator==(::Scripting::WeakObjectHandle const& rhs) const;

    MCAPI bool valid() const;

    MCAPI ~WeakObjectHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::WeakObjectHandle const&);

    MCAPI void* $ctor(::Scripting::WeakObjectHandle&& rhs);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
