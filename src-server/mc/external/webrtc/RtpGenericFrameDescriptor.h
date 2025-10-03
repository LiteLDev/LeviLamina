#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpGenericFrameDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7e76b5;
    ::ll::UntypedStorage<1, 1>  mUnk7fa768;
    ::ll::UntypedStorage<2, 2>  mUnk79078e;
    ::ll::UntypedStorage<1, 1>  mUnke2b268;
    ::ll::UntypedStorage<1, 1>  mUnkbc3ac0;
    ::ll::UntypedStorage<8, 8>  mUnk98b5a2;
    ::ll::UntypedStorage<2, 16> mUnkab9d29;
    ::ll::UntypedStorage<4, 4>  mUnk1ae93d;
    ::ll::UntypedStorage<4, 4>  mUnk5f909e;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpGenericFrameDescriptor& operator=(RtpGenericFrameDescriptor const&);
    RtpGenericFrameDescriptor(RtpGenericFrameDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddFrameDependencyDiff(ushort fdiff);

    MCNAPI ::rtc::ArrayView<ushort const> FrameDependenciesDiffs() const;

    MCNAPI ushort FrameId() const;

    MCNAPI RtpGenericFrameDescriptor();

    MCNAPI void SetFrameId(ushort frame_id);

    MCNAPI void SetResolution(int width, int height);

    MCNAPI void SetSpatialLayersBitmask(uchar spatial_layers);

    MCNAPI void SetTemporalLayer(int temporal_layer);

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
