#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class StructureManager;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                               mId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                    mScope;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                                    mLevelStorage;
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>>
        mScriptStructureManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureTemplate& operator=(ScriptStructureTemplate const&);
    ScriptStructureTemplate(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptStructureTemplate(
        ::std::string const&                                                                id,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structureManager,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager> scriptStructureManager,
        ::LevelStorage&                                                                     levelStorage
    );

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::InvalidArgumentError>
    getBlockPermutation(::Vec3 const& location) const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidStructureError, ::Scripting::InvalidArgumentError>
        isWaterlogged(::Vec3 const& location) const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::EngineError,
        ::Scripting::InvalidArgumentError>
    saveAs(::std::string const& identifier, ::StructureRedstoneSaveMode saveMode);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidStructureError> saveToWorld();

    MCAPI ::Scripting::
        Result<void, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptInvalidStructureError>
        setBlockPermutation(
            ::Vec3 const& location,
            ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
                 blockPermutation,
            bool waterlogged
        );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::EnumBinding bindAnimationModeEnum();

    MCAPI static ::Scripting::EnumBinding bindMirrorEnum();

    MCAPI static ::Scripting::EnumBinding bindRotationEnum();

    MCAPI static ::Scripting::EnumBinding bindStructureSaveModeEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                                                id,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structureManager,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager> scriptStructureManager,
        ::LevelStorage&                                                                     levelStorage
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
