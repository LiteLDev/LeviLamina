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
    MCNAPI StrongObjectHandle();

    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle&& rhs);

    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle const& rhs);

    MCNAPI
    StrongObjectHandle(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle, bool addReference);

    MCNAPI ::entt::meta_any asAny();

    MCNAPI ::Scripting::ObjectHandle getHandle() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope getScope() const;

    MCNAPI bool operator!=(::Scripting::StrongObjectHandle const& rhs) const;

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&& rhs);

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle const& rhs);

    MCNAPI bool operator==(::Scripting::StrongObjectHandle const& rhs) const;

    MCNAPI bool valid() const;

    MCNAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ObjectHandle release(::Scripting::StrongObjectHandle&& handleRef);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::StrongObjectHandle&& rhs);

    MCNAPI void* $ctor(::Scripting::StrongObjectHandle const& rhs);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle, bool addReference);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
