#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/events/EventCoordinatorNoTracking.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
class ScriptDeferredFlushTracker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptDeferredEventCoordinator : public ::EventCoordinatorNoTracking<::ScriptDeferredEventListener> {
public:
    // ScriptDeferredEventCoordinator inner types declare
    // clang-format off
    struct DocumentableEventExecution;
    // clang-format on

    // ScriptDeferredEventCoordinator inner types define
    struct DocumentableEventExecution {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void (::ScriptDeferredEventCoordinator::*)(::ScriptDeferredFlushTracker&)>
            mExecuteEventsFn;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Scripting::ModuleDescriptor const&, ::Json::Value&)>>
            mDocumentationGenerationFn;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DocumentableEventExecution();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::ScriptDeferredFlushTracker&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
        mFlushCoroutinePublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDeferredEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDeferredEventCoordinator();

    MCAPI void _sendFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ScriptDeferredEventCoordinator::DocumentableEventExecution> const&
    sEventExecutionOrder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
