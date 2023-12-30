#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MoveDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    MoveDefinition& operator=(MoveDefinition const&);
    MoveDefinition(MoveDefinition const&);
    MoveDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MoveDefinition@@UEAA@XZ
    virtual ~MoveDefinition();

    // vIndex: 1, symbol: ?load@MoveDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
