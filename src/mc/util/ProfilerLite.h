#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProfilerLite {
public:
    // ProfilerLite inner types declare
    // clang-format off
    struct RealtimeFrameData;
    struct ScopedData;
    // clang-format on

    // ProfilerLite inner types define
    enum class ScopeTag : int {
        None            = 0,
        Root            = 1,
        PreFrame        = 2,
        BeginFrame      = 3,
        ClientInstance  = 4,
        EndFrame        = 5,
        Present         = 6,
        Input           = 7,
        ClientSimTick   = 8,
        ClientRealTick  = 9,
        ServerInstance  = 10,
        ServerSimTick   = 11,
        ServerRealTick  = 12,
        Render          = 13,
        RenderLevel     = 14,
        TickAndRenderUI = 15,
        UpdateFrame     = 16,
        UpdateGame      = 17,
        Last            = 17,
        SimTickFirst    = 8,
        SimTickLast     = 12,
        RenderTickFirst = 13,
        RenderTickLast  = 15,
    };

    struct ScopedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk639906;
        ::ll::UntypedStorage<4, 4>  mUnk757818;
        ::ll::UntypedStorage<4, 4>  mUnkffc636;
        ::ll::UntypedStorage<8, 8>  mUnkf95090;
        ::ll::UntypedStorage<4, 4>  mUnkcc0c31;
        ::ll::UntypedStorage<8, 24> mUnk966309;
        ::ll::UntypedStorage<4, 4>  mUnk5a0990;
        ::ll::UntypedStorage<8, 8>  mUnk7b5357;
        ::ll::UntypedStorage<8, 8>  mUnkb9f549;
        ::ll::UntypedStorage<8, 8>  mUnk5163f4;
        ::ll::UntypedStorage<8, 8>  mUnke9f4fd;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedData& operator=(ScopedData const&);
        ScopedData(ScopedData const&);
        ScopedData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ScopedData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RealtimeFrameData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk423d24;
        ::ll::UntypedStorage<4, 4> mUnkbe74e1;
        ::ll::UntypedStorage<4, 4> mUnkf5e907;
        ::ll::UntypedStorage<4, 4> mUnk6aeac2;
        ::ll::UntypedStorage<4, 4> mUnkc71324;
        ::ll::UntypedStorage<8, 8> mUnkf09595;
        ::ll::UntypedStorage<1, 1> mUnk5f6eae;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealtimeFrameData& operator=(RealtimeFrameData const&);
        RealtimeFrameData(RealtimeFrameData const&);
        RealtimeFrameData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnkdc322a;
    ::ll::UntypedStorage<8, 96>  mUnke02755;
    ::ll::UntypedStorage<8, 32>  mUnke8d928;
    ::ll::UntypedStorage<8, 296> mUnkb301d1;
    ::ll::UntypedStorage<8, 32>  mUnk73f06f;
    ::ll::UntypedStorage<8, 296> mUnk9779b9;
    ::ll::UntypedStorage<8, 32>  mUnk45e7e5;
    ::ll::UntypedStorage<8, 296> mUnk4e6fae;
    ::ll::UntypedStorage<8, 32>  mUnk91563b;
    ::ll::UntypedStorage<8, 296> mUnk7b9cc6;
    ::ll::UntypedStorage<8, 32>  mUnk7a9c00;
    ::ll::UntypedStorage<8, 296> mUnk73e205;
    ::ll::UntypedStorage<8, 32>  mUnk948d84;
    ::ll::UntypedStorage<8, 296> mUnkeb990e;
    ::ll::UntypedStorage<4, 4>   mUnk679280;
    ::ll::UntypedStorage<8, 8>   mUnkf7c578;
    ::ll::UntypedStorage<8, 8>   mUnka1ba5d;
    ::ll::UntypedStorage<8, 8>   mUnk410714;
    ::ll::UntypedStorage<8, 8>   mUnk94b9e5;
    ::ll::UntypedStorage<8, 8>   mUnk8d502c;
    ::ll::UntypedStorage<1, 1>   mUnk52676e;
    ::ll::UntypedStorage<1, 1>   mUnk1751f9;
    ::ll::UntypedStorage<1, 1>   mUnk4d26c4;
    ::ll::UntypedStorage<1, 1>   mUnka296e3;
    ::ll::UntypedStorage<1, 1>   mUnka27805;
    ::ll::UntypedStorage<1, 1>   mUnkbe1dc2;
    ::ll::UntypedStorage<8, 8>   mUnk9e2e66;
    ::ll::UntypedStorage<8, 16>  mUnk5b98bf;
    ::ll::UntypedStorage<8, 32>  mUnk6251e2;
    ::ll::UntypedStorage<8, 8>   mUnkfa2d7b;
    ::ll::UntypedStorage<8, 8>   mUnkd9eb8e;
    ::ll::UntypedStorage<4, 4>   mUnkec0797;
    ::ll::UntypedStorage<4, 44>  mUnkcdff15;
    ::ll::UntypedStorage<8, 32>  mUnk3acfcb;
    ::ll::UntypedStorage<4, 16>  mUnkbee98d;
    ::ll::UntypedStorage<8, 8>   mUnk2a36d3;
    ::ll::UntypedStorage<8, 8>   mUnk576846;
    ::ll::UntypedStorage<8, 40>  mUnk46b161;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerLite& operator=(ProfilerLite const&);
    ProfilerLite(ProfilerLite const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfilerLite();

    MCAPI void calculateAndSetServerNetworkTime(::std::chrono::steady_clock::time_point tp);

    MCAPI void calculateAndSetServerTickTimes(::std::chrono::steady_clock::time_point tp);

    MCAPI ::std::chrono::nanoseconds getServerTickTime() const;

    MCAPI ~ProfilerLite();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ProfilerLite& gProfilerLiteInstance();

    MCAPI static ::std::thread::id& sEmptyThreadID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
