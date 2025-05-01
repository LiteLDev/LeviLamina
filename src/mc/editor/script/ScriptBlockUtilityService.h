#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ContiguousSelectionType.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptContiguousSelectionProperties; }
namespace Editor::ScriptModule { class ScriptQuickExtrudeProperties; }
namespace Editor::ScriptModule { class ScriptSelectionContainer; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf57135;
    ::ll::UntypedStorage<8, 8>  mUnkd4df07;
    ::ll::UntypedStorage<8, 8>  mUnk23c0a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityService& operator=(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> _fillVolume(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>> const&
            volumeVariant,
        ::std::optional<::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const> const&
            optblockVariant
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>,
        ::Scripting::Error>
    _getContiguousSelection(
        ::std::optional<::Editor::ScriptModule::ScriptContiguousSelectionProperties>& scriptContiguousProperties
    );

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>, ::Scripting::Error>
        _getFacePreviewSelection(
            ::std::optional<::Editor::ScriptModule::ScriptQuickExtrudeProperties>& scriptQuickExtrudeProperties
        );

    MCNAPI ::Scripting::Result<void>
    _quickExtrude(::std::optional<::Editor::ScriptModule::ScriptQuickExtrudeProperties>& scriptQuickExtrudeProperties);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::
        EnumBindingBuilder<::Editor::BlockUtils::ContiguousSelectionType, ::Editor::BlockUtils::ContiguousSelectionType>
        bindContiguousSelectionTypeEnums();

    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptBlockUtilityService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
