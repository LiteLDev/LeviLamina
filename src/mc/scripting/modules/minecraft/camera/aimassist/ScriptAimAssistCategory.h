#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistCategory& operator=(ScriptAimAssistCategory const&);
    ScriptAimAssistCategory(ScriptAimAssistCategory const&);
    ScriptAimAssistCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const* _getCategoryDefinition() const;

    MCAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getBlockPriorities() const;

    MCAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getBlockTagPriorities() const;

    MCAPI ::Scripting::Result_deprecated<int> getDefaultBlockPriority() const;

    MCAPI ::Scripting::Result_deprecated<int> getDefaultEntityPriority() const;

    MCAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, int>> getEntityPriorities() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptAimAssistCategory&
    operator=(::ScriptModuleMinecraft::ScriptAimAssistCategory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
