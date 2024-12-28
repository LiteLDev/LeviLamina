#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetGroupErrorInvalidObject; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct RuntimeConditionError; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk92ee80;
    ::ll::UntypedStorage<8, 192> mUnk3edf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResultAny();

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptUnloadedChunksError&&);

    MCAPI explicit ResultAny(::Scripting::Error&&);

    MCAPI explicit ResultAny(::entt::meta_any&& resultAny);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptInvalidStructureError&&);

    MCAPI explicit ResultAny(::Scripting::ArgumentOutOfBoundsError&&);

    MCAPI explicit ResultAny(::Scripting::InvalidArgumentError&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError const&&);

    MCAPI explicit ResultAny(::Editor::ScriptModule::ScriptWidgetErrorInvalidObject&&);

    MCAPI explicit ResultAny(::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptCommandError&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError&&);

    MCAPI explicit ResultAny(::gametest::GameTestError&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptInvalidContainerSlotError&&);

    MCAPI explicit ResultAny(::Scripting::Error const&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError const&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError&&);

    MCAPI explicit ResultAny(::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError&&);

    MCAPI explicit ResultAny(::Scripting::RuntimeConditionError&&);

    MCAPI explicit ResultAny(::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject&&);

    MCAPI explicit ResultAny(::Scripting::EngineError&&);

    MCAPI ::entt::meta_any toAny() const;

    MCAPI ::entt::meta_any toErrorAny() const;

    MCAPI ~ResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&& errorAny);

    MCAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const& resultAny);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptUnloadedChunksError&&);

    MCAPI void* $ctor(::Scripting::Error&&);

    MCAPI void* $ctor(::entt::meta_any&& resultAny);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptInvalidStructureError&&);

    MCAPI void* $ctor(::Scripting::ArgumentOutOfBoundsError&&);

    MCAPI void* $ctor(::Scripting::InvalidArgumentError&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError const&&);

    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetErrorInvalidObject&&);

    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCommandError&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError&&);

    MCAPI void* $ctor(::gametest::GameTestError&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptInvalidContainerSlotError&&);

    MCAPI void* $ctor(::Scripting::Error const&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError const&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError&&);

    MCAPI void* $ctor(::Scripting::RuntimeConditionError&&);

    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject&&);

    MCAPI void* $ctor(::Scripting::EngineError&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
