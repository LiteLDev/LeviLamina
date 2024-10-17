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
    // vIndex: 0
    virtual ~SelectorDefinition() = default;

    // vIndex: 1
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void load$(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
