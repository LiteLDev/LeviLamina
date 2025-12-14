#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DetectionRule;
// clang-format on

struct RuleSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DetectionRule>> ruleSet;
    // NOLINTEND

public:
    // prevent constructor by default
    RuleSet& operator=(RuleSet const&);
    RuleSet(RuleSet const&);
    RuleSet();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::RuleSet& operator=(::RuleSet&&);

    MCAPI ~RuleSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void filterDuplicates(::RuleSet& instance, ::std::vector<::DetectionRule> const& detectionRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
