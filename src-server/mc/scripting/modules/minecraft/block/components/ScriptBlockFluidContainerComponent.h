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
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFluidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getTypeId_V1() const /*override*/;

    // vIndex: 2
    virtual ::std::string const& getTypeId_V2() const /*override*/;

    // vIndex: 3
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockFluidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> addDye(::ScriptModuleMinecraft::ScriptItemType const& dye);

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> getCustomColor() const;

    MCNAPI ::Scripting::Result_deprecated<int> getFillLevel() const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptFluidType> getFluidType() const;

    MCNAPI ::Scripting::Result_deprecated<void> setCustomColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result_deprecated<void> setFillLevel(int level) const;

    MCNAPI ::Scripting::Result_deprecated<void> setFluidType(::ScriptModuleMinecraft::ScriptFluidType fluidType);

    MCNAPI ::Scripting::Result_deprecated<void> setPotionType(::ScriptModuleMinecraft::ScriptItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptFluidType _getActualCauldronFluidType(::BlockSource& region, ::BlockPos position);

    MCNAPI static ::Scripting::ClassBinding bindV1(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::Scripting::ClassBinding bindV2(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>> tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& ComponentIdV1();

    MCNAPI static ::std::string const& ComponentIdV2();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getTypeId_V1() const;

    MCNAPI ::std::string const& $getTypeId_V2() const;

    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
