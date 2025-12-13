#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"
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
    ::ll::UntypedStorage<8, 24> mUnkcf07dc;
    ::ll::UntypedStorage<1, 1>  mUnk2e067d;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionEntry& operator=(FunctionEntry const&);
    FunctionEntry(FunctionEntry const&);
    FunctionEntry();

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
    MCNAPI void $execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
