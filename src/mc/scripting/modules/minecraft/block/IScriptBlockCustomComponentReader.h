#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockCustomComponentReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptBlockCustomComponentReader() = default;

    virtual ::std::vector<::std::string_view> getValidComponentsForBlock(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation
    ) const = 0;

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForBlock(
        ::Block const&                        block,
        ::std::string_view                    componentName,
        ::Scripting::WeakLifetimeScope const& scope
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
