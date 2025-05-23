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
    // vIndex: 0
    virtual ~IPropertyGetter() = default;

    // vIndex: 1
    virtual ::entt::meta_any get(::entt::meta_handle) = 0;

    // vIndex: 2
    virtual ::entt::meta_type type() const = 0;

    // vIndex: 3
    virtual ::std::optional<::entt::meta_type> ownerType() const = 0;

    // vIndex: 4
    virtual ::Scripting::Reflection::ReturnPolicy getReturnPolicy() const = 0;

    // vIndex: 5
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
