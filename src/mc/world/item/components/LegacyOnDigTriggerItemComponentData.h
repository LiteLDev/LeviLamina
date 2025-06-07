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
    MCNAPI LegacyOnDigTriggerItemComponentData();

    MCNAPI LegacyOnDigTriggerItemComponentData(::LegacyOnDigTriggerItemComponentData const&);

    MCNAPI LegacyOnDigTriggerItemComponentData(::LegacyOnDigTriggerItemComponentData&&);

    MCNAPI ::LegacyOnDigTriggerItemComponentData& operator=(::LegacyOnDigTriggerItemComponentData&&);

    MCNAPI ~LegacyOnDigTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LegacyOnDigTriggerItemComponentData const&);

    MCNAPI void* $ctor(::LegacyOnDigTriggerItemComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
