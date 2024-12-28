#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class StructureManager;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk564cd3;
    ::ll::UntypedStorage<8, 24> mUnk2863f0;
    ::ll::UntypedStorage<8, 16> mUnk9f6bf9;
    ::ll::UntypedStorage<8, 8>  mUnk663778;
    ::ll::UntypedStorage<8, 32> mUnk730abc;
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

    MCAPI ::StructureTemplate* _getStructureTemplate() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::InvalidArgumentError>
    getBlockPermutation(::Vec3 const& location) const;

    MCAPI ::std::string const& getId() const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCAPI ::StructureTemplate* getStructureTemplate() const;

    MCAPI bool isValid() const;

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
                blockPermutation
        );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptStructureTemplate> bind();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::AnimationMode> bindAnimationModeEnum();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Mirror> bindMirrorEnum();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Rotation> bindRotationEnum();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::StructureRedstoneSaveMode>
    bindStructureSaveModeEnum();
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
