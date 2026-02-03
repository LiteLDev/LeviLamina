#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/level/block/CauldronLiquidType.h"

// auto generated forward declare list
// clang-format off
class CauldronBlockActor;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
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

    virtual ~BaseScriptBlockLiquidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CauldronBlockActor* _tryGetCauldronBlockActor();

    MCAPI ::Scripting::Result_deprecated<int> getFillLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
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
