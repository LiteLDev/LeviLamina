#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
struct EventResponse;
// clang-format on

struct DefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::EventResponse const*>> mResponses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DefinitionModifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
