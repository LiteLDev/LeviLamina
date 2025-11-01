#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoCodec {
public:
    // VideoCodec inner types declare
    // clang-format off
    struct TimingFrameTriggerThresholds;
    // clang-format on
    
    // VideoCodec inner types define
    struct TimingFrameTriggerThresholds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka5313e;
        ::ll::UntypedStorage<2, 2> mUnk9e4ae3;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TimingFrameTriggerThresholds& operator=(TimingFrameTriggerThresholds const&);
        TimingFrameTriggerThresholds(TimingFrameTriggerThresholds const&);
        TimingFrameTriggerThresholds();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9ced0a;
    ::ll::UntypedStorage<2, 2> mUnkc4fe4a;
    ::ll::UntypedStorage<2, 2> mUnkf31137;
    ::ll::UntypedStorage<4, 4> mUnk898ba2;
    ::ll::UntypedStorage<4, 4> mUnk658182;
    ::ll::UntypedStorage<4, 4> mUnka15313;
    ::ll::UntypedStorage<4, 4> mUnk55575d;
    ::ll::UntypedStorage<1, 1> mUnk197aa5;
    ::ll::UntypedStorage<4, 4> mUnk8b5226;
    ::ll::UntypedStorage<1, 1> mUnk414256;
    ::ll::UntypedStorage<4, 108> mUnk7124d4;
    ::ll::UntypedStorage<4, 160> mUnkb38c39;
    ::ll::UntypedStorage<4, 4> mUnkebb858;
    ::ll::UntypedStorage<1, 1> mUnk19ec80;
    ::ll::UntypedStorage<8, 16> mUnkcd4ab0;
    ::ll::UntypedStorage<1, 1> mUnk16335f;
    ::ll::UntypedStorage<4, 16> mUnk45be67;
    ::ll::UntypedStorage<1, 2> mUnk2e1987;
    ::ll::UntypedStorage<4, 4> mUnk6d4041;
    ::ll::UntypedStorage<1, 1> mUnk53192d;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoCodec& operator=(VideoCodec const&);
    VideoCodec(VideoCodec const&);
    VideoCodec();

};

}
