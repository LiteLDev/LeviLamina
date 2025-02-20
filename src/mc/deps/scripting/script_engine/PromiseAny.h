#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
// clang-format on

namespace Scripting {

class PromiseAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc023ba;
    // NOLINTEND

public:
    // prevent constructor by default
    PromiseAny& operator=(PromiseAny const&);
    PromiseAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PromiseAny() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PromiseAny(::Scripting::PromiseAny const& rhs);

    MCFOLD ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny&& rhs);

    MCAPI ::Scripting::ResultAny rejectGeneric(::entt::meta_any& any) const;

    MCAPI ::Scripting::ResultAny resolveGeneric(::entt::meta_any& any) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::PromiseAny const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
