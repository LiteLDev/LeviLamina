#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/timelines/Timeline.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
// clang-format on

class ServerTimeline : public ::Timeline {
public:
    // ServerTimeline inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // ServerTimeline inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 248> mUnkcf6bc0;
        ::ll::UntypedStorage<8, 24>  mUnkcebff7;
        ::ll::UntypedStorage<8, 24>  mUnkc0aa57;
        ::ll::UntypedStorage<8, 24>  mUnk8b0f20;
        ::ll::UntypedStorage<4, 8>   mUnk7a031d;
        ::ll::UntypedStorage<8, 32>  mUnkecdecd;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9b42b0;
    ::ll::UntypedStorage<4, 8>  mUnkc08a2b;
    ::ll::UntypedStorage<1, 1>  mUnk4d220e;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerTimeline& operator=(ServerTimeline const&);
    ServerTimeline(ServerTimeline const&);
    ServerTimeline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::PacketSender&) /*override*/;

    virtual void _initialize() /*override*/;

    virtual void _phaseChangedWithoutTransition(::std::string const&, ::std::string const&) /*override*/;

    virtual void _phaseTransitionStarted(::std::string const&, ::std::string const&, int, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
