#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpAudioFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk36545d;
    ::ll::UntypedStorage<4, 4>  mUnk17c8f6;
    ::ll::UntypedStorage<8, 8>  mUnkeffbf1;
    ::ll::UntypedStorage<8, 16> mUnk6b719a;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpAudioFormat& operator=(SdpAudioFormat const&);
    SdpAudioFormat(SdpAudioFormat const&);
    SdpAudioFormat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SdpAudioFormat(::std::string_view name, int clockrate_hz, uint64 num_channels);

    MCNAPI SdpAudioFormat(
        ::std::string_view                         name,
        int                                        clockrate_hz,
        uint64                                     num_channels,
        ::std::map<::std::string, ::std::string>&& param
    );

    MCNAPI ~SdpAudioFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view name, int clockrate_hz, uint64 num_channels);

    MCNAPI void* $ctor(
        ::std::string_view                         name,
        int                                        clockrate_hz,
        uint64                                     num_channels,
        ::std::map<::std::string, ::std::string>&& param
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
