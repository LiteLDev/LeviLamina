#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class BlockPaletteActivePaletteChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteActivePaletteChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk5a23a1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteActivePaletteChangedPayload& operator=(BlockPaletteActivePaletteChangedPayload const&);
    BlockPaletteActivePaletteChangedPayload(BlockPaletteActivePaletteChangedPayload const&);
    BlockPaletteActivePaletteChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~BlockPaletteActivePaletteChangedPayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~BlockPaletteActivePaletteChangedPayload() /*override*/;
#endif

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
