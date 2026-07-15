#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/IScriptSerializable.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class StructureManager;
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
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
    ScriptStructureTemplate(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getContentType() const /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
