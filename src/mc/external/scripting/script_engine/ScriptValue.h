#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7e6933;
    ::ll::UntypedStorage<1, 1>  mUnk979b85;
    ::ll::UntypedStorage<8, 16> mUnk5510fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptValue& operator=(ScriptValue const&);
    ScriptValue(ScriptValue const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptValue();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptValue();

    MCFOLD ::Scripting::ContextId getContextId() const;

    MCAPI ::Scripting::WeakLifetimeScope getWeakLifetimeScope() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
