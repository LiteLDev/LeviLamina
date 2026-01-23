#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockSource;
class Random;
class Vec3;
// clang-format on

class LevelAnimateTickHelper {
public:
    // LevelAnimateTickHelper inner types declare
    // clang-format off
    struct LoopCount;
    struct TimeLimitedJavaParityOffsetCenterData;
    // clang-format on

    // LevelAnimateTickHelper inner types define
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

    struct TimeLimitedJavaParityOffsetCenterData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk103825;
        ::ll::UntypedStorage<4, 4>  mUnkc00d85;
        ::ll::UntypedStorage<4, 4>  mUnk355eb9;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeLimitedJavaParityOffsetCenterData& operator=(TimeLimitedJavaParityOffsetCenterData const&);
        TimeLimitedJavaParityOffsetCenterData(TimeLimitedJavaParityOffsetCenterData const&);
        TimeLimitedJavaParityOffsetCenterData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk3e3067;
    ::ll::UntypedStorage<4, 4>  mUnkd511a7;
    ::ll::UntypedStorage<4, 4>  mUnk623737;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelAnimateTickHelper& operator=(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _tickBlockAnimationsTimeLimitedJavaParity(
        ::BlockSource&                                                         region,
        ::Random&                                                              random,
        ::Vec3 const&                                                          centerPosition,
        ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData const& offsetCenterData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _animateTickRandomBlockInRadius(
        ::BlockSource& region,
        ::Random&      random,
        ::Vec3 const&  centerPosition,
        float          radius,
        bool           doAnimateTickBedrockLegacy
    );

    MCNAPI_C static ::LevelAnimateTickHelper::TimeLimitedJavaParityOffsetCenterData
    _computeTimeLimitedJavaParityAnimateTickCenter(
        ::Vec3 const& centerPosition,
        ::Vec3 const& prevPosition,
        ::Vec3 const& viewDirection
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& MIN_TIME_LIMITED_JAVA_PARITY_VERSION();
    // NOLINTEND
};
