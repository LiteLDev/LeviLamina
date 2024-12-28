#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class WaitTicksDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1cb3f7;
    ::ll::UntypedStorage<8, 32> mUnk895d2b;
    // NOLINTEND

public:
    // prevent constructor by default
    WaitTicksDefinition& operator=(WaitTicksDefinition const&);
    WaitTicksDefinition(WaitTicksDefinition const&);
    WaitTicksDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~WaitTicksDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
