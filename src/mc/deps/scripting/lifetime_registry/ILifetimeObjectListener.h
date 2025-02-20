#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class ILifetimeObjectListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILifetimeObjectListener();

    // vIndex: 1
    virtual void
    onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;

    // vIndex: 2
    virtual void
    onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
