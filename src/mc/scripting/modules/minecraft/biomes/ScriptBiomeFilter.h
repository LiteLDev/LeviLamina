#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mIncludeBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mExcludeBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mIncludeTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mExcludeTags;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeFilter& operator=(ScriptBiomeFilter const&);
    ScriptBiomeFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBiomeFilter(::ScriptModuleMinecraft::ScriptBiomeFilter const&);

    MCNAPI ::std::optional<::std::vector<::std::string>> getExcludeBiomes() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getExcludeTags() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getIncludeBiomes() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getIncludeTags() const;

    MCNAPI void
    setBiomes(::std::vector<::std::string>& biomeContainer, ::std::optional<::std::vector<::std::string>> biomes);

    MCNAPI void setExcludeBiomes(::std::optional<::std::vector<::std::string>> biomes);

    MCNAPI void setExcludeTags(::std::optional<::std::vector<::std::string>> tags);

    MCNAPI void setIncludeBiomes(::std::optional<::std::vector<::std::string>> biomes);

    MCNAPI void setIncludeTags(::std::optional<::std::vector<::std::string>> tags);

    MCNAPI void setTags(::std::vector<::std::string>& tagContainer, ::std::optional<::std::vector<::std::string>> tags);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
