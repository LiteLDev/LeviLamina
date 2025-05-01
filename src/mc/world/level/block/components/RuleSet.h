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
    ::ll::UntypedStorage<8, 24> mUnk8ae233;
    // NOLINTEND

public:
    // prevent constructor by default
    RuleSet& operator=(RuleSet const&);
    RuleSet(RuleSet const&);
    RuleSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::RuleSet& operator=(::RuleSet&&);

    MCNAPI ~RuleSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void filterDuplicates(::RuleSet& instance, ::std::vector<::DetectionRule> const& detectionRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
