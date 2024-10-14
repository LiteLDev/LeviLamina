#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RepeatUntilFailureDefinition : public ::DecoratorDefinition {
public:
    // prevent constructor by default
    RepeatUntilFailureDefinition& operator=(RepeatUntilFailureDefinition const&);
    RepeatUntilFailureDefinition(RepeatUntilFailureDefinition const&);
    RepeatUntilFailureDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepeatUntilFailureDefinition() = default;

    // vIndex: 1
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void load$(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
