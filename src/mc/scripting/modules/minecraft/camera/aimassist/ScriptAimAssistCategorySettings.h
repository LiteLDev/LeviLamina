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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mEntityTypeFamilyPriorities;
    ::ll::TypedStorage<4, 4, int>                                       mDefaultEntityPriority;
    ::ll::TypedStorage<4, 4, int>                                       mDefaultBlockPriority;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
