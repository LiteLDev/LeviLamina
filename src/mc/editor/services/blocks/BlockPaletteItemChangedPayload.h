#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
// clang-format on

namespace Editor::Network {

class BlockPaletteItemChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BlockPaletteItemChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd19120;
    ::ll::UntypedStorage<4, 4>  mUnk809142;
    ::ll::UntypedStorage<8, 72> mUnk16be73;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPaletteItemChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPaletteItemChangedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPaletteItemChangedPayload(::Editor::Network::BlockPaletteItemChangedPayload const&);

    MCAPI BlockPaletteItemChangedPayload(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCAPI ::Editor::Network::BlockPaletteItemChangedPayload&
    operator=(::Editor::Network::BlockPaletteItemChangedPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Network::BlockPaletteItemChangedPayload const&);

    MCAPI void* $ctor(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );
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
