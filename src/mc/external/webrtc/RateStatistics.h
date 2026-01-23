#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RateStatistics {
public:
    // RateStatistics inner types declare
    // clang-format off
    struct Bucket;
    // clang-format on

    // RateStatistics inner types define
    struct Bucket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk81b4ca;
        ::ll::UntypedStorage<4, 4> mUnkf2406f;
        ::ll::UntypedStorage<8, 8> mUnkd31e36;
        // NOLINTEND

    public:
        // prevent constructor by default
        Bucket& operator=(Bucket const&);
        Bucket(Bucket const&);
        Bucket();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka616c6;
    ::ll::UntypedStorage<8, 8>  mUnkcb55b6;
    ::ll::UntypedStorage<8, 8>  mUnk592d19;
    ::ll::UntypedStorage<1, 1>  mUnk127b06;
    ::ll::UntypedStorage<4, 4>  mUnkb1b1b8;
    ::ll::UntypedStorage<4, 4>  mUnk758253;
    ::ll::UntypedStorage<8, 8>  mUnk4cc246;
    ::ll::UntypedStorage<8, 8>  mUnk426aa8;
    // NOLINTEND

public:
    // prevent constructor by default
    RateStatistics& operator=(RateStatistics const&);
    RateStatistics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EraseOld(int64 now_ms);

    MCNAPI ::std::optional<int64> Rate(int64 now_ms) const;

    MCNAPI RateStatistics(::webrtc::RateStatistics const& other);

    MCNAPI RateStatistics(int64 window_size_ms, float scale);

    MCNAPI void Update(int64 count, int64 now_ms);

    MCNAPI ~RateStatistics();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RateStatistics const& other);

    MCNAPI void* $ctor(int64 window_size_ms, float scale);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
