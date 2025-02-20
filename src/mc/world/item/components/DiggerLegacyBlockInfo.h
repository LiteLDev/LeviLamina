#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiggerLegacyBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnkadfc32;
    ::ll::UntypedStorage<4, 4>   mUnk293625;
    ::ll::UntypedStorage<8, 256> mUnk64e707;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerLegacyBlockInfo(DiggerLegacyBlockInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerLegacyBlockInfo();

    MCAPI ::DiggerLegacyBlockInfo& operator=(::DiggerLegacyBlockInfo const&);

    MCAPI ::DiggerLegacyBlockInfo& operator=(::DiggerLegacyBlockInfo&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
