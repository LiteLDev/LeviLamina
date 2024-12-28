#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptCommandMessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkad76e4;
    ::ll::UntypedStorage<8, 32> mUnke38858;
    ::ll::UntypedStorage<8, 8>  mUnk2ede56;
    ::ll::UntypedStorage<8, 16> mUnk149d07;
    ::ll::UntypedStorage<8, 32> mUnk73e67c;
    ::ll::UntypedStorage<8, 16> mUnk2e7d95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommandMessageEvent& operator=(ScriptCommandMessageEvent const&);
    ScriptCommandMessageEvent(ScriptCommandMessageEvent const&);
    ScriptCommandMessageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptCommandMessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
