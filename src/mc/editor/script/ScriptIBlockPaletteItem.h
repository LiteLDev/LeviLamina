#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptBlockPaletteItemType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptIBlockPaletteItem
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptIBlockPaletteItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7450d8;
    ::ll::UntypedStorage<8, 40> mUnk773ed5;
    ::ll::UntypedStorage<4, 4>  mUnkafc61f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptIBlockPaletteItem(ScriptIBlockPaletteItem const&);
    ScriptIBlockPaletteItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptIBlockPaletteItem();

    virtual ::Scripting::Result_deprecated<void> setBlock(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const&
    ) = 0;

    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    getBlock() const = 0;

    virtual ::std::optional<::std::string> getDisplayName() const;

    virtual ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>
    getServiceBlockPaletteItem() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptBlockPaletteItemType getType() const;

    MCNAPI ::Editor::ScriptModule::ScriptIBlockPaletteItem&
    operator=(::Editor::ScriptModule::ScriptIBlockPaletteItem const&);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::string> $getDisplayName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
