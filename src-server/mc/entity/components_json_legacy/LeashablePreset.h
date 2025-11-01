#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LeashablePreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke35717;
    ::ll::UntypedStorage<4, 4>  mUnkbe409c;
    ::ll::UntypedStorage<4, 4>  mUnkbd82c6;
    ::ll::UntypedStorage<4, 4>  mUnk53be73;
    ::ll::UntypedStorage<1, 1>  mUnk41f50a;
    ::ll::UntypedStorage<4, 4>  mUnk912f5a;
    // NOLINTEND

public:
    // prevent constructor by default
    LeashablePreset& operator=(LeashablePreset const&);
    LeashablePreset(LeashablePreset const&);
    LeashablePreset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setSpringType(::std::string const& type);

    MCNAPI ~LeashablePreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
