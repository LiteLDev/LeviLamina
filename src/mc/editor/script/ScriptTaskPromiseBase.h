#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Coroutine { struct TaskHandle; }
namespace Editor::ScriptModule { struct ScriptTaskProgressQuery; }
namespace Editor::ScriptModule { struct ScriptTaskPromiseState; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTaskPromiseBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk381ad2;
    ::ll::UntypedStorage<8, 16> mUnk29cd83;
    ::ll::UntypedStorage<8, 64> mUnk1fce83;
    ::ll::UntypedStorage<8, 64> mUnk903d74;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTaskPromiseBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTaskPromiseBase(::Editor::ScriptModule::ScriptTaskPromiseBase const&);

    MCNAPI ScriptTaskPromiseBase(
        ::std::vector<::Editor::Coroutine::TaskHandle>                    taskHandles,
        ::std::shared_ptr<::Editor::ScriptModule::ScriptTaskPromiseState> state,
        ::std::function<bool(::Editor::Coroutine::TaskHandle)>            cancelTask,
        ::std::function<::Editor::ScriptModule::ScriptTaskProgressQuery(::Editor::Coroutine::TaskHandle)>
            getTaskProgress
    );

    MCNAPI float getProgress() const;

    MCNAPI ::Editor::ScriptModule::ScriptTaskPromiseBase& operator=(::Editor::ScriptModule::ScriptTaskPromiseBase&&);

    MCNAPI ::Editor::ScriptModule::ScriptTaskPromiseBase&
    operator=(::Editor::ScriptModule::ScriptTaskPromiseBase const&);

    MCNAPI ~ScriptTaskPromiseBase();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptTaskPromiseBase const&);

    MCNAPI void* $ctor(
        ::std::vector<::Editor::Coroutine::TaskHandle>                    taskHandles,
        ::std::shared_ptr<::Editor::ScriptModule::ScriptTaskPromiseState> state,
        ::std::function<bool(::Editor::Coroutine::TaskHandle)>            cancelTask,
        ::std::function<::Editor::ScriptModule::ScriptTaskProgressQuery(::Editor::Coroutine::TaskHandle)>
            getTaskProgress
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
