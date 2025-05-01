#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFluidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
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
    MCNAPI ::Scripting::Result<void, ::Scripting::Error> addDye(::ScriptModuleMinecraft::ScriptItemType const& dye);

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Scripting::Error> getCustomColor() const;

    MCNAPI ::Scripting::Result<int, ::Scripting::Error> getFillLevel() const;

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptFluidType, ::Scripting::Error> getFluidType() const;

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> setCustomColor(::ScriptModuleMinecraft::ScriptRGBA const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> setFillLevel(int level) const;

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> setFluidType(::ScriptModuleMinecraft::ScriptFluidType fluidType
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::Error>
    setPotionType(::ScriptModuleMinecraft::ScriptItemStack const& item);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronFluidType(::BlockSource& region, ::BlockPos position);

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>
    bindV1(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>
    bindV2(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCNAPI static ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>>
    tryCreate(::BlockSource& region, ::BlockPos position, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ComponentIdV1();

    MCAPI static ::std::string const& ComponentIdV2();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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

} // namespace ScriptModuleMinecraft
