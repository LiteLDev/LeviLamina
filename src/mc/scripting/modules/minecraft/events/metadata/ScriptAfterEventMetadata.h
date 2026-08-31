#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { struct IScriptAfterEventSignalBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAfterEventMetadata {
public:
    // ScriptAfterEventMetadata inner types define
    using EventBuilderHandle = ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>>>
        mEventBuilders;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptAfterEventList createSignals(::Scripting::WeakLifetimeScope& scope) const;

    MCAPI void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    ) const;

    MCAPI ~ScriptAfterEventMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
