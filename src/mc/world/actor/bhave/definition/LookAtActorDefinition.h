#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LookAtActorDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    LookAtActorDefinition& operator=(LookAtActorDefinition const&);
    LookAtActorDefinition(LookAtActorDefinition const&);
    LookAtActorDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LookAtActorDefinition@@UEAA@XZ
    virtual ~LookAtActorDefinition() = default;

    // vIndex: 1, symbol: ?load@LookAtActorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
