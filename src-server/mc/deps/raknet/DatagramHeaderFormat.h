#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

struct DatagramHeaderFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkba9ad5;
    ::ll::UntypedStorage<4, 4> mUnkdb7655;
    ::ll::UntypedStorage<1, 1> mUnkf4d225;
    ::ll::UntypedStorage<1, 1> mUnk59378d;
    ::ll::UntypedStorage<1, 1> mUnk1d0296;
    ::ll::UntypedStorage<1, 1> mUnk2ec43d;
    ::ll::UntypedStorage<1, 1> mUnk741501;
    ::ll::UntypedStorage<1, 1> mUnkcacac8;
    ::ll::UntypedStorage<1, 1> mUnk5c98de;
    // NOLINTEND

public:
    // prevent constructor by default
    DatagramHeaderFormat& operator=(DatagramHeaderFormat const&);
    DatagramHeaderFormat(DatagramHeaderFormat const&);
    DatagramHeaderFormat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Deserialize(::RakNet::BitStream* b);
    // NOLINTEND

};
