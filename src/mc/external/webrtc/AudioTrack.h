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
    // member functions
    // NOLINTBEGIN
    MCAPI AudioTrack(::std::string_view, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::AudioTrack>
    Create(::std::string_view, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, ::webrtc::scoped_refptr<::webrtc::AudioSourceInterface> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForNotifierInterface();

    MCAPI static void** $vftable();

    MCAPI static void** $vftableForRefCountInterface();
    // NOLINTEND
};

} // namespace webrtc
