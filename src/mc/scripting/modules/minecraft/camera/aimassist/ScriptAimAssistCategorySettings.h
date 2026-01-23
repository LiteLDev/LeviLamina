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
    ::ll::UntypedStorage<8, 32> mUnke5a89f;
    ::ll::UntypedStorage<8, 64> mUnkd241f9;
    ::ll::UntypedStorage<8, 64> mUnk198565;
    ::ll::UntypedStorage<8, 64> mUnk12bc57;
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
    MCNAPI explicit ScriptAimAssistCategorySettings(::std::string name);

    MCNAPI ::std::unordered_map<::std::string, int> getBlockPriorities() const;

    MCNAPI ::std::unordered_map<::std::string, int> getBlockTagPriorities() const;

    MCNAPI ::std::unordered_map<::std::string, int> getEntityPriorities() const;

    MCNAPI void setBlockPriorities(::std::unordered_map<::std::string, int> blockPriorities);

    MCNAPI void setBlockTagPriorities(::std::unordered_map<::std::string, int> blockTagPriorities);

    MCNAPI void setEntityPriorities(::std::unordered_map<::std::string, int> entityPriorities);

    MCNAPI ~ScriptAimAssistCategorySettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
