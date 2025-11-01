#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct HdrMasteringMetadata {
public:
    // HdrMasteringMetadata inner types declare
    // clang-format off
    struct Chromaticity;
    // clang-format on
    
    // HdrMasteringMetadata inner types define
    struct Chromaticity {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3f15ca;
        ::ll::UntypedStorage<4, 4> mUnk920d7c;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Chromaticity& operator=(Chromaticity const&);
        Chromaticity(Chromaticity const&);
        Chromaticity();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8c9919;
    ::ll::UntypedStorage<4, 8> mUnkd7a5e7;
    ::ll::UntypedStorage<4, 8> mUnk6c4579;
    ::ll::UntypedStorage<4, 8> mUnk6abdbe;
    ::ll::UntypedStorage<4, 4> mUnk990165;
    ::ll::UntypedStorage<4, 4> mUnk884855;
    // NOLINTEND

public:
    // prevent constructor by default
    HdrMasteringMetadata& operator=(HdrMasteringMetadata const&);
    HdrMasteringMetadata(HdrMasteringMetadata const&);
    HdrMasteringMetadata();

};

}
