#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategorySettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke5a89f;
    ::ll::UntypedStorage<8, 64> mUnkd241f9;
    ::ll::UntypedStorage<8, 64> mUnk198565;
    ::ll::UntypedStorage<4, 4>  mUnk45f75a;
    ::ll::UntypedStorage<4, 4>  mUnk21669d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistCategorySettings& operator=(ScriptAimAssistCategorySettings const&);
    ScriptAimAssistCategorySettings(ScriptAimAssistCategorySettings const&);
    ScriptAimAssistCategorySettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptAimAssistCategorySettings(::std::string name);

    MCAPI ::std::unordered_map<::std::string, int> getBlockPriorities() const;

    MCAPI ::std::unordered_map<::std::string, int> getEntityPriorities() const;

    MCAPI void setBlockPriorities(::std::unordered_map<::std::string, int> blockPriorities);

    MCAPI void setEntityPriorities(::std::unordered_map<::std::string, int> entityPriorities);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAimAssistCategorySettings> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
