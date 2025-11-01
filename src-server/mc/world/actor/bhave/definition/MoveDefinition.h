#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class MoveDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc89ac6;
    ::ll::UntypedStorage<8, 32> mUnk5907c5;
    ::ll::UntypedStorage<8, 32> mUnk7672fc;
    ::ll::UntypedStorage<8, 32> mUnk2a3353;
    ::ll::UntypedStorage<4, 4>  mUnk18fcf2;
    ::ll::UntypedStorage<8, 32> mUnk12f277;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveDefinition& operator=(MoveDefinition const&);
    MoveDefinition(MoveDefinition const&);
    MoveDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~MoveDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
