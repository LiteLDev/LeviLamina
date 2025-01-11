#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecMaskType.h"

namespace webrtc::internal {

class PacketMaskTable {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::ArrayView<uchar const> LookUp(int, int);

    MCAPI PacketMaskTable(::webrtc::FecMaskType, int);

    MCAPI ~PacketMaskTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uchar const* PickTable(::webrtc::FecMaskType, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FecMaskType, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::internal
