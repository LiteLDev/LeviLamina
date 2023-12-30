#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BehaviorDefinition {
public:
    // prevent constructor by default
    BehaviorDefinition& operator=(BehaviorDefinition const&);
    BehaviorDefinition(BehaviorDefinition const&);
    BehaviorDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BehaviorDefinition@@UEAA@XZ
    virtual ~BehaviorDefinition();

    // vIndex: 1, symbol: ?load@BehaviorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // vIndex: 2, symbol:
    // ?createNode@BehaviorDefinition@@UEBA?AV?$unique_ptr@VBehaviorNode@@U?$default_delete@VBehaviorNode@@@std@@@std@@AEAVActor@@AEBVBehaviorFactory@@PEAVBehaviorNode@@PEAVBehaviorData@@@Z
    virtual std::unique_ptr<class BehaviorNode> createNode(
        class Actor&                 owner,
        class BehaviorFactory const& factory,
        class BehaviorNode*          parent,
        class BehaviorData*          data
    ) const;

    // NOLINTEND
};
