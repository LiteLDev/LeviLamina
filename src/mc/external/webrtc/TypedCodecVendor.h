#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class MediaEngineInterface; }
// clang-format on

namespace webrtc {

class TypedCodecVendor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdfcad3;
    // NOLINTEND

public:
    // prevent constructor by default
    TypedCodecVendor& operator=(TypedCodecVendor const&);
    TypedCodecVendor(TypedCodecVendor const&);
    TypedCodecVendor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TypedCodecVendor(
        ::webrtc::MediaEngineInterface*  media_engine,
        ::webrtc::MediaType              type,
        bool                             is_sender,
        bool                             rtx_enabled,
        ::webrtc::FieldTrialsView const& trials
    );

    MCNAPI ~TypedCodecVendor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::MediaEngineInterface*  media_engine,
        ::webrtc::MediaType              type,
        bool                             is_sender,
        bool                             rtx_enabled,
        ::webrtc::FieldTrialsView const& trials
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
