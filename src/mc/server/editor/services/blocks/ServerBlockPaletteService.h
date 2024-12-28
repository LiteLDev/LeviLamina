#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/blocks/EditorBlockPaletteService.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
namespace Editor { struct EditorBlockPalette; }
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::Network { class BlockPaletteActivePaletteChangedPayload; }
namespace Editor::Network { class BlockPaletteChangedPayload; }
namespace Editor::Network { class BlockPaletteItemChangedPayload; }
namespace Editor::Network { class BlockPaletteRemovedPayload; }
namespace Editor::Network { class BlockPaletteSelectedIndexChangedPayload; }
// clang-format on

namespace Editor::Services {

class ServerBlockPaletteService : public ::Editor::Services::EditorBlockPaletteService {
public:
    // prevent constructor by default
    ServerBlockPaletteService& operator=(ServerBlockPaletteService const&);
    ServerBlockPaletteService(ServerBlockPaletteService const&);
    ServerBlockPaletteService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerBlockPaletteService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<void> setSelectedPaletteItemIndex(int index) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result<void> setPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    ) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> pickBlock(::Block const&) /*override*/;

    // vIndex: 3
    virtual void addOrReplacePalette(::Editor::EditorBlockPalette const& palette) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<void> removePalette(::HashedString const& paletteId) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result<void> setActivePalette(::HashedString const& paletteId) /*override*/;

    // vIndex: 8
    virtual void _handleBlockPaletteItemChangedPayload(::Editor::Network::BlockPaletteItemChangedPayload const& payload
    ) /*override*/;

    // vIndex: 9
    virtual void _handleBlockPaletteSelectedIndexChangedPayload(
        ::Editor::Network::BlockPaletteSelectedIndexChangedPayload const& payload
    ) /*override*/;

    // vIndex: 7
    virtual void _handleBlockPaletteActivePaletteChangedPayload(
        ::Editor::Network::BlockPaletteActivePaletteChangedPayload const& payload
    ) /*override*/;

    // vIndex: 10
    virtual void _handleBlockPaletteChangedPayload(::Editor::Network::BlockPaletteChangedPayload const& payload
    ) /*override*/;

    // vIndex: 11
    virtual void _handleBlockPaletteRemovedPayload(::Editor::Network::BlockPaletteRemovedPayload const& payload
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addOrReplaceAndSyncPalette(::Editor::EditorBlockPalette const& palette);

    MCAPI bool _loadAllBlockPalettes();

    MCAPI ::std::shared_ptr<::Editor::EditorBlockPalette> _loadBlockPalette(::HashedString const& blockPaletteId) const;

    MCAPI void _removeSavedBlockPalette(::HashedString const& blockPaletteId);

    MCAPI void _saveActiveBlockPaletteId();

    MCAPI void _saveBlockPalette(::Editor::EditorBlockPalette const& palette);

    MCAPI void _saveSelectedBlockPaletteItem(int index);

    MCAPI ::Scripting::Result<void> _setActiveAndSyncPalette(::HashedString const& paletteId);

    MCAPI ::Scripting::Result<void> _updateAndSyncPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCAPI ::Scripting::Result<void> _updateAndSyncSelectedPaletteIndex(int index);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<void> $setSelectedPaletteItemIndex(int index);

    MCAPI ::Scripting::Result<void> $setPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCAPI ::Scripting::Result<void> $pickBlock(::Block const&);

    MCAPI void $addOrReplacePalette(::Editor::EditorBlockPalette const& palette);

    MCAPI ::Scripting::Result<void> $removePalette(::HashedString const& paletteId);

    MCAPI ::Scripting::Result<void> $setActivePalette(::HashedString const& paletteId);

    MCAPI void $_handleBlockPaletteItemChangedPayload(::Editor::Network::BlockPaletteItemChangedPayload const& payload);

    MCAPI void $_handleBlockPaletteSelectedIndexChangedPayload(
        ::Editor::Network::BlockPaletteSelectedIndexChangedPayload const& payload
    );

    MCAPI void $_handleBlockPaletteActivePaletteChangedPayload(
        ::Editor::Network::BlockPaletteActivePaletteChangedPayload const& payload
    );

    MCAPI void $_handleBlockPaletteChangedPayload(::Editor::Network::BlockPaletteChangedPayload const& payload);

    MCAPI void $_handleBlockPaletteRemovedPayload(::Editor::Network::BlockPaletteRemovedPayload const& payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForEditorBlockPaletteServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
