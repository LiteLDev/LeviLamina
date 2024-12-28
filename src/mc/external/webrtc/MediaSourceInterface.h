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
    // prevent constructor by default
    MediaSourceInterface& operator=(MediaSourceInterface const&);
    MediaSourceInterface(MediaSourceInterface const&);
    MediaSourceInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::MediaSourceInterface::SourceState state() const = 0;

    // vIndex: 4
    virtual bool remote() const = 0;

    // vIndex: 2
    virtual ~MediaSourceInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
