#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/level/block/CauldronLiquidType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class CauldronBlockActor;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponentV010& operator=(BaseScriptBlockLiquidContainerComponentV010 const&);
    BaseScriptBlockLiquidContainerComponentV010();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void> setFillLevel(int level);

    virtual bool _isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseScriptBlockLiquidContainerComponentV010(
        ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 const&
    );

    MCAPI BaseScriptBlockLiquidContainerComponentV010(
        ::BlockActor&                            blockActor,
        ::BlockSource&                           region,
        ::BlockPos                               position,
        ::Scripting::WeakLifetimeScope const&    scope,
        ::CauldronLiquidType                     type,
        ::std::string const&                     id,
        ::ScriptModuleMinecraft::ScriptFluidType fluidtype
    );

    MCAPI bool _isValidLiquid() const;

    MCAPI ::CauldronBlockActor* _tryGetCauldronBlockActor();

    MCAPI ::Scripting::Result_deprecated<int> getFillLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(::BlockActor& blockActor, ::BlockSource& region, ::BlockPos position);

    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 const&);

    MCAPI void* $ctor(
        ::BlockActor&                            blockActor,
        ::BlockSource&                           region,
        ::BlockPos                               position,
        ::Scripting::WeakLifetimeScope const&    scope,
        ::CauldronLiquidType                     type,
        ::std::string const&                     id,
        ::ScriptModuleMinecraft::ScriptFluidType fluidtype
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<void> $setFillLevel(int level);

    MCFOLD bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
