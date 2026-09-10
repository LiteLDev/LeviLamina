#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"
#include "mc/world/level/block/actor/component/DynamicPropertiesBlockActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptItemBlockDynamicPropertiesComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::DynamicPropertiesBlockActorComponent> mDynamicProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemBlockDynamicPropertiesComponent() /*override*/ = default;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
