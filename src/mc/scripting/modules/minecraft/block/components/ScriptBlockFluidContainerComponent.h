#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CauldronBlockActor;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFluidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _isValid() const /*override*/;

    virtual ~ScriptBlockFluidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CauldronBlockActor* _tryGetCauldronBlockActor();

    MCAPI ::Scripting::Result_deprecated<void> addDye(::ScriptModuleMinecraft::ScriptItemType const& dye);

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> getCustomColor() const;

    MCAPI ::Scripting::Result_deprecated<int> getFillLevel() const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptFluidType> getFluidType() const;

    MCAPI ::Scripting::Result_deprecated<void> setCustomColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI ::Scripting::Result_deprecated<void> setFillLevel(int level) const;

    MCAPI ::Scripting::Result_deprecated<void> setFluidType(::ScriptModuleMinecraft::ScriptFluidType fluidType);

    MCAPI ::Scripting::Result_deprecated<void> setPotionType(::ScriptModuleMinecraft::ScriptItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronFluidType(::BlockSource& region, ::BlockPos position);

    MCAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>>
    tryCreate(
        ::BlockSource&                        region,
        ::BlockPos                            position,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  typeId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
