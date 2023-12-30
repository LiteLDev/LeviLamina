#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ShootBowDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    ShootBowDefinition& operator=(ShootBowDefinition const&);
    ShootBowDefinition(ShootBowDefinition const&);
    ShootBowDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShootBowDefinition@@UEAA@XZ
    virtual ~ShootBowDefinition() = default;

    // vIndex: 1, symbol: ?load@ShootBowDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
