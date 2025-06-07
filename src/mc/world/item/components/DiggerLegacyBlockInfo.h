#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiggerLegacyBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkadfc32;
    ::ll::UntypedStorage<4, 4>  mUnk293625;
    ::ll::UntypedStorage<8, 56> mUnk64e707;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerLegacyBlockInfo& operator=(DiggerLegacyBlockInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiggerLegacyBlockInfo();

    MCNAPI DiggerLegacyBlockInfo(::DiggerLegacyBlockInfo const&);

    MCNAPI ::DiggerLegacyBlockInfo& operator=(::DiggerLegacyBlockInfo&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::DiggerLegacyBlockInfo const&);
    // NOLINTEND
};
