#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeTypes {
public:
    // prevent constructor by default
    ScriptBiomeTypes& operator=(ScriptBiomeTypes const&);
    ScriptBiomeTypes(ScriptBiomeTypes const&);
    ScriptBiomeTypes();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>>
          get(std::string const&, class Scripting::WeakLifetimeScope&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBiomeTypes>
        bind(class Bedrock::NonOwnerPointer<class BiomeRegistry>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateAllBiomeTypeHandles(class Scripting::WeakLifetimeScope&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
