#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
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
    MCAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCAPI void process();

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const& data);

    MCAPI ~ScriptBlockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
