#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { struct EditorBlockPalette; }
namespace Editor { struct EditorBlockPaletteEventActivePaletteChanged; }
namespace Editor { struct EditorBlockPaletteEventItemUpdated; }
namespace Editor { struct EditorBlockPaletteEventPaletteRemoved; }
namespace Editor { struct EditorBlockPaletteEventPaletteUpdated; }
namespace Editor { struct EditorBlockPaletteEventSelectedItemIndexChanged; }
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
// clang-format on

namespace Editor::Services {

class EditorBlockPaletteServiceProvider {
public:
    // prevent constructor by default
    EditorBlockPaletteServiceProvider& operator=(EditorBlockPaletteServiceProvider const&);
    EditorBlockPaletteServiceProvider(EditorBlockPaletteServiceProvider const&);
    EditorBlockPaletteServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorBlockPaletteServiceProvider();

    // vIndex: 1
    virtual ::std::vector<::std::shared_ptr<::Editor::EditorBlockPalette>> const& getPaletteList() const = 0;

    // vIndex: 2
    virtual ::Editor::EditorBlockPalette const& getActivePalette() const = 0;

    // vIndex: 3
    virtual void addOrReplacePalette(::Editor::EditorBlockPalette const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result<void> removePalette(::HashedString const&) = 0;

    // vIndex: 5
    virtual ::Scripting::Result<void> setActivePalette(::HashedString const&) = 0;

    // vIndex: 6
    virtual ::Scripting::Result<void> setSelectedPaletteItemIndex(int) = 0;

    // vIndex: 7
    virtual int getSelectedPaletteItemIndex() const = 0;

    // vIndex: 8
    virtual ::Scripting::Result<void>
    setPaletteItem(::HashedString const&, int, ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const&) = 0;

    // vIndex: 9
    virtual ::Scripting::Result<void> pickBlock(::Block const&) = 0;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<::BlockLegacy const*> getSelectedBlockType() const = 0;

    // vIndex: 11
    virtual ::std::vector<::std::string> getPaletteIdList() const = 0;

    // vIndex: 12
    virtual ::std::optional<::Editor::EditorBlockPalette> getPalette(::HashedString const&) const = 0;

    // vIndex: 13
    virtual ::Scripting::Result_deprecated<
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>>
    getPaletteItem(::HashedString const&, int) const = 0;

    // vIndex: 14
    virtual void forEachBlockType(::std::function<void(::BlockLegacy const&, bool)>) const = 0;

    // vIndex: 15
    virtual ::Bedrock::PubSub::Subscription
        registerEventListener(::std::function<void(::std::variant<
                                                   ::Editor::EditorBlockPaletteEventItemUpdated,
                                                   ::Editor::EditorBlockPaletteEventSelectedItemIndexChanged,
                                                   ::Editor::EditorBlockPaletteEventActivePaletteChanged,
                                                   ::Editor::EditorBlockPaletteEventPaletteUpdated,
                                                   ::Editor::EditorBlockPaletteEventPaletteRemoved> const&)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
