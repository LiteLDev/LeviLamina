#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/IScriptSerializable.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelStorage;
class StructureManager;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate : public ::ScriptModuleMinecraft::IScriptSerializable {
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
    ScriptStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getContentType() const /*override*/;

    virtual ~ScriptStructureTemplate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptStructureTemplate(::ScriptModuleMinecraft::ScriptStructureTemplate const&);

    MCAPI ScriptStructureTemplate(
        ::std::string const&                                                                id,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structureManager,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager> scriptStructureManager,
        ::LevelStorage&                                                                     levelStorage
    );

    MCAPI ::Scripting::InvalidArgumentError
    _createBoundsError(int index, ::BlockPos const& pos, ::BlockPos const& size) const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCAPI ::StructureTemplate* getStructureTemplate() const;
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptStructureTemplate const&);

    MCAPI void* $ctor(
        ::std::string const&                                                                id,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structureManager,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager> scriptStructureManager,
        ::LevelStorage&                                                                     levelStorage
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string const& $getContentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
