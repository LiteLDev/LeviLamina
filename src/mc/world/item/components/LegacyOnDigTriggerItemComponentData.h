#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnDigTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb10ef0;
    ::ll::UntypedStorage<8, 24> mUnk466236;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponentData& operator=(LegacyOnDigTriggerItemComponentData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnDigTriggerItemComponentData();

    MCAPI LegacyOnDigTriggerItemComponentData(::LegacyOnDigTriggerItemComponentData const&);

    MCAPI LegacyOnDigTriggerItemComponentData(::LegacyOnDigTriggerItemComponentData&&);

    MCAPI ::LegacyOnDigTriggerItemComponentData& operator=(::LegacyOnDigTriggerItemComponentData&&);

    MCAPI ~LegacyOnDigTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::LegacyOnDigTriggerItemComponentData const&);

    MCAPI void* $ctor(::LegacyOnDigTriggerItemComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
