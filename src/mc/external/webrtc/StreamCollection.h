#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
// clang-format on

namespace webrtc {

class StreamCollection {
public:
    // prevent constructor by default
    StreamCollection& operator=(StreamCollection const&);
    StreamCollection(StreamCollection const&);
    StreamCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>);

    MCAPI void RemoveStream(::webrtc::MediaStreamInterface*);
    // NOLINTEND
};

} // namespace webrtc
