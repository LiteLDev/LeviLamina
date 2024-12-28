#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct MesaSurfaceAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnk7ec8e3;
    ::ll::UntypedStorage<8, 184> mUnk1c353f;
    ::ll::UntypedStorage<1, 1>   mUnk635342;
    ::ll::UntypedStorage<1, 1>   mUnk594a45;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceAttributes& operator=(MesaSurfaceAttributes const&);
    MesaSurfaceAttributes(MesaSurfaceAttributes const&);
    MesaSurfaceAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MesaSurfaceAttributes() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
