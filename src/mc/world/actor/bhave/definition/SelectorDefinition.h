#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/CompositeDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SelectorDefinition : public ::CompositeDefinition {
public:
    // prevent constructor by default
    SelectorDefinition& operator=(SelectorDefinition const&);
    SelectorDefinition(SelectorDefinition const&);
    SelectorDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SelectorDefinition();

    // vIndex: 1, symbol: ?load@SelectorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value, class BehaviorFactory const&);

    // NOLINTEND
};
