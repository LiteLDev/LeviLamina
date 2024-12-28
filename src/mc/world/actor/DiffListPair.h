#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
// clang-format on

struct DiffListPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc7b98f;
    ::ll::UntypedStorage<8, 8> mUnke36cc2;
    // NOLINTEND

public:
    // prevent constructor by default
    DiffListPair& operator=(DiffListPair const&);
    DiffListPair(DiffListPair const&);
    DiffListPair();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiffListPair(bool addIfTrue_SubtractIfFalse, ::ActorDefinitionDescriptor* descriptor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool addIfTrue_SubtractIfFalse, ::ActorDefinitionDescriptor* descriptor);
    // NOLINTEND
};
