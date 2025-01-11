#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class EditorStructureTemplate; }
namespace Editor::ScriptModule { class ScriptClipboardWriteOptions; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { class ScriptSelectionContainer; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
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
    MCAPI ::Scripting::Result<void> clear();

    MCFOLD ::mce::UUID const& getId() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>>
    getPredictedWriteAsCompoundBlockVolume(
        ::Vec3 const&                                                               position,
        ::std::optional<::Editor::ScriptModule::ScriptClipboardWriteOptions> const& optOptions
    ) const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>>
    getPredictedWriteAsSelection(
        ::Vec3 const&                                                               position,
        ::std::optional<::Editor::ScriptModule::ScriptClipboardWriteOptions> const& optOptions
    ) const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getSize() const;

    MCAPI ::Scripting::Result_deprecated<::Editor::EditorStructureTemplate> getStructure();

    MCAPI ::Scripting::Result_deprecated<bool> isEmpty() const;

    MCAPI ::Scripting::Result<void> readFromSelection(::Editor::ScriptModule::ScriptSelectionContainer const& selection
    );

    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    readFromStructure(::Editor::ScriptModule::ScriptEditorStructure const& structure);

    MCAPI ::Scripting::Result<void> readFromWorld(::Vec3 const& from, ::Vec3 const& to);

    MCAPI ::Scripting::Result_deprecated<bool> writeToWorld(
        ::Vec3 const&                                                               position,
        ::std::optional<::Editor::ScriptModule::ScriptClipboardWriteOptions> const& options
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptClipboardItem> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
