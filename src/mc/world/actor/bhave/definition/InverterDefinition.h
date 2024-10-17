#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class InverterDefinition : public ::DecoratorDefinition {
public:
    // prevent constructor by default
    InverterDefinition& operator=(InverterDefinition const&);
    InverterDefinition(InverterDefinition const&);
    InverterDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InverterDefinition() = default;

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
