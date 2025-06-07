#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/blocks/EditorBlockPaletteService.h"

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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerBlockPaletteService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<void> setSelectedPaletteItemIndex(int index) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void> setPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    ) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<void> pickBlock(::Block const&) /*override*/;

    // vIndex: 3
    virtual void addOrReplacePalette(::Editor::EditorBlockPalette const& palette) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<void> removePalette(::HashedString const& paletteId) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<void> setActivePalette(::HashedString const& paletteId) /*override*/;

    // vIndex: 8
    virtual void _handleBlockPaletteItemChangedPayload(
        ::Editor::Network::BlockPaletteItemChangedPayload const& payload
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
    virtual void
    _handleBlockPaletteChangedPayload(::Editor::Network::BlockPaletteChangedPayload const& payload) /*override*/;

    // vIndex: 11
    virtual void
    _handleBlockPaletteRemovedPayload(::Editor::Network::BlockPaletteRemovedPayload const& payload) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _loadActiveBlockPaletteId();

    MCNAPI bool _loadAllBlockPalettes();

    MCNAPI ::std::shared_ptr<::Editor::EditorBlockPalette>
    _loadBlockPalette(::HashedString const& blockPaletteId) const;

    MCNAPI bool _loadSelectedBlockPaletteItem();

    MCNAPI void _removeSavedBlockPalette(::HashedString const& blockPaletteId);

    MCNAPI void _saveActiveBlockPaletteId();

    MCNAPI void _saveBlockPalette(::Editor::EditorBlockPalette const& palette);

    MCNAPI void _saveSelectedBlockPaletteItem(int index);

    MCNAPI ::Scripting::Result_deprecated<void> _setActiveAndSyncPalette(::HashedString const& paletteId);

    MCNAPI ::Scripting::Result_deprecated<void> _updateAndSyncPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCNAPI ::Scripting::Result_deprecated<void> _updateAndSyncSelectedPaletteIndex(int index);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $setSelectedPaletteItemIndex(int index);

    MCNAPI ::Scripting::Result_deprecated<void> $setPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCNAPI ::Scripting::Result_deprecated<void> $pickBlock(::Block const&);

    MCNAPI void $addOrReplacePalette(::Editor::EditorBlockPalette const& palette);

    MCNAPI ::Scripting::Result_deprecated<void> $removePalette(::HashedString const& paletteId);

    MCNAPI ::Scripting::Result_deprecated<void> $setActivePalette(::HashedString const& paletteId);

    MCNAPI void
    $_handleBlockPaletteItemChangedPayload(::Editor::Network::BlockPaletteItemChangedPayload const& payload);

    MCNAPI void $_handleBlockPaletteSelectedIndexChangedPayload(
        ::Editor::Network::BlockPaletteSelectedIndexChangedPayload const& payload
    );

    MCNAPI void $_handleBlockPaletteActivePaletteChangedPayload(
        ::Editor::Network::BlockPaletteActivePaletteChangedPayload const& payload
    );

    MCNAPI void $_handleBlockPaletteChangedPayload(::Editor::Network::BlockPaletteChangedPayload const& payload);

    MCNAPI void $_handleBlockPaletteRemovedPayload(::Editor::Network::BlockPaletteRemovedPayload const& payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorBlockPaletteServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
