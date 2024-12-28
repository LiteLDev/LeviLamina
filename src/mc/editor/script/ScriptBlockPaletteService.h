#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptBlockPalette; }
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace Editor::Services { class EditorBlockPaletteServiceProvider; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ScriptBlockPaletteService(
        ::Editor::Services::EditorBlockPaletteServiceProvider& provider,
        ::Scripting::WeakLifetimeScope const&                  scope
    );

    MCAPI void addOrReplacePalette(
        ::std::string const&                                                             paletteId,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette> palette
    ) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette>>
    getPalette(::std::string const& paletteId) const;

    MCAPI ::std::vector<::std::string> getPaletteIdList() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>>
    getPaletteItem(::std::string const& paletteId, int index) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette> getPrimaryPalette() const;

    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    getSelectedBlock() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> getSelectedItem() const;

    MCAPI ::Scripting::Result<void> removePalette(::std::string const& paletteId) const;

    MCAPI ::Scripting::Result<void> setPaletteItem(
        ::std::string const&                                                                  paletteId,
        int                                                                                   index,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> item
    ) const;

    MCAPI ::Scripting::Result<void> setPrimaryPalette(::std::string const& paletteId) const;

    MCAPI ::Scripting::Result<void>
    setSelectedItem(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> item) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptBlockPaletteService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Editor::Services::EditorBlockPaletteServiceProvider& provider, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
