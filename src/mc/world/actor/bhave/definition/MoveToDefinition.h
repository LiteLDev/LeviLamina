#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MoveToDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    MoveToDefinition& operator=(MoveToDefinition const&);
    MoveToDefinition(MoveToDefinition const&);
    MoveToDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToDefinition@@UEAA@XZ
    virtual ~MoveToDefinition() = default;

    // vIndex: 1, symbol: ?load@MoveToDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
