#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ArgumentDetails; }
// clang-format on

namespace Scripting::Reflection {

class IFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb83a18;
    ::ll::UntypedStorage<4, 4>  mUnkd34dfa;
    ::ll::UntypedStorage<4, 4>  mUnk89701f;
    ::ll::UntypedStorage<8, 24> mUnk84c109;
    // NOLINTEND

public:
    // prevent constructor by default
    IFunction& operator=(IFunction const&);
    IFunction(IFunction const&);
    IFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFunction();

    virtual ::entt::meta_any call(::entt::meta_handle, ::entt::meta_any*, uint) = 0;

    virtual ::entt::meta_type getReturnType() const = 0;

    virtual uint getArgCount() const = 0;

    virtual ::entt::meta_type getArgType(uint) const = 0;

    virtual ::entt::meta_any const& getDefaultArg(uint) const = 0;

    virtual bool isValidArgumentValue(::entt::meta_any const&, uint) const = 0;

    virtual ::std::optional<::entt::meta_type> getInstanceType() const = 0;

    virtual ::Scripting::ArgumentDetails const& getArgDetails(uint) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
