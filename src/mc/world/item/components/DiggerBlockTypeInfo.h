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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DiggerBlockTypeInfo& operator=(DiggerBlockTypeInfo const&);
    DiggerBlockTypeInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DiggerBlockTypeInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerBlockTypeInfo(::DiggerBlockTypeInfo const&);

    MCAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo&&);

#ifdef LL_PLAT_C
    MCAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo const&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DiggerBlockTypeInfo const&);
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(::DiggerBlockTypeInfo const& __P0, ::DiggerBlockTypeInfo const& __P1);
// NOLINTEND
