#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { class ScriptEditorStructureSearchOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorStructureManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkeec556;
    ::ll::UntypedStorage<8, 8> mUnk7aaab7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructureManager& operator=(ScriptEditorStructureManager const&);
    ScriptEditorStructureManager(ScriptEditorStructureManager const&);
    ScriptEditorStructureManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>> createEmptyStructure(::std::string const& structureName, ::Vec3 const& size);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>> createFromClipboardItem(::Editor::ScriptModule::ScriptClipboardItem& item, ::std::string structureName);

    MCNAPI ::Scripting::Result_deprecated<void> deleteStructure(::std::string id);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExistingTags();

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>> getStructure(::std::string id);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>>> searchStructures(::std::optional<::Editor::ScriptModule::ScriptEditorStructureSearchOptions> optOptions);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

};

}
