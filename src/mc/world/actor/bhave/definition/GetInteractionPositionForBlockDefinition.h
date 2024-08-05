#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    GetInteractionPositionForBlockDefinition& operator=(GetInteractionPositionForBlockDefinition const&);
    GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition const&);
    GetInteractionPositionForBlockDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetInteractionPositionForBlockDefinition();

    // vIndex: 1
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
