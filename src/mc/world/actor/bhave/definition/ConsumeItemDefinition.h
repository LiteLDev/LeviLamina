#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ConsumeItemDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    ConsumeItemDefinition& operator=(ConsumeItemDefinition const&);
    ConsumeItemDefinition(ConsumeItemDefinition const&);
    ConsumeItemDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConsumeItemDefinition() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
