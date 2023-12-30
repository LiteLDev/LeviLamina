#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FecMaskType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

namespace webrtc::internal {

class PacketMaskTable {
public:
    // prevent constructor by default
    PacketMaskTable& operator=(PacketMaskTable const&);
    PacketMaskTable(PacketMaskTable const&);
    PacketMaskTable();

public:
    // NOLINTBEGIN
    // symbol: ?LookUp@PacketMaskTable@internal@webrtc@@QEAA?AV?$ArrayView@$$CBE$0?BCGH@@rtc@@HH@Z
    MCAPI class rtc::ArrayView<uchar const, -4711> LookUp(int, int);

    // symbol: ??0PacketMaskTable@internal@webrtc@@QEAA@W4FecMaskType@2@H@Z
    MCAPI PacketMaskTable(::webrtc::FecMaskType, int);

    // symbol: ??1PacketMaskTable@internal@webrtc@@QEAA@XZ
    MCAPI ~PacketMaskTable();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?PickTable@PacketMaskTable@internal@webrtc@@CAPEBEW4FecMaskType@3@H@Z
    MCAPI static uchar const* PickTable(::webrtc::FecMaskType, int);

    // NOLINTEND
};

}; // namespace webrtc::internal
