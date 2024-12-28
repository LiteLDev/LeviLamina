#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
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
    // vIndex: 0
    virtual ~ScriptBlockPalette();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockPalette(::Editor::ScriptModule::ScriptBlockPalette const&);

    MCAPI ScriptBlockPalette(::Scripting::WeakLifetimeScope const& scope, uint64 maxSize);

    MCAPI ::std::optional<::Scripting::ArgumentOutOfBoundsError> _tryGetArgumentOutOfBoundsError(int index) const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem>,
        ::Scripting::ArgumentOutOfBoundsError>
    getItem(int index) const;

    MCAPI ::std::array<::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>, 9>
    getItemListFromScriptItems() const;

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> removeItemAt(int index);

    MCAPI void removeItems();

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setItem(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptIBlockPaletteItem> blockPaletteItem,
        int                                                                                   index
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptBlockPalette> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptBlockPalette const&);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, uint64 maxSize);
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

} // namespace Editor::ScriptModule
