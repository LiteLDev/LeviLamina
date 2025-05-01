#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/deps/scripting/script_engine/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
// clang-format on

namespace Scripting {

class ClosureAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke4d77a;
    ::ll::UntypedStorage<8, 8>  mUnk1d806b;
    // NOLINTEND

public:
    // prevent constructor by default
    ClosureAny& operator=(ClosureAny const&);
    ClosureAny();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClosureAny() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClosureAny(::Scripting::ClosureAny const& rhs);

    MCNAPI ::Scripting::ResultAny callGeneric(
        ::entt::meta_any*                       args,
        uint                                    argc,
        ::entt::meta_type const&                expectedReturnType,
        ::std::optional<::Scripting::Privilege> privilege
    ) const;

    MCNAPI bool compareTo(::Scripting::ClosureAny const& rhs) const;

    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ClosureAny const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
