#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushSetBrushBlockMaskPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushSetBrushBlockMaskPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8d0e0b;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushSetBrushBlockMaskPayload& operator=(NativeBrushSetBrushBlockMaskPayload const&);
    NativeBrushSetBrushBlockMaskPayload(NativeBrushSetBrushBlockMaskPayload const&);
    NativeBrushSetBrushBlockMaskPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeBrushSetBrushBlockMaskPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
