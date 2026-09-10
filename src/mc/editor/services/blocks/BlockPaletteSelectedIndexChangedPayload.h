#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class BlockPaletteSelectedIndexChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteSelectedIndexChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk30033c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteSelectedIndexChangedPayload& operator=(BlockPaletteSelectedIndexChangedPayload const&);
    BlockPaletteSelectedIndexChangedPayload(BlockPaletteSelectedIndexChangedPayload const&);
    BlockPaletteSelectedIndexChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPaletteSelectedIndexChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
