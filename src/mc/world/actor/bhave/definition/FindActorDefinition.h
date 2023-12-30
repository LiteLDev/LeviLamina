#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FindActorDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    FindActorDefinition& operator=(FindActorDefinition const&);
    FindActorDefinition(FindActorDefinition const&);
    FindActorDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindActorDefinition@@UEAA@XZ
    virtual ~FindActorDefinition() = default;

    // vIndex: 1, symbol: ?load@FindActorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
