#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

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
#ifdef LL_PLAT_S
    virtual ~IScriptBlockCustomComponentReader() = default;
#else // LL_PLAT_C
    virtual ~IScriptBlockCustomComponentReader();
#endif

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
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
