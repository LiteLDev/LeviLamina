#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategorySettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mEntityPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mBlockPriorities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mBlockTagPriorities;
    ::ll::TypedStorage<4, 4, int>                                       mDefaultEntityPriority;
    ::ll::TypedStorage<4, 4, int>                                       mDefaultBlockPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistCategorySettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptAimAssistCategorySettings(::std::string name);

    MCAPI ::std::unordered_map<::std::string, int> getBlockPriorities() const;

    MCAPI ::std::unordered_map<::std::string, int> getBlockTagPriorities() const;

    MCAPI ::std::unordered_map<::std::string, int> getEntityPriorities() const;

    MCAPI void setBlockPriorities(::std::unordered_map<::std::string, int> blockPriorities);

    MCAPI void setBlockTagPriorities(::std::unordered_map<::std::string, int> blockTagPriorities);

    MCAPI void setEntityPriorities(::std::unordered_map<::std::string, int> entityPriorities);

    MCAPI ~ScriptAimAssistCategorySettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
