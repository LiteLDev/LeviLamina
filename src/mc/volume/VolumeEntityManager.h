#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class VolumeEntityManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4d91e3;
    ::ll::UntypedStorage<8, 8>  mUnk3ed3b4;
    ::ll::UntypedStorage<8, 64> mUnk438525;
    ::ll::UntypedStorage<8, 64> mUnk2b84c0;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeEntityManager& operator=(VolumeEntityManager const&);
    VolumeEntityManager(VolumeEntityManager const&);
    VolumeEntityManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeEntityManager() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& isTriggerVolumesEnabled();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
