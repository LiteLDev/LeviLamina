#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class TimeZone {
public:
    // TimeZone inner types declare
    // clang-format off
    struct CivilInfo;
    struct CivilTransition;
    struct TimeInfo;
    // clang-format on

    // TimeZone inner types define
    struct CivilInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk9a7dbb;
        ::ll::UntypedStorage<4, 12> mUnke95694;
        ::ll::UntypedStorage<4, 4>  mUnk9cc8f1;
        ::ll::UntypedStorage<1, 1>  mUnkd7a169;
        ::ll::UntypedStorage<8, 8>  mUnk1939b1;
        // NOLINTEND

    public:
        // prevent constructor by default
        CivilInfo& operator=(CivilInfo const&);
        CivilInfo(CivilInfo const&);
        CivilInfo();
    };

    struct CivilTransition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkaf256f;
        ::ll::UntypedStorage<8, 16> mUnk62e237;
        // NOLINTEND

    public:
        // prevent constructor by default
        CivilTransition& operator=(CivilTransition const&);
        CivilTransition(CivilTransition const&);
        CivilTransition();
    };

    struct TimeInfo {
    public:
        // TimeInfo inner types define
        enum class CivilKind : int {
            Unique   = 0,
            Skipped  = 1,
            Repeated = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnka33830;
        ::ll::UntypedStorage<4, 12> mUnkf2a893;
        ::ll::UntypedStorage<4, 12> mUnkf5f0a6;
        ::ll::UntypedStorage<4, 12> mUnk63e631;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeInfo& operator=(TimeInfo const&);
        TimeInfo(TimeInfo const&);
        TimeInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke43ad9;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeZone& operator=(TimeZone const&);
    TimeZone(TimeZone const&);
    TimeZone();
};

} // namespace absl
