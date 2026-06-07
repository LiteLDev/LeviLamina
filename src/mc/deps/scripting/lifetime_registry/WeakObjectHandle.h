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
    MCNAPI WeakObjectHandle();

    MCNAPI WeakObjectHandle(::Scripting::WeakObjectHandle&& rhs);

    MCNAPI WeakObjectHandle(::Scripting::WeakObjectHandle const& rhs);

    MCNAPI WeakObjectHandle(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle);

    MCNAPI ::Scripting::ObjectHandle getHandle() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::WeakLifetimeScope getScope() const;

    MCNAPI ::Scripting::WeakObjectHandle& operator=(::Scripting::WeakObjectHandle&& rhs);

    MCNAPI ::Scripting::WeakObjectHandle& operator=(::Scripting::WeakObjectHandle const& rhs);

    MCNAPI bool operator==(::Scripting::WeakObjectHandle const& rhs) const;

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::WeakObjectHandle&& rhs);

    MCNAPI void* $ctor(::Scripting::WeakObjectHandle const& rhs);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::Scripting::ObjectHandle objHandle);
    // NOLINTEND
};

} // namespace Scripting
