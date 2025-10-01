#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
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
    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::InvalidArgumentError>
    getBlockPermutation(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCNAPI bool isValid() const;

    MCNAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidStructureError, ::Scripting::InvalidArgumentError>
        isWaterlogged(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>,
        ::ScriptModuleMinecraft::ScriptInvalidStructureError,
        ::Scripting::EngineError,
        ::Scripting::InvalidArgumentError>
    saveAs(::std::string const& identifier, ::StructureRedstoneSaveMode saveMode);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidStructureError> saveToWorld();

    MCNAPI ::Scripting::
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
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindAnimationModeEnum();

    MCNAPI static ::Scripting::EnumBinding bindMirrorEnum();

    MCNAPI static ::Scripting::EnumBinding bindRotationEnum();

    MCNAPI static ::Scripting::EnumBinding bindStructureSaveModeEnum();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
