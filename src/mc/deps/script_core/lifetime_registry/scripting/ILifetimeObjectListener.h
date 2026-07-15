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
    virtual ~ILifetimeObjectListener() = default;

    virtual void
    onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;

    virtual void
    onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
