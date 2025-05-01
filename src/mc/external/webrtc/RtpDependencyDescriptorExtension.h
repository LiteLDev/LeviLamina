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
    MCNAPI static uint64
    ValueSize(::webrtc::FrameDependencyStructure const&, ::std::bitset<32>, ::webrtc::DependencyDescriptor const&);

    MCNAPI static bool
    Write(::rtc::ArrayView<uchar>, ::webrtc::FrameDependencyStructure const&, ::std::bitset<32>, ::webrtc::DependencyDescriptor const&);
    // NOLINTEND
};

} // namespace webrtc
