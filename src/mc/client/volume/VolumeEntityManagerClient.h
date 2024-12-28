#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/volume/VolumeEntityManager.h"

class VolumeEntityManagerClient : public ::VolumeEntityManager {
public:
    // prevent constructor by default
    VolumeEntityManagerClient& operator=(VolumeEntityManagerClient const&);
    VolumeEntityManagerClient(VolumeEntityManagerClient const&);
    VolumeEntityManagerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeEntityManagerClient() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
