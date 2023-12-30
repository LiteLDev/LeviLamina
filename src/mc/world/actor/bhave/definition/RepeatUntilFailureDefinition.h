#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RepeatUntilFailureDefinition : public ::DecoratorDefinition {
public:
    // prevent constructor by default
    RepeatUntilFailureDefinition& operator=(RepeatUntilFailureDefinition const&);
    RepeatUntilFailureDefinition(RepeatUntilFailureDefinition const&);
    RepeatUntilFailureDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RepeatUntilFailureDefinition@@UEAA@XZ
    virtual ~RepeatUntilFailureDefinition() = default;

    // vIndex: 1, symbol: ?load@RepeatUntilFailureDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
