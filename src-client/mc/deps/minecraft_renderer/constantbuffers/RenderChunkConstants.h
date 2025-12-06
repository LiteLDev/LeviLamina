#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

namespace mce {

class RenderChunkConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk33a3d2;
    ::ll::UntypedStorage<8, 8> mUnk4da133;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkConstants& operator=(RenderChunkConstants const&);
    RenderChunkConstants(RenderChunkConstants const&);
    RenderChunkConstants();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init() /*override*/;

    // vIndex: 0
    virtual ~RenderChunkConstants() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
