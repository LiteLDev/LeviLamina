#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioSourceInterface; }
// clang-format on

namespace webrtc {

class AudioTrack {
public:
    // prevent constructor by default
    AudioTrack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioTrack(::std::string_view, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::AudioTrack>
    Create(::std::string_view, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForNotifierInterface();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForRefCountInterface();
    // NOLINTEND
};

} // namespace webrtc
