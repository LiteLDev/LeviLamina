#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubtractiveLightInfo {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnk937568;
            ::ll::UntypedStorage<1, 1> mUnk69f6c0;
        };
        ::ll::UntypedStorage<8, 8> mUnk678e68;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    SubtractiveLightInfo& operator=(SubtractiveLightInfo const&);
    SubtractiveLightInfo(SubtractiveLightInfo const&);
    SubtractiveLightInfo();
};
