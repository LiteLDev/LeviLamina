#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNpcComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptNpcComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::std::string> getDefaultScene() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getName() const;

    MCNAPI ::Scripting::Result_deprecated<int> getSkinIndex() const;

    MCNAPI ::Scripting::Result_deprecated<void> setDefaultScene(::std::string sceneId);

    MCNAPI ::Scripting::Result_deprecated<void> setName(::std::string name);

    MCNAPI ::Scripting::Result<void, ::Scripting::Error, ::Scripting::ArgumentOutOfBoundsError>
    setSkinIndex(int skinIndex);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
