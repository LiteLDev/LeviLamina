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
    virtual ~ServerBlockPaletteService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setSelectedPaletteItemIndex(int index) /*override*/;

    virtual ::Scripting::Result_deprecated<void> setPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> pickBlock(::Block const&) /*override*/;

    virtual void addOrReplacePalette(::Editor::EditorBlockPalette const& palette) /*override*/;

    virtual ::Scripting::Result_deprecated<void> removePalette(::HashedString const& paletteId) /*override*/;

    virtual ::Scripting::Result_deprecated<void> setActivePalette(::HashedString const& paletteId) /*override*/;

    virtual void _handleBlockPaletteItemChangedPayload(
        ::Editor::Network::BlockPaletteItemChangedPayload const& payload
    ) /*override*/;

    virtual void _handleBlockPaletteSelectedIndexChangedPayload(
        ::Editor::Network::BlockPaletteSelectedIndexChangedPayload const& payload
    ) /*override*/;

    virtual void _handleBlockPaletteActivePaletteChangedPayload(
        ::Editor::Network::BlockPaletteActivePaletteChangedPayload const& payload
    ) /*override*/;

    virtual void
    _handleBlockPaletteChangedPayload(::Editor::Network::BlockPaletteChangedPayload const& payload) /*override*/;

    virtual void
    _handleBlockPaletteRemovedPayload(::Editor::Network::BlockPaletteRemovedPayload const& payload) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> _setActiveAndSyncPalette(::HashedString const& paletteId);

    MCNAPI ::Scripting::Result_deprecated<void> _updateAndSyncPaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCNAPI_S ::Scripting::Result_deprecated<void> _updateAndSyncSelectedPaletteIndex(int index);
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
