#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorPlayerCoroutineServiceProvider.h"
#include "mc/common/editor/Generator.h"
#include "mc/common/editor/Task.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { struct TaskHandle; }
namespace brstd { struct source_location; }
// clang-format on

namespace Editor::Services {

class EditorPlayerCoroutineService : public ::Editor::Services::IEditorService,
                                     public ::Editor::Services::EditorPlayerCoroutineServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfcb938;
    ::ll::UntypedStorage<8, 8> mUnk8cde99;
    ::ll::UntypedStorage<1, 1> mUnk9b767c;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPlayerCoroutineService& operator=(EditorPlayerCoroutineService const&);
    EditorPlayerCoroutineService(EditorPlayerCoroutineService const&);
    EditorPlayerCoroutineService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerCoroutineService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Editor::Coroutine::TaskHandle queue(
        ::std::string                                    name,
        ::Editor::Generator<::Editor::CoroutineStatus>&& coroutine,
        ::std::function<void(uint64, bool)>              onComplete,
        ::brstd::source_location                         creationSite
    ) /*override*/;

    virtual ::Editor::Coroutine::TaskHandle queueTask(
        ::std::string                                     name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&& task,
        ::std::function<void(uint64, bool)>               onComplete,
        ::brstd::source_location                          creationSite
    ) /*override*/;

    virtual bool cancel(::Editor::Coroutine::TaskHandle handle) /*override*/;

    virtual uint64 cancelAll() /*override*/;

    virtual ::Editor::CoroutineStatus const* getTaskStatus(::Editor::Coroutine::TaskHandle handle) const /*override*/;

    virtual ::std::string const* getTaskName(::Editor::Coroutine::TaskHandle handle) const /*override*/;

    virtual uint64 activeTaskCount() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::Coroutine::TaskHandle $queue(
        ::std::string                                    name,
        ::Editor::Generator<::Editor::CoroutineStatus>&& coroutine,
        ::std::function<void(uint64, bool)>              onComplete,
        ::brstd::source_location                         creationSite
    );

    MCNAPI ::Editor::Coroutine::TaskHandle $queueTask(
        ::std::string                                     name,
        ::Editor::Task<void, ::Editor::CoroutineStatus>&& task,
        ::std::function<void(uint64, bool)>               onComplete,
        ::brstd::source_location                          creationSite
    );

    MCNAPI bool $cancel(::Editor::Coroutine::TaskHandle handle);

    MCNAPI uint64 $cancelAll();

    MCNAPI ::Editor::CoroutineStatus const* $getTaskStatus(::Editor::Coroutine::TaskHandle handle) const;

    MCNAPI ::std::string const* $getTaskName(::Editor::Coroutine::TaskHandle handle) const;

    MCNAPI uint64 $activeTaskCount() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorPlayerCoroutineServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
