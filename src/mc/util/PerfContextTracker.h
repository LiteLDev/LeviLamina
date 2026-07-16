#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class PerfContextTrackerReport;
class PerfContextTrackerReportLite;
// clang-format on

class PerfContextTracker {
public:
    // PerfContextTracker inner types declare
    // clang-format off
    class Duration;
    class EventScope;
    class Timer;
    // clang-format on

    // PerfContextTracker inner types define
    class Duration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk954db5;
        ::ll::UntypedStorage<8, 8> mUnk3c6902;
        // NOLINTEND

    public:
        // prevent constructor by default
        Duration& operator=(Duration const&);
        Duration(Duration const&);
        Duration();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Duration() = default;

        virtual void reset();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class EventScope {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkad1144;
        ::ll::UntypedStorage<8, 40> mUnk7fb3d1;
        // NOLINTEND

    public:
        // prevent constructor by default
        EventScope& operator=(EventScope const&);
        EventScope(EventScope const&);
        EventScope();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~EventScope();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class Timer : public ::PerfContextTracker::Duration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk93228d;
        ::ll::UntypedStorage<8, 8> mUnk5ef954;
        // NOLINTEND

    public:
        // prevent constructor by default
        Timer& operator=(Timer const&);
        Timer(Timer const&);
        Timer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void reset() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $reset();


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnk7bb973;
    ::ll::UntypedStorage<1, 1>   mUnkee6e42;
    ::ll::UntypedStorage<8, 32>  mUnk2b7e27;
    ::ll::UntypedStorage<8, 40>  mUnkeefdc7;
    ::ll::UntypedStorage<8, 288> mUnk7e0308;
    ::ll::UntypedStorage<8, 264> mUnk8e863b;
    ::ll::UntypedStorage<4, 4>   mUnkf2b035;
    ::ll::UntypedStorage<4, 4>   mUnke5955e;
    ::ll::UntypedStorage<4, 4>   mUnk4f5d25;
    ::ll::UntypedStorage<4, 4>   mUnkaed369;
    ::ll::UntypedStorage<4, 4>   mUnkccc016;
    ::ll::UntypedStorage<4, 4>   mUnk66f8d6;
    ::ll::UntypedStorage<4, 4>   mUnk800a03;
    ::ll::UntypedStorage<8, 64>  mUnk39cda4;
    // NOLINTEND

public:
    // prevent constructor by default
    PerfContextTracker& operator=(PerfContextTracker const&);
    PerfContextTracker(PerfContextTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerfContextTracker();

#ifdef LL_PLAT_C
    MCNAPI void clear();

    MCNAPI void onAppResume();

    MCNAPI void onAppSuspend();

    MCNAPI ::PerfContextTrackerReportLite peekReportLite() const;

    MCNAPI void tick(
        ::std::string const& currentContext,
        uint                 clientCount,
        uint                 renderDistance,
        uint                 simDistance,
        ::brstd::function_ref<void(::PerfContextTrackerReport const&) const, void(::PerfContextTrackerReport const&)>
                                                    reporter,
        ::brstd::function_ref<void() const, void()> gatherData
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
