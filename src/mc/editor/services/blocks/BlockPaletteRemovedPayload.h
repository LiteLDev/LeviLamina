#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class BlockPaletteRemovedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteRemovedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk17340a;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteRemovedPayload& operator=(BlockPaletteRemovedPayload const&);
    BlockPaletteRemovedPayload(BlockPaletteRemovedPayload const&);
    BlockPaletteRemovedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPaletteRemovedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPaletteRemovedPayload(::HashedString const& paletteId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& paletteId);
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
