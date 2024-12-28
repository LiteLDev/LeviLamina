#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFiller {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk76101e;
    ::ll::UntypedStorage<8, 160> mUnk2149fb;
    ::ll::UntypedStorage<8, 8>   mUnk495145;
    ::ll::UntypedStorage<8, 16>  mUnkf05836;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFiller& operator=(ScriptBlockFiller const&);
    ScriptBlockFiller(ScriptBlockFiller const&);
    ScriptBlockFiller();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockFiller(
        ::ScriptModuleMinecraft::ScriptBlockFillOptions const& options,
        ::gsl::not_null<::Dimension*>                          dimension,
        ::Scripting::WeakLifetimeScope                         scope
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>,
        ::ScriptModuleMinecraft::ScriptUnloadedChunksError,
        ::Scripting::EngineError,
        ::Scripting::Error>
    fillBlocks(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
    );

    MCAPI ~ScriptBlockFiller();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ERROR_MSG_FILL_BAD_HEIGHT();

    MCAPI static char const*& ERROR_MSG_FILL_TOO_BIG();

    MCAPI static char const*& ERROR_MSG_FILL_UNKNOWN_BLOCK();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptBlockFillOptions const& options,
        ::gsl::not_null<::Dimension*>                          dimension,
        ::Scripting::WeakLifetimeScope                         scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
