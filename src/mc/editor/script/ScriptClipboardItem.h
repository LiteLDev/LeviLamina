#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class EditorStructureTemplate; }
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
    ::ll::UntypedStorage<8, 16> mUnk564e99;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardItem& operator=(ScriptClipboardItem const&);
    ScriptClipboardItem(ScriptClipboardItem const&);
    ScriptClipboardItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Vec3 getSize() const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::EditorStructureTemplate> getStructure();

    MCNAPI ~ScriptClipboardItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
