#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptRecipeCraftingContextConfig; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecipeCraftingComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::gsl::not_null<::std::shared_ptr<::ScriptModuleMinecraft::ScriptRecipeCraftingContextConfig const>>>
        mCraftingContextConfig;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
