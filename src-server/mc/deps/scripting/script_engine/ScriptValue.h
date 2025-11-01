#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

class ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7e6933;
    ::ll::UntypedStorage<1, 1> mUnk979b85;
    ::ll::UntypedStorage<8, 16> mUnk5510fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptValue& operator=(ScriptValue const&);
    ScriptValue(ScriptValue const&);
    ScriptValue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptValue();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::WeakLifetimeScope getWeakLifetimeScope() const;
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

}
