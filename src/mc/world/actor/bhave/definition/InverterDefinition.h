#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class InverterDefinition : public ::DecoratorDefinition {
public:
    // prevent constructor by default
    InverterDefinition& operator=(InverterDefinition const&);
    InverterDefinition(InverterDefinition const&);
    InverterDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InverterDefinition@@UEAA@XZ
    virtual ~InverterDefinition() = default;

    // vIndex: 1, symbol: ?load@InverterDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
