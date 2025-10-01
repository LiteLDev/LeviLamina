#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/world/actor/DefinitionTrigger.h"

struct DiggerBlockTypeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> filter;
    ::ll::TypedStorage<4, 4, int>                                     destroySpeed;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger>                    onDig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerBlockTypeInfo();

    MCAPI DiggerBlockTypeInfo(::DiggerBlockTypeInfo const&);

    MCAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo&&);

    MCAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::DiggerBlockTypeInfo const&);
    // NOLINTEND
};
