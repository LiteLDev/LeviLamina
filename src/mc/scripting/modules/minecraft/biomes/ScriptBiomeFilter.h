#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::vector<::std::string>> getExcludeBiomes() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getExcludeTags() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getIncludeBiomes() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getIncludeTags() const;

    MCFOLD void
    setBiomes(::std::vector<::std::string>& biomeContainer, ::std::optional<::std::vector<::std::string>> biomes);

    MCAPI void setExcludeBiomes(::std::optional<::std::vector<::std::string>> biomes);

    MCAPI void setExcludeTags(::std::optional<::std::vector<::std::string>> tags);

    MCAPI void setIncludeBiomes(::std::optional<::std::vector<::std::string>> biomes);

    MCAPI void setIncludeTags(::std::optional<::std::vector<::std::string>> tags);

    MCFOLD void setTags(::std::vector<::std::string>& tagContainer, ::std::optional<::std::vector<::std::string>> tags);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
