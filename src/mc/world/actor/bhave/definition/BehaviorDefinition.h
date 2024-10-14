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
    // vIndex: 0
    virtual ~BehaviorDefinition();

    // vIndex: 1
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // vIndex: 2
    virtual std::unique_ptr<class BehaviorNode> createNode(
        class Actor&                 owner,
        class BehaviorFactory const& factory,
        class BehaviorNode*          parent,
        class BehaviorData*          data
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class BehaviorNode> createNode$(
        class Actor&                 owner,
        class BehaviorFactory const& factory,
        class BehaviorNode*          parent,
        class BehaviorData*          data
    ) const;

    MCAPI void load$(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
