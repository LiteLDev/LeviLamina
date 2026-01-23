#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerBlockTypeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> filter;
    ::ll::TypedStorage<4, 4, int>                                     destroySpeed;
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger>                    onDig;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerBlockTypeInfo& operator=(DiggerBlockTypeInfo const&);
    DiggerBlockTypeInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerBlockTypeInfo(::DiggerBlockTypeInfo const&);

    MCAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DiggerBlockTypeInfo const&);
    // NOLINTEND
};
