#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class PeekDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk24872a;
    ::ll::UntypedStorage<8, 104> mUnka8083b;
    ::ll::UntypedStorage<8, 104> mUnk60915a;
    // NOLINTEND

public:
    // prevent constructor by default
    PeekDefinition& operator=(PeekDefinition const&);
    PeekDefinition(PeekDefinition const&);
    PeekDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity) const;

    MCAPI ~PeekDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
