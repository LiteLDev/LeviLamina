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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk312e65;
    ::ll::UntypedStorage<8, 16> mUnkd70ff5;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StrongObjectHandle();

    MCAPI StrongObjectHandle(::Scripting::StrongObjectHandle const& rhs);

    MCAPI StrongObjectHandle(::Scripting::StrongObjectHandle&& rhs);

    MCAPI
    StrongObjectHandle(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle, bool addReference);

    MCAPI void _addReference();

    MCAPI ::entt::meta_any asAny();

    MCAPI ::Scripting::ObjectHandle getHandle() const;

    MCAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI ::Scripting::WeakLifetimeScope getScope() const;

    MCAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle const& rhs);

    MCAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&& rhs);

    MCAPI bool operator==(::Scripting::StrongObjectHandle const& rhs) const;

    MCAPI bool valid() const;

    MCAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ObjectHandle release(::Scripting::StrongObjectHandle&& handleRef);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::StrongObjectHandle const& rhs);

    MCAPI void* $ctor(::Scripting::StrongObjectHandle&& rhs);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle, bool addReference);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
