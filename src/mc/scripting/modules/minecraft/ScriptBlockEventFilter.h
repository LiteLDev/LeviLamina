#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockEventFilter {
public:
    // ScriptBlockEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>>
                                                                              mSpecificPermutations;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>  mBlockTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Block const*>>> mProcessedSpecificPermutations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>               mProcessedBlockTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCNAPI void process();

    MCNAPI ~ScriptBlockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
