#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class InteractActionDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    InteractActionDefinition& operator=(InteractActionDefinition const&);
    InteractActionDefinition(InteractActionDefinition const&);
    InteractActionDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InteractActionDefinition@@UEAA@XZ
    virtual ~InteractActionDefinition() = default;

    // vIndex: 1, symbol: ?load@InteractActionDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value, class BehaviorFactory const&);

    // NOLINTEND
};
