#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class EditorStructureTemplate; }
namespace Editor::ScriptModule { class ScriptClipboardWriteOptions; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptClipboardItem : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptClipboardItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkce75b3;
    ::ll::UntypedStorage<1, 1>  mUnk1f37d8;
    ::ll::UntypedStorage<8, 16> mUnkb0052b;
    ::ll::UntypedStorage<8, 8>  mUnk13a9c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardItem& operator=(ScriptClipboardItem const&);
    ScriptClipboardItem(ScriptClipboardItem const&);
    ScriptClipboardItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> clear();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>
    getPredictedWriteVolume(
        ::Vec3 const&                                                               position,
        ::std::optional<::Editor::ScriptModule::ScriptClipboardWriteOptions> const& optOptions
    ) const;

    MCNAPI ::Vec3 getSize() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::EditorStructureTemplate> getStructure();

    MCNAPI ::Scripting::Result_deprecated<void>
    readFromStructure(::Editor::ScriptModule::ScriptEditorStructure const& structure);

    MCNAPI ::Scripting::Result_deprecated<void> readFromWorld(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const&
            readSource
    );

    MCNAPI ::Scripting::Result_deprecated<bool> writeToWorld(
        ::Vec3 const&                                                               position,
        ::std::optional<::Editor::ScriptModule::ScriptClipboardWriteOptions> const& options
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
