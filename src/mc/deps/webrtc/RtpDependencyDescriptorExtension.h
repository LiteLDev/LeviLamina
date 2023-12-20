#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DependencyDescriptor; }
namespace webrtc { struct FrameDependencyStructure; }
// clang-format on

namespace webrtc {

class RtpDependencyDescriptorExtension {
public:
    // prevent constructor by default
    RtpDependencyDescriptorExtension& operator=(RtpDependencyDescriptorExtension const&);
    RtpDependencyDescriptorExtension(RtpDependencyDescriptorExtension const&);
    RtpDependencyDescriptorExtension();

public:
    // NOLINTBEGIN
    // symbol:
    // ?ValueSize@RtpDependencyDescriptorExtension@webrtc@@SA_KAEBUFrameDependencyStructure@2@V?$bitset@$0CA@@std@@AEBUDependencyDescriptor@2@@Z
    MCAPI static uint64
    ValueSize(struct webrtc::FrameDependencyStructure const&, std::bitset<32>, struct webrtc::DependencyDescriptor const&);

    // symbol:
    // ?Write@RtpDependencyDescriptorExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBUFrameDependencyStructure@2@V?$bitset@$0CA@@std@@AEBUDependencyDescriptor@2@@Z
    MCAPI static bool
    Write(class rtc::ArrayView<uchar, -4711>, struct webrtc::FrameDependencyStructure const&, std::bitset<32>, struct webrtc::DependencyDescriptor const&);

    // NOLINTEND
};

}; // namespace webrtc
