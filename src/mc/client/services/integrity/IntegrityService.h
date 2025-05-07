#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"

class IntegrityService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk49de75;
    ::ll::UntypedStorage<8, 16> mUnk453e4f;
    ::ll::UntypedStorage<8, 16> mUnk5f31b9;
    ::ll::UntypedStorage<8, 32> mUnkf54369;
    ::ll::UntypedStorage<8, 40> mUnkce8af9;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegrityService& operator=(IntegrityService const&);
    IntegrityService(IntegrityService const&);
    IntegrityService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IntegrityService() /*override*/ = default;
    // NOLINTEND
};
