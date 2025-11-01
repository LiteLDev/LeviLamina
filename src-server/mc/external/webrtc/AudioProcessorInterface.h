#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class AudioProcessorInterface : public ::webrtc::RefCountInterface {
public:
    // AudioProcessorInterface inner types declare
    // clang-format off
    struct AudioProcessorStatistics;
    // clang-format on
    
    // AudioProcessorInterface inner types define
    struct AudioProcessorStatistics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk6c30eb;
        ::ll::UntypedStorage<8, 112> mUnk5c571e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        AudioProcessorStatistics& operator=(AudioProcessorStatistics const&);
        AudioProcessorStatistics(AudioProcessorStatistics const&);
        AudioProcessorStatistics();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AudioProcessorStatistics();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::AudioProcessorInterface::AudioProcessorStatistics GetStats(bool) = 0;

    // vIndex: 2
    virtual ~AudioProcessorInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
