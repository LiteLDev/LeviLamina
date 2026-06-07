#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessageId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptMessageReceiveEventFilterData(::std::string messageId);

    MCAPI ~ScriptMessageReceiveEventFilterData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string messageId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
