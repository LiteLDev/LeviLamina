#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc::AsyncAudioProcessing {

class Factory : public ::webrtc::RefCountInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaba4b2;
    ::ll::UntypedStorage<8, 8> mUnk8a8aa3;
    ::ll::UntypedStorage<8, 8> mUnk11974f;
    // NOLINTEND

public:
    // prevent constructor by default
    Factory& operator=(Factory const&);
    Factory(Factory const&);
    Factory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Factory() /*override*/ = default;
    // NOLINTEND
};

} // namespace webrtc::AsyncAudioProcessing
