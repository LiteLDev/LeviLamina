#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WaitDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    WaitDefinition& operator=(WaitDefinition const&);
    WaitDefinition(WaitDefinition const&);
    WaitDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WaitDefinition@@UEAA@XZ
    virtual ~WaitDefinition() = default;

    // vIndex: 1, symbol: ?load@WaitDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
