#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptBlockPalette; }
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockPaletteService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockPaletteService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk14ca4a;
    ::ll::UntypedStorage<8, 8>  mUnkcd4914;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPaletteService& operator=(ScriptBlockPaletteService const&);
    ScriptBlockPaletteService(ScriptBlockPaletteService const&);
    ScriptBlockPaletteService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addOrReplacePalette(
        ::std::string const&                                                             paletteId,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette> palette
    ) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette>>
    getPalette(::std::string const& paletteId) const;

    MCNAPI ::std::vector<::std::string> getPaletteIdList() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>>
    getPaletteItem(::std::string const& paletteId, int index) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette> getPrimaryPalette() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    getSelectedBlock() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>
    getSelectedItem() const;

    MCNAPI ::Scripting::Result_deprecated<void> removePalette(::std::string const& paletteId) const;

    MCNAPI ::Scripting::Result_deprecated<void> setPaletteItem(
        ::std::string const&                                                                  paletteId,
        int                                                                                   index,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> item
    ) const;

    MCNAPI ::Scripting::Result_deprecated<void> setPrimaryPalette(::std::string const& paletteId) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    setSelectedItem(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> item) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
