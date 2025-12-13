#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/NotifierInterface.h"
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class MediaSourceInterface : public ::webrtc::RefCountInterface, public ::webrtc::NotifierInterface {
public:
    // MediaSourceInterface inner types define
    enum class SourceState : int {
        KInitializing = 0,
        KLive         = 1,
        KEnded        = 2,
        KMuted        = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::MediaSourceInterface::SourceState state() const = 0;

    virtual bool remote() const = 0;

    virtual ~MediaSourceInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
