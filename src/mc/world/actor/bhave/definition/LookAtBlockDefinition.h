#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LookAtBlockDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    LookAtBlockDefinition& operator=(LookAtBlockDefinition const&);
    LookAtBlockDefinition(LookAtBlockDefinition const&);
    LookAtBlockDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LookAtBlockDefinition();

    // vIndex: 1, symbol: ?load@LookAtBlockDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value, class BehaviorFactory const&);

    // NOLINTEND
};
