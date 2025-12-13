#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptSelectionContainer.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionContainerVolume : public ::Editor::ScriptModule::ScriptSelectionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb1b577;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainerVolume& operator=(ScriptSelectionContainerVolume const&);
    ScriptSelectionContainerVolume(ScriptSelectionContainerVolume const&);
    ScriptSelectionContainerVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSelectionContainerVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _add(
        ::std::variant<
            ::Vec3 const,
            ::std::vector<::Vec3> const,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toAdd
    );

    MCNAPI ::Scripting::Result_deprecated<::BoundingBox> _bounds() const;

    MCNAPI void _clear();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>
    _get() const;

    MCNAPI int _getVolumeCount() const;

    MCNAPI bool _isEmpty() const;

    MCNAPI void _moveTo(::Vec3 const& location);

    MCNAPI void _remove(
        ::std::variant<
            ::Vec3 const,
            ::std::vector<::Vec3> const,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toRemove
    );

    MCNAPI void _set(
        ::std::variant<
            ::Vec3 const,
            ::std::vector<::Vec3> const,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toSet
    );

    MCNAPI void _translate(::Vec3 const& offset);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
