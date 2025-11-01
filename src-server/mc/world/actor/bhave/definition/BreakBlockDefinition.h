#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class BreakBlockDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk23a542;
    ::ll::UntypedStorage<8, 32> mUnk120a08;
    ::ll::UntypedStorage<4, 4> mUnk15c1e8;
    ::ll::UntypedStorage<8, 32> mUnk7832bb;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakBlockDefinition& operator=(BreakBlockDefinition const&);
    BreakBlockDefinition(BreakBlockDefinition const&);
    BreakBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~BreakBlockDefinition() /*override*/ = default;
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
