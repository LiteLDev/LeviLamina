#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpGenericFrameDescriptor {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddFrameDependencyDiff(ushort);

    MCAPI ::rtc::ArrayView<ushort const> FrameDependenciesDiffs() const;

    MCAPI ushort FrameId() const;

    MCAPI RtpGenericFrameDescriptor();

    MCAPI void SetFrameId(ushort);

    MCAPI void SetResolution(int, int);

    MCAPI void SetSpatialLayersBitmask(uchar);

    MCAPI void SetTemporalLayer(int);

    MCAPI uchar SpatialLayersBitmask() const;

    MCAPI int TemporalLayer() const;

    MCAPI ~RtpGenericFrameDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
