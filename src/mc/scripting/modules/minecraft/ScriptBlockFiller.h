#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
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
    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>>
    fillBlocks(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block
    );

    MCNAPI ~ScriptBlockFiller();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
