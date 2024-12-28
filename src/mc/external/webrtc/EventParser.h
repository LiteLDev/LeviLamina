#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class EventParser {
public:
    // EventParser inner types declare
    // clang-format off
    struct ValueAndPostionView;
    // clang-format on

    // EventParser inner types define
    struct ValueAndPostionView {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk8631d9;
        ::ll::UntypedStorage<8, 16> mUnk6ee568;
        // NOLINTEND

    public:
        // prevent constructor by default
        ValueAndPostionView& operator=(ValueAndPostionView const&);
        ValueAndPostionView(ValueAndPostionView const&);
        ValueAndPostionView();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7e93c3;
    ::ll::UntypedStorage<8, 24> mUnk54c608;
    ::ll::UntypedStorage<8, 24> mUnk773ff0;
    ::ll::UntypedStorage<8, 24> mUnk139dad;
    ::ll::UntypedStorage<8, 16> mUnk80b249;
    ::ll::UntypedStorage<8, 8>  mUnk4e9a17;
    ::ll::UntypedStorage<8, 8>  mUnkfb069a;
    // NOLINTEND

public:
    // prevent constructor by default
    EventParser& operator=(EventParser const&);
    EventParser(EventParser const&);
    EventParser();
};

} // namespace webrtc
