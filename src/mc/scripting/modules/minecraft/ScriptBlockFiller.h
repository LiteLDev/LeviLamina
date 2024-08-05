#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
        struct ScriptModuleMinecraft::ScriptBlockFillOptions const&,
        gsl::not_null<class Dimension*>,
        class Scripting::WeakLifetimeScope
    );

    MCAPI class Scripting::
        Result<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptListBlockVolume>,
            struct ScriptModuleMinecraft::ScriptUnloadedChunksError,
            struct Scripting::EngineError,
            struct Scripting::Error>
        fillBlocks(std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockVolumeBase>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const&);

    MCAPI ~ScriptBlockFiller();

    MCAPI static char const* ERROR_MSG_FILL_BAD_HEIGHT;

    MCAPI static char const* ERROR_MSG_FILL_TOO_BIG;

    MCAPI static char const* ERROR_MSG_FILL_UNKNOWN_BLOCK;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
