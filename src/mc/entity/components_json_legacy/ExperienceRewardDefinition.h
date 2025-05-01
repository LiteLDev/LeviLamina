#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

class ExperienceRewardDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6a1248;
    ::ll::UntypedStorage<8, 24> mUnk5681e0;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardDefinition& operator=(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBredExpressionNode(::ExpressionNode const& node);

    MCNAPI void addDeathExpressionNode(::ExpressionNode const& node);
    // NOLINTEND
};
