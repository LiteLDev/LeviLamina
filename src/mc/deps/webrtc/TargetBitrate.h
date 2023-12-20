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
        BitrateItem& operator=(BitrateItem const&);
        BitrateItem(BitrateItem const&);
        BitrateItem();

    public:
        // NOLINTBEGIN
        // symbol: ??0BitrateItem@TargetBitrate@rtcp@webrtc@@QEAA@EEI@Z
        MCAPI BitrateItem(uchar, uchar, uint);

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    // symbol: ?AddTargetBitrate@TargetBitrate@rtcp@webrtc@@QEAAXEEI@Z
    MCAPI void AddTargetBitrate(uchar, uchar, uint);

    // symbol: ?BlockLength@TargetBitrate@rtcp@webrtc@@QEBA_KXZ
    MCAPI uint64 BlockLength() const;

    // symbol: ?Create@TargetBitrate@rtcp@webrtc@@QEBAXPEAE@Z
    MCAPI void Create(uchar*) const;

    // symbol:
    // ?GetTargetBitrates@TargetBitrate@rtcp@webrtc@@QEBAAEBV?$vector@UBitrateItem@TargetBitrate@rtcp@webrtc@@V?$allocator@UBitrateItem@TargetBitrate@rtcp@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::rtcp::TargetBitrate::BitrateItem> const& GetTargetBitrates() const;

    // symbol: ?Parse@TargetBitrate@rtcp@webrtc@@QEAAXPEBEG@Z
    MCAPI void Parse(uchar const*, ushort);

    // symbol: ??0TargetBitrate@rtcp@webrtc@@QEAA@XZ
    MCAPI TargetBitrate();

    // symbol: ??0TargetBitrate@rtcp@webrtc@@QEAA@AEBV012@@Z
    MCAPI TargetBitrate(class webrtc::rtcp::TargetBitrate const&);

    // symbol: ??4TargetBitrate@rtcp@webrtc@@QEAAAEAV012@AEBV012@@Z
    MCAPI class webrtc::rtcp::TargetBitrate& operator=(class webrtc::rtcp::TargetBitrate const&);

    // symbol: ??1TargetBitrate@rtcp@webrtc@@QEAA@XZ
    MCAPI ~TargetBitrate();

    // symbol: ?kBitrateItemSizeBytes@TargetBitrate@rtcp@webrtc@@2_KB
    MCAPI static uint64 const kBitrateItemSizeBytes;

    // NOLINTEND
};

}; // namespace webrtc::rtcp
