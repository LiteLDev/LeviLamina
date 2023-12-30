#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlyDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    FlyDefinition& operator=(FlyDefinition const&);
    FlyDefinition(FlyDefinition const&);
    FlyDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FlyDefinition@@UEAA@XZ
    virtual ~FlyDefinition() = default;

    // vIndex: 1, symbol: ?load@FlyDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
