#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct GiveableTrigger;
// clang-format on

class GiveableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk55a84c;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableDefinition& operator=(GiveableDefinition const&);
    GiveableDefinition(GiveableDefinition const&);
    GiveableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addGiveableTrigger(::GiveableTrigger const& trigger);
    // NOLINTEND
};
