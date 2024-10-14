#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LookAtBlockDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    LookAtBlockDefinition& operator=(LookAtBlockDefinition const&);
    LookAtBlockDefinition(LookAtBlockDefinition const&);
    LookAtBlockDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtBlockDefinition() = default;

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
