#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockPalette : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockPalette> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2fa21f;
    ::ll::UntypedStorage<8, 8>  mUnk706561;
    ::ll::UntypedStorage<8, 24> mUnk102892;
    ::ll::UntypedStorage<8, 32> mUnk555bf0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPalette& operator=(ScriptBlockPalette const&);
    ScriptBlockPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockPalette() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockPalette(::Editor::ScriptModule::ScriptBlockPalette const&);

    MCNAPI ScriptBlockPalette(::Scripting::WeakLifetimeScope const& scope, uint64 maxSize);

    MCNAPI ::std::optional<::Scripting::ArgumentOutOfBoundsError> _tryGetArgumentOutOfBoundsError(int index) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>,
        ::Scripting::ArgumentOutOfBoundsError>
    getItem(int index) const;

    MCNAPI ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9>
    getItemListFromScriptItems() const;

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> removeItemAt(int index);

    MCNAPI void removeItems();

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setItem(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> blockPaletteItem,
        int                                                                                   index
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptBlockPalette const&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, uint64 maxSize);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
