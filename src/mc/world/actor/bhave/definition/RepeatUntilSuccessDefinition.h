#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RepeatUntilSuccessDefinition : public ::DecoratorDefinition {
public:
    // prevent constructor by default
    RepeatUntilSuccessDefinition& operator=(RepeatUntilSuccessDefinition const&);
    RepeatUntilSuccessDefinition(RepeatUntilSuccessDefinition const&);
    RepeatUntilSuccessDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepeatUntilSuccessDefinition() = default;

    // vIndex: 1
    virtual void load(class Json::Value value, class BehaviorFactory const& factory);

    // NOLINTEND
};
