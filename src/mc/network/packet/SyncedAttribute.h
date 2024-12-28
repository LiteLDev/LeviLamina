#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, float>          mMinValue;
    ::ll::TypedStorage<4, 4, float>          mCurrentValue;
    ::ll::TypedStorage<4, 4, float>          mMaxValue;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncedAttribute& operator=(SyncedAttribute const&);
    SyncedAttribute(SyncedAttribute const&);
    SyncedAttribute();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SyncedAttribute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
