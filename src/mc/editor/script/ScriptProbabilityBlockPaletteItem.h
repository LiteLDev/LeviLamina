#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptIBlockPaletteItem.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::ScriptModule { class ScriptWeightedBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProbabilityBlockPaletteItem : public ::Editor::ScriptModule::ScriptIBlockPaletteItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk581bf9;
    ::ll::UntypedStorage<4, 4>  mUnk3353bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProbabilityBlockPaletteItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptProbabilityBlockPaletteItem() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void, ::Scripting::Error>
    setBlock(::std::variant<
             ::std::string,
             ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
             ::Scripting::StrongTypedObjectHandle<
                 ::ScriptModuleMinecraft::ScriptBlockPermutation>> const&) /*override*/;

    // vIndex: 2
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    getBlock() const /*override*/;

    // vIndex: 4
    virtual ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>
    getServiceBlockPaletteItem() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProbabilityBlockPaletteItem(::Editor::ScriptModule::ScriptProbabilityBlockPaletteItem const&);

    MCAPI ::Scripting::Result<void, ::Scripting::Error> addBlock(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block,
        int                                                                                               weight
    );

    MCAPI ::std::vector<::Editor::ScriptModule::ScriptWeightedBlock> getBlocks() const;

    MCAPI ::Editor::ScriptModule::ScriptProbabilityBlockPaletteItem&
    operator=(::Editor::ScriptModule::ScriptProbabilityBlockPaletteItem const&);

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::Error> removeBlockAt(int index);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptProbabilityBlockPaletteItem>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptProbabilityBlockPaletteItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    $setBlock(::std::variant<
              ::std::string,
              ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
              ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const&);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    $getBlock() const;

    MCAPI ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>
    $getServiceBlockPaletteItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
