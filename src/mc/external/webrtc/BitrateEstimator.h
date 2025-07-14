#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class BitrateEstimator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8e9e4b;
    ::ll::UntypedStorage<8, 96> mUnk2c6877;
    ::ll::UntypedStorage<8, 96> mUnk43e25d;
    ::ll::UntypedStorage<8, 80> mUnk34b00d;
    ::ll::UntypedStorage<8, 80> mUnk2036c1;
    ::ll::UntypedStorage<8, 80> mUnk3d7b0d;
    ::ll::UntypedStorage<8, 80> mUnk3e5322;
    ::ll::UntypedStorage<8, 80> mUnk6fa8cd;
    ::ll::UntypedStorage<8, 80> mUnk6b2c33;
    ::ll::UntypedStorage<8, 8>  mUnk52e947;
    ::ll::UntypedStorage<8, 8>  mUnk53aace;
    ::ll::UntypedStorage<4, 4>  mUnk275276;
    ::ll::UntypedStorage<4, 4>  mUnk41b53e;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateEstimator& operator=(BitrateEstimator const&);
    BitrateEstimator(BitrateEstimator const&);
    BitrateEstimator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BitrateEstimator();

    // vIndex: 1
    virtual void Update(::webrtc::Timestamp at_time, ::webrtc::DataSize amount, bool in_alr);

    // vIndex: 2
    virtual ::std::optional<::webrtc::DataRate> bitrate() const;

    // vIndex: 3
    virtual void ExpectFastRateChange();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BitrateEstimator(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI ::std::optional<::webrtc::DataRate> PeekRate() const;

    MCNAPI float UpdateWindow(int64 now_ms, int bytes, int rate_window_ms, bool* is_small_sample);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Update(::webrtc::Timestamp at_time, ::webrtc::DataSize amount, bool in_alr);

    MCNAPI ::std::optional<::webrtc::DataRate> $bitrate() const;

    MCNAPI void $ExpectFastRateChange();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
