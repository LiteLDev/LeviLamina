#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DependencyDescriptor; }
namespace webrtc { struct FrameDependencyStructure; }
// clang-format on

namespace webrtc {

class RtpDependencyDescriptorExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 ValueSize(::webrtc::FrameDependencyStructure const& structure, ::std::bitset<32> active_chains, ::webrtc::DependencyDescriptor const& descriptor);

    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::FrameDependencyStructure const& structure, ::std::bitset<32> active_chains, ::webrtc::DependencyDescriptor const& descriptor);
    // NOLINTEND

};

}
