#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 24> mUnk7823f4;
    ::ll::UntypedStorage<8, 32> mUnk555bf0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPalette& operator=(ScriptBlockPalette const&);
    ScriptBlockPalette(ScriptBlockPalette const&);
    ScriptBlockPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockPalette();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockPalette(::Scripting::WeakLifetimeScope const& scope, uint64 maxSize);

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
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, uint64 maxSize);
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

} // namespace Editor::ScriptModule
