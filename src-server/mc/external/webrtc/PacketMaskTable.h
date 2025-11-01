#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecMaskType.h"

namespace webrtc::internal {

class PacketMaskTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk581c3c;
    ::ll::UntypedStorage<1, 288> mUnkfa290d;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketMaskTable& operator=(PacketMaskTable const&);
    PacketMaskTable(PacketMaskTable const&);
    PacketMaskTable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::ArrayView<uchar const> LookUp(int num_media_packets, int num_fec_packets);

    MCNAPI PacketMaskTable(::webrtc::FecMaskType fec_mask_type, int num_media_packets);

    MCNAPI ~PacketMaskTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar const* PickTable(::webrtc::FecMaskType fec_mask_type, int num_media_packets);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FecMaskType fec_mask_type, int num_media_packets);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
