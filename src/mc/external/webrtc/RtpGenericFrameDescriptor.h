#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpGenericFrameDescriptor {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddFrameDependencyDiff(ushort);

    MCNAPI ::rtc::ArrayView<ushort const> FrameDependenciesDiffs() const;

    MCNAPI ushort FrameId() const;

    MCNAPI RtpGenericFrameDescriptor();

    MCNAPI void SetFrameId(ushort);

    MCNAPI void SetResolution(int, int);

    MCNAPI void SetSpatialLayersBitmask(uchar);

    MCNAPI void SetTemporalLayer(int);

    MCNAPI uchar SpatialLayersBitmask() const;

    MCNAPI int TemporalLayer() const;

    MCNAPI ~RtpGenericFrameDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
