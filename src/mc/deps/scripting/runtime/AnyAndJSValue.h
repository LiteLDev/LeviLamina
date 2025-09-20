#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/quickjs/JSValue.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
// clang-format on

namespace Scripting {

struct AnyAndJSValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::entt::meta_any>          any;
    ::ll::TypedStorage<8, 24, ::std::optional<::JSValue>> jsValue;
    ::ll::TypedStorage<8, 8, ::JSContext*>                ctx;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AnyAndJSValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
