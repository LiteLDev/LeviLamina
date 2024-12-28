#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorBlockPalette; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class BlockPaletteChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 736> mUnk4efe59;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteChangedPayload& operator=(BlockPaletteChangedPayload const&);
    BlockPaletteChangedPayload(BlockPaletteChangedPayload const&);
    BlockPaletteChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPaletteChangedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockPaletteChangedPayload(::Editor::EditorBlockPalette const& palette);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::EditorBlockPalette const& palette);
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

} // namespace Editor::Network
