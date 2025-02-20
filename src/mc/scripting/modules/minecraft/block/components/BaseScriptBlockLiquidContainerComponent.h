#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf47896;
    ::ll::UntypedStorage<4, 4> mUnk79f968;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponent& operator=(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent(BaseScriptBlockLiquidContainerComponent const&);
    BaseScriptBlockLiquidContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::Scripting::Result<void> setFillLevel(int level);

    // vIndex: 1
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~BaseScriptBlockLiquidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<int> getFillLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $setFillLevel(int level);

    MCFOLD bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
