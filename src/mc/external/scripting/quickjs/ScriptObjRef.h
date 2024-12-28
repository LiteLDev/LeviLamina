#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class ScriptObjRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk60fd4e;
    ::ll::UntypedStorage<8, 16> mUnke0e095;
    ::ll::UntypedStorage<8, 16> mUnk9f97b7;
    ::ll::UntypedStorage<8, 16> mUnk914028;
    ::ll::UntypedStorage<8, 16> mUnk18a47c;
    ::ll::UntypedStorage<4, 4>  mUnke9ae49;
    ::ll::UntypedStorage<1, 1>  mUnk7fb67c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObjRef& operator=(ScriptObjRef const&);
    ScriptObjRef(ScriptObjRef const&);
    ScriptObjRef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void pin();

    MCAPI void unpin();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
