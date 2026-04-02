#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#include "mc/server/commands/functions/FunctionState.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class FunctionManager;
// clang-format on

class FunctionEntry : public ::IFunctionEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IFunctionEntry>>> mCommandList;
    ::ll::TypedStorage<1, 1, ::FunctionState>                                     mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FunctionEntry() /*override*/ = default;

    virtual void
    execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
