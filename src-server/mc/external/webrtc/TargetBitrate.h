#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class TargetBitrate {
public:
    // TargetBitrate inner types declare
    // clang-format off
    struct BitrateItem;
    // clang-format on

    // TargetBitrate inner types define
    struct BitrateItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb35c44;
        ::ll::UntypedStorage<1, 1> mUnk522ded;
        ::ll::UntypedStorage<4, 4> mUnkbfcfa3;
        // NOLINTEND

    public:
        // prevent constructor by default
        BitrateItem& operator=(BitrateItem const&);
        BitrateItem(BitrateItem const&);
        BitrateItem();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI BitrateItem(uchar spatial_layer, uchar temporal_layer, uint target_bitrate_kbps);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(uchar spatial_layer, uchar temporal_layer, uint target_bitrate_kbps);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk423375;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddTargetBitrate(uchar spatial_layer, uchar temporal_layer, uint target_bitrate_kbps);

    MCNAPI uint64 BlockLength() const;

    MCNAPI void Create(uchar* buffer) const;

    MCNAPI ::std::vector<::webrtc::rtcp::TargetBitrate::BitrateItem> const& GetTargetBitrates() const;

    MCNAPI void Parse(uchar const* block, ushort block_length);

    MCNAPI TargetBitrate();

    MCNAPI TargetBitrate(::webrtc::rtcp::TargetBitrate const&);

    MCNAPI ::webrtc::rtcp::TargetBitrate& operator=(::webrtc::rtcp::TargetBitrate const&);

    MCNAPI ~TargetBitrate();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint64 const& kBitrateItemSizeBytes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::rtcp::TargetBitrate const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::rtcp
