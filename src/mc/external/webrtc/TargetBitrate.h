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
        // prevent constructor by default
        BitrateItem();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI BitrateItem(uchar, uchar, uint);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(uchar, uchar, uint);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddTargetBitrate(uchar, uchar, uint);

    MCNAPI uint64 BlockLength() const;

    MCNAPI void Create(uchar*) const;

    MCNAPI ::std::vector<::webrtc::rtcp::TargetBitrate::BitrateItem> const& GetTargetBitrates() const;

    MCNAPI void Parse(uchar const*, ushort);

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
