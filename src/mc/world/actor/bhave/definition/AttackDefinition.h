#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class AttackDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk976952;
    ::ll::UntypedStorage<8, 32> mUnkfd92bc;
    // NOLINTEND

public:
    // prevent constructor by default
    AttackDefinition& operator=(AttackDefinition const&);
    AttackDefinition(AttackDefinition const&);
    AttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    virtual ~AttackDefinition() /*override*/ = default;
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
