#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct SurfaceMaterialAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnkebf05b;
    ::ll::UntypedStorage<8, 184> mUnk510ed8;
    ::ll::UntypedStorage<8, 184> mUnk728a5e;
    ::ll::UntypedStorage<8, 184> mUnkfd46e3;
    ::ll::UntypedStorage<8, 184> mUnk4b6011;
    ::ll::UntypedStorage<4, 4>   mUnkcae3c9;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceMaterialAttributes& operator=(SurfaceMaterialAttributes const&);
    SurfaceMaterialAttributes(SurfaceMaterialAttributes const&);
    SurfaceMaterialAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAttributes() /*override*/;
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
