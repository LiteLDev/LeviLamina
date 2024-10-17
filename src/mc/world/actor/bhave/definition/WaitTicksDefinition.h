#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WaitTicksDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    WaitTicksDefinition& operator=(WaitTicksDefinition const&);
    WaitTicksDefinition(WaitTicksDefinition const&);
    WaitTicksDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WaitTicksDefinition() = default;

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
