#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseLightData {
public:
    // BaseLightData inner types declare
    // clang-format off
    struct DarknessLevels;
    // clang-format on
    
    // BaseLightData inner types define
    struct DarknessLevels {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk79b59d;
        ::ll::UntypedStorage<4, 4> mUnk4028d4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        DarknessLevels& operator=(DarknessLevels const&);
        DarknessLevels(DarknessLevels const&);
        DarknessLevels();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnked29b8;
    ::ll::UntypedStorage<4, 4> mUnk3ab38c;
    ::ll::UntypedStorage<4, 4> mUnk1fd1cb;
    ::ll::UntypedStorage<4, 4> mUnkf09363;
    ::ll::UntypedStorage<4, 4> mUnk97cd76;
    ::ll::UntypedStorage<4, 4> mUnkc3ec6b;
    ::ll::UntypedStorage<1, 1> mUnk88f545;
    ::ll::UntypedStorage<4, 4> mUnkf9e247;
    ::ll::UntypedStorage<1, 1> mUnkcdf60d;
    ::ll::UntypedStorage<4, 4> mUnk7e7f3d;
    ::ll::UntypedStorage<4, 4> mUnk66ecb7;
    ::ll::UntypedStorage<4, 4> mUnk4d2920;
    ::ll::UntypedStorage<4, 4> mUnk56fdc4;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseLightData& operator=(BaseLightData const&);
    BaseLightData(BaseLightData const&);
    BaseLightData();

};
