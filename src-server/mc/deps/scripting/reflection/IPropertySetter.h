#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
// clang-format on

namespace Scripting::Reflection {

class IPropertySetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk34d931;
    ::ll::UntypedStorage<1, 1> mUnk6122b2;
    // NOLINTEND

public:
    // prevent constructor by default
    IPropertySetter& operator=(IPropertySetter const&);
    IPropertySetter(IPropertySetter const&);
    IPropertySetter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPropertySetter() = default;

    // vIndex: 1
    virtual ::Scripting::ResultAny set(::entt::meta_handle, ::entt::meta_any) = 0;

    // vIndex: 2
    virtual ::entt::meta_type type() const = 0;

    // vIndex: 3
    virtual ::std::optional<::entt::meta_type> ownerType() const = 0;

    // vIndex: 4
    virtual bool isMemberFunction() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isMemberFunction() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
