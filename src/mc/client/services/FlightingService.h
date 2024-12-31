#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"

class FlightingService : public ::ServiceClient, public ::std::enable_shared_from_this<::FlightingService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdca36e;
    ::ll::UntypedStorage<8, 8>  mUnkcaf89c;
    ::ll::UntypedStorage<8, 32> mUnk470d56;
    ::ll::UntypedStorage<8, 32> mUnk63fa6d;
    ::ll::UntypedStorage<8, 32> mUnkf3fb41;
    ::ll::UntypedStorage<8, 24> mUnk777e87;
    ::ll::UntypedStorage<8, 16> mUnk5d1d16;
    ::ll::UntypedStorage<8, 16> mUnk9af3c4;
    ::ll::UntypedStorage<8, 8>  mUnkc0023e;
    ::ll::UntypedStorage<1, 1>  mUnkf27daa;
    ::ll::UntypedStorage<8, 16> mUnkc9df62;
    ::ll::UntypedStorage<8, 16> mUnk7bccef;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingService& operator=(FlightingService const&);
    FlightingService(FlightingService const&);
    FlightingService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlightingService() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
