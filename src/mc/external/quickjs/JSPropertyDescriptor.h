#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSPropertyDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7e7f86;
    ::ll::UntypedStorage<8, 16> mUnk635a60;
    ::ll::UntypedStorage<8, 16> mUnk3aceb7;
    ::ll::UntypedStorage<8, 16> mUnkf16edb;
    // NOLINTEND

public:
    // prevent constructor by default
    JSPropertyDescriptor& operator=(JSPropertyDescriptor const&);
    JSPropertyDescriptor(JSPropertyDescriptor const&);
    JSPropertyDescriptor();
};
