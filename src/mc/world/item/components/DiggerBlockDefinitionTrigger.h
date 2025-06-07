#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiggerBlockDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnk4a908c;
    ::ll::UntypedStorage<8, 56>  mUnk57ba97;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerBlockDefinitionTrigger& operator=(DiggerBlockDefinitionTrigger const&);
    DiggerBlockDefinitionTrigger(DiggerBlockDefinitionTrigger const&);
    DiggerBlockDefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DiggerBlockDefinitionTrigger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
