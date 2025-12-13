#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/ReturnPolicy.h"

namespace Scripting::Reflection {

class IPropertyGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2af62d;
    // NOLINTEND

public:
    // prevent constructor by default
    IPropertyGetter& operator=(IPropertyGetter const&);
    IPropertyGetter(IPropertyGetter const&);
    IPropertyGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPropertyGetter() = default;

    virtual ::entt::meta_any get(::entt::meta_handle) = 0;

    virtual ::entt::meta_type type() const = 0;

    virtual ::std::optional<::entt::meta_type> ownerType() const = 0;

    virtual ::Scripting::Reflection::ReturnPolicy getReturnPolicy() const = 0;

    virtual bool isReferenceType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::Reflection
