#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
namespace Json { class Value; }
// clang-format on

class CheckHarvestConditionDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk52630c;
    ::ll::UntypedStorage<8, 32> mUnk44d92e;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckHarvestConditionDefinition& operator=(CheckHarvestConditionDefinition const&);
    CheckHarvestConditionDefinition(CheckHarvestConditionDefinition const&);
    CheckHarvestConditionDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory) /*override*/;

    // vIndex: 0
    virtual ~CheckHarvestConditionDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
