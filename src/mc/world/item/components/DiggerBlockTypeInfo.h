#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiggerBlockTypeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkd000a9;
    ::ll::UntypedStorage<4, 4>  mUnkc68da9;
    ::ll::UntypedStorage<8, 56> mUnk2f43e4;
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
