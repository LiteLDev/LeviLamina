#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class LevelAnimateTickHelper {
public:
    // LevelAnimateTickHelper inner types declare
    // clang-format off
    struct LoopCount;
    struct TimeLimitedJavaParityOffsetCenterData;
    // clang-format on
    
    // LevelAnimateTickHelper inner types define
    struct TimeLimitedJavaParityOffsetCenterData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk103825;
        ::ll::UntypedStorage<4, 4> mUnkc00d85;
        ::ll::UntypedStorage<4, 4> mUnk355eb9;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TimeLimitedJavaParityOffsetCenterData& operator=(TimeLimitedJavaParityOffsetCenterData const&);
        TimeLimitedJavaParityOffsetCenterData(TimeLimitedJavaParityOffsetCenterData const&);
        TimeLimitedJavaParityOffsetCenterData();
    
    };
    
    struct LoopCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6eea10;
        ::ll::UntypedStorage<4, 4> mUnk5d0383;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        LoopCount& operator=(LoopCount const&);
        LoopCount(LoopCount const&);
        LoopCount();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk3e3067;
    ::ll::UntypedStorage<4, 4> mUnkd511a7;
    ::ll::UntypedStorage<4, 4> mUnk623737;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelAnimateTickHelper& operator=(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& MIN_TIME_LIMITED_JAVA_PARITY_VERSION();
    // NOLINTEND

};
