#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
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
    virtual ::Scripting::Result_deprecated<void> setFillLevel(int level);

    virtual bool _isValid() const /*override*/;

    virtual ~BaseScriptBlockLiquidContainerComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> getFillLevel();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $setFillLevel(int level);

    MCNAPI bool $_isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
