#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk56d106;
    ::ll::UntypedStorage<8, 32> mUnk4c8cdd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistCategory& operator=(ScriptAimAssistCategory const&);
    ScriptAimAssistCategory(ScriptAimAssistCategory const&);
    ScriptAimAssistCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const* _getCategoryDefinition() const;

    MCNAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getBlockPriorities() const;

    MCNAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getBlockTagPriorities() const;

    MCNAPI ::Scripting::Result_deprecated<int> getDefaultBlockPriority() const;

    MCNAPI ::Scripting::Result_deprecated<int> getDefaultEntityPriority() const;

    MCNAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getEntityPriorities() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptAimAssistCategory&
    operator=(::ScriptModuleMinecraft::ScriptAimAssistCategory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
