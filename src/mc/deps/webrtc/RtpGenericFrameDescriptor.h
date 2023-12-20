#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class RtpGenericFrameDescriptor {
public:
    // prevent constructor by default
    RtpGenericFrameDescriptor& operator=(RtpGenericFrameDescriptor const&);
    RtpGenericFrameDescriptor(RtpGenericFrameDescriptor const&);

public:
    // NOLINTBEGIN
    // symbol: ?AddFrameDependencyDiff@RtpGenericFrameDescriptor@webrtc@@QEAA_NG@Z
    MCAPI bool AddFrameDependencyDiff(ushort);

    // symbol: ?FrameDependenciesDiffs@RtpGenericFrameDescriptor@webrtc@@QEBA?AV?$ArrayView@$$CBG$0?BCGH@@rtc@@XZ
    MCAPI class rtc::ArrayView<ushort const, -4711> FrameDependenciesDiffs() const;

    // symbol: ?FrameId@RtpGenericFrameDescriptor@webrtc@@QEBAGXZ
    MCAPI ushort FrameId() const;

    // symbol: ??0RtpGenericFrameDescriptor@webrtc@@QEAA@XZ
    MCAPI RtpGenericFrameDescriptor();

    // symbol: ?SetFrameId@RtpGenericFrameDescriptor@webrtc@@QEAAXG@Z
    MCAPI void SetFrameId(ushort);

    // symbol: ?SetResolution@RtpGenericFrameDescriptor@webrtc@@QEAAXHH@Z
    MCAPI void SetResolution(int, int);

    // symbol: ?SetSpatialLayersBitmask@RtpGenericFrameDescriptor@webrtc@@QEAAXE@Z
    MCAPI void SetSpatialLayersBitmask(uchar);

    // symbol: ?SetTemporalLayer@RtpGenericFrameDescriptor@webrtc@@QEAAXH@Z
    MCAPI void SetTemporalLayer(int);

    // symbol: ?SpatialLayersBitmask@RtpGenericFrameDescriptor@webrtc@@QEBAEXZ
    MCAPI uchar SpatialLayersBitmask() const;

    // symbol: ?TemporalLayer@RtpGenericFrameDescriptor@webrtc@@QEBAHXZ
    MCAPI int TemporalLayer() const;

    // symbol: ??1RtpGenericFrameDescriptor@webrtc@@QEAA@XZ
    MCAPI ~RtpGenericFrameDescriptor();

    // NOLINTEND
};

}; // namespace webrtc
