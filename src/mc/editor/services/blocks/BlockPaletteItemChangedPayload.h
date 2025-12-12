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
    BlockPaletteItemChangedPayload(BlockPaletteItemChangedPayload const&);
    BlockPaletteItemChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPaletteItemChangedPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C BlockPaletteItemChangedPayload(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCNAPI ::Editor::Network::BlockPaletteItemChangedPayload&
    operator=(::Editor::Network::BlockPaletteItemChangedPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );
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
