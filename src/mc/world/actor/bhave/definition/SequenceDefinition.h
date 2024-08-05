#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/CompositeDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SequenceDefinition : public ::CompositeDefinition {
public:
    // prevent constructor by default
    SequenceDefinition& operator=(SequenceDefinition const&);
    SequenceDefinition(SequenceDefinition const&);
    SequenceDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SequenceDefinition() = default;

    // vIndex: 1
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
