#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk350871;
    ::ll::UntypedStorage<8, 32> mUnk2bb5a0;
    ::ll::UntypedStorage<4, 12> mUnkcbce58;
    ::ll::UntypedStorage<8, 32> mUnk594722;
    ::ll::UntypedStorage<8, 32> mUnk6033a7;
    ::ll::UntypedStorage<8, 32> mUnk1403b0;
    ::ll::UntypedStorage<4, 4>  mUnk3feb65;
    ::ll::UntypedStorage<8, 32> mUnkd757b3;
    // NOLINTEND

public:
    // prevent constructor by default
    GetInteractionPositionForBlockDefinition& operator=(GetInteractionPositionForBlockDefinition const&);
    GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition const&);
    GetInteractionPositionForBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~GetInteractionPositionForBlockDefinition() /*override*/;
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
