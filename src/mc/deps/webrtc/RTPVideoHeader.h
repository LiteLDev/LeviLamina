#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrameMetadata; }
// clang-format on

namespace webrtc {

struct RTPVideoHeader {
public:
    // RTPVideoHeader inner types declare
    // clang-format off
    struct GenericDescriptorInfo;
    // clang-format on

    // RTPVideoHeader inner types define
    struct GenericDescriptorInfo {
    public:
        // prevent constructor by default
        GenericDescriptorInfo& operator=(GenericDescriptorInfo const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0GenericDescriptorInfo@RTPVideoHeader@webrtc@@QEAA@XZ
        MCAPI GenericDescriptorInfo();

        // symbol: ??0GenericDescriptorInfo@RTPVideoHeader@webrtc@@QEAA@AEBU012@@Z
        MCAPI GenericDescriptorInfo(struct webrtc::RTPVideoHeader::GenericDescriptorInfo const&);

        // symbol: ??1GenericDescriptorInfo@RTPVideoHeader@webrtc@@QEAA@XZ
        MCAPI ~GenericDescriptorInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTPVideoHeader& operator=(RTPVideoHeader const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetAsMetadata@RTPVideoHeader@webrtc@@QEBA?AVVideoFrameMetadata@2@XZ
    MCAPI class webrtc::VideoFrameMetadata GetAsMetadata() const;

    // symbol: ??0RTPVideoHeader@webrtc@@QEAA@XZ
    MCAPI RTPVideoHeader();

    // symbol: ??0RTPVideoHeader@webrtc@@QEAA@AEBU01@@Z
    MCAPI RTPVideoHeader(struct webrtc::RTPVideoHeader const&);

    // symbol: ?SetFromMetadata@RTPVideoHeader@webrtc@@QEAAXAEBVVideoFrameMetadata@2@@Z
    MCAPI void SetFromMetadata(class webrtc::VideoFrameMetadata const&);

    // symbol: ??1RTPVideoHeader@webrtc@@QEAA@XZ
    MCAPI ~RTPVideoHeader();

    // NOLINTEND
};

}; // namespace webrtc
