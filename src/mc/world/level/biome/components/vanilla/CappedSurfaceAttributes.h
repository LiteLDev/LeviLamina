#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct CappedSurfaceAttributes : public ::BiomeComponentBase {
public:
    // CappedSurfaceAttributes inner types declare
    // clang-format off
    struct MaterialLayer;
    // clang-format on

    // CappedSurfaceAttributes inner types define
    struct MaterialLayer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4166de;
        ::ll::UntypedStorage<8, 8> mUnkf958c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        MaterialLayer& operator=(MaterialLayer const&);
        MaterialLayer(MaterialLayer const&);
        MaterialLayer();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkabee9f;
    ::ll::UntypedStorage<8, 24> mUnke0fd64;
    ::ll::UntypedStorage<8, 8>  mUnka6b4c2;
    ::ll::UntypedStorage<8, 8>  mUnk7ba17c;
    ::ll::UntypedStorage<8, 8>  mUnkaa31c7;
    // NOLINTEND

public:
    // prevent constructor by default
    CappedSurfaceAttributes& operator=(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CappedSurfaceAttributes() /*override*/;
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
