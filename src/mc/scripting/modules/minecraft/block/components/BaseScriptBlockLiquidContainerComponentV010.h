#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/level/block/CauldronLiquidType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CauldronLiquidType>                     mLiquidType;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFluidType> mFluidType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void> setFillLevel(int level);

    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(::BlockActor& blockActor, ::BlockSource& region, ::BlockPos position);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<void> $setFillLevel(int level);

    MCAPI bool $_isValid() const;


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
