#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Editor::ScriptModule { class ScriptBlockMaskList; }
namespace Editor::ScriptModule { class ScriptContiguousSelectionProperties; }
namespace Editor::ScriptModule { class ScriptQuickExtrudeProperties; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf57135;
    ::ll::UntypedStorage<8, 8> mUnkd4df07;
    ::ll::UntypedStorage<8, 8> mUnk23c0a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityService& operator=(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> _fillVolume(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const& volumeVariant, ::std::optional<::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const> const& optblockVariant) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> _findObscuredBlocksWithinVolume(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> volumeVariant);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> _getContiguousSelection(::std::optional<::Editor::ScriptModule::ScriptContiguousSelectionProperties>& scriptContiguousProperties);

    MCNAPI ::Vec3 _getDimensionMaxLocation() const;

    MCNAPI ::Vec3 _getDimensionMinLocation() const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>> _getFacePreviewSelection(::std::optional<::Editor::ScriptModule::ScriptQuickExtrudeProperties>& scriptQuickExtrudeProperties);

    MCNAPI bool _isLocationInsideCurrentDimensionBounds(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>, ::Vec3, ::BoundingBox> volumeVariant) const;

    MCNAPI ::Scripting::Result_deprecated<void> _quickExtrude(::std::optional<::Editor::ScriptModule::ScriptQuickExtrudeProperties>& scriptQuickExtrudeProperties);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> _shrinkWrapVolume(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const& volumeVariant);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> _trimVolumeToFitContents(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const& volumeVariant, bool retainMarqueeAfterTrimming, bool ignoreLiquid, bool ignoreNoCollision, ::std::optional<::Editor::ScriptModule::ScriptBlockMaskList> const& optionalScriptBlockMask) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindContiguousSelectionTypeEnums();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

};

}
