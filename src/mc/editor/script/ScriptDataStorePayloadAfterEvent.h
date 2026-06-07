#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptDataStorePayloadAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk561622;
    ::ll::UntypedStorage<8, 32> mUnk2e8738;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStorePayloadAfterEvent& operator=(ScriptDataStorePayloadAfterEvent const&);
    ScriptDataStorePayloadAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDataStorePayloadAfterEvent(::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent const&);

    MCNAPI ScriptDataStorePayloadAfterEvent(::std::string const& dataTag, ::std::string const& payload);

    MCNAPI ::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent&
    operator=(::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptDataStorePayloadAfterEvent const&);

    MCNAPI void* $ctor(::std::string const& dataTag, ::std::string const& payload);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
