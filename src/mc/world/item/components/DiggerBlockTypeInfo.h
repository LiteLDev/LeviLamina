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
    // prevent constructor by default
    DiggerBlockTypeInfo& operator=(DiggerBlockTypeInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiggerBlockTypeInfo();

    MCNAPI DiggerBlockTypeInfo(::DiggerBlockTypeInfo const&);

    MCNAPI ::DiggerBlockTypeInfo& operator=(::DiggerBlockTypeInfo&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::DiggerBlockTypeInfo const&);
    // NOLINTEND
};
