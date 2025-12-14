#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
struct DiggerBlockDefinitionTrigger;
// clang-format on

struct LegacyOnDigTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>>          mOnDigDefault;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerBlockDefinitionTrigger>> mOnDigTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponentData& operator=(LegacyOnDigTriggerItemComponentData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnDigTriggerItemComponentData();

    MCAPI LegacyOnDigTriggerItemComponentData(::LegacyOnDigTriggerItemComponentData&&);

    MCAPI LegacyOnDigTriggerItemComponentData(::LegacyOnDigTriggerItemComponentData const&);

    MCAPI ::LegacyOnDigTriggerItemComponentData& operator=(::LegacyOnDigTriggerItemComponentData&&);

    MCAPI ~LegacyOnDigTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::LegacyOnDigTriggerItemComponentData&&);

    MCAPI void* $ctor(::LegacyOnDigTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
