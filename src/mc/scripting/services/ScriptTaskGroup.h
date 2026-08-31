#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
// clang-format on

class ScriptTaskGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk86a7e9;
    ::ll::UntypedStorage<8, 8>  mUnka4e895;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTaskGroup& operator=(ScriptTaskGroup const&);
    ScriptTaskGroup(ScriptTaskGroup const&);
    ScriptTaskGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptTaskGroup(::Bedrock::NonOwnerPointer<::Scheduler> scheduler);

    MCNAPI ~ScriptTaskGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::Scheduler> scheduler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
