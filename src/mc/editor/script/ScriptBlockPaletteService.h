#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
