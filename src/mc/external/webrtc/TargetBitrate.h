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
        // member functions
        // NOLINTBEGIN
        MCAPI BitrateItem(uchar, uchar, uint);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(uchar, uchar, uint);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddTargetBitrate(uchar, uchar, uint);

    MCAPI uint64 BlockLength() const;

    MCAPI void Create(uchar*) const;

    MCAPI ::std::vector<::webrtc::rtcp::TargetBitrate::BitrateItem> const& GetTargetBitrates() const;

    MCAPI void Parse(uchar const*, ushort);

    MCAPI TargetBitrate();

    MCAPI TargetBitrate(::webrtc::rtcp::TargetBitrate const&);

    MCAPI ::webrtc::rtcp::TargetBitrate& operator=(::webrtc::rtcp::TargetBitrate const&);

    MCAPI ~TargetBitrate();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& kBitrateItemSizeBytes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::rtcp::TargetBitrate const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::rtcp
