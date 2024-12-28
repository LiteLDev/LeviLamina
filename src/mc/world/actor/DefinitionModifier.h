#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc07185;
    ::ll::UntypedStorage<8, 24> mUnk87a0c8;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionModifier& operator=(DefinitionModifier const&);
    DefinitionModifier(DefinitionModifier const&);
    DefinitionModifier();

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
