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
    // prevent constructor by default
    ScriptBlockFiller& operator=(ScriptBlockFiller const&);
    ScriptBlockFiller(ScriptBlockFiller const&);
    ScriptBlockFiller();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockFiller(
        struct ScriptModuleMinecraft::ScriptBlockFillOptions const& options,
        gsl::not_null<class Dimension*>                             dimension,
        class Scripting::WeakLifetimeScope                          scope
    );

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptListBlockVolume>,
        struct ScriptModuleMinecraft::ScriptUnloadedChunksError,
        struct Scripting::EngineError,
        struct Scripting::Error>
    fillBlocks(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const&
            volume,
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
    );

    MCAPI ~ScriptBlockFiller();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static char const* const& ERROR_MSG_FILL_BAD_HEIGHT();

    MCAPI static char const* const& ERROR_MSG_FILL_TOO_BIG();

    MCAPI static char const* const& ERROR_MSG_FILL_UNKNOWN_BLOCK();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
