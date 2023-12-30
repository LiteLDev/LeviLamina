#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FindBlockDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    FindBlockDefinition& operator=(FindBlockDefinition const&);
    FindBlockDefinition(FindBlockDefinition const&);
    FindBlockDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindBlockDefinition@@UEAA@XZ
    virtual ~FindBlockDefinition() = default;

    // vIndex: 1, symbol: ?load@FindBlockDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
