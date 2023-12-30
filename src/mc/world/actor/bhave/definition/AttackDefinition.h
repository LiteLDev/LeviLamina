#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AttackDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    AttackDefinition& operator=(AttackDefinition const&);
    AttackDefinition(AttackDefinition const&);
    AttackDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AttackDefinition@@UEAA@XZ
    virtual ~AttackDefinition() = default;

    // vIndex: 1, symbol: ?load@AttackDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
