#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptIBlockPaletteItem.h"

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
    ScriptProbabilityBlockPaletteItem& operator=(ScriptProbabilityBlockPaletteItem const&);
    ScriptProbabilityBlockPaletteItem(ScriptProbabilityBlockPaletteItem const&);
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
    MCNAPI ::Scripting::Result<void, ::Scripting::Error> addBlock(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& block,
        int                                                                                               weight
    );

    MCNAPI ::std::vector<::Editor::ScriptModule::ScriptWeightedBlock> getBlocks() const;

    MCNAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::Error> removeBlockAt(int index
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptProbabilityBlockPaletteItem>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::Error>
    $setBlock(::std::variant<
              ::std::string,
              ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
              ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const&);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>>
    $getBlock() const;

    MCNAPI ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>
    $getServiceBlockPaletteItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
