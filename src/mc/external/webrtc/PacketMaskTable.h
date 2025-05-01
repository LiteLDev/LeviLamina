#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecMaskType.h"

namespace webrtc::internal {

class PacketMaskTable {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::ArrayView<uchar const> LookUp(int, int);

    MCNAPI PacketMaskTable(::webrtc::FecMaskType, int);

    MCNAPI ~PacketMaskTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar const* PickTable(::webrtc::FecMaskType, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FecMaskType, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::internal
