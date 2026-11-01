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
        ::ll::TypedStorage<8, 8, void (ScriptDeferredEventCoordinator::*)(::ScriptDeferredFlushTracker&)>
            mExecuteEventsFn;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Scripting::ModuleDescriptor const&, ::Json::Value&)>>
            mDocumentationGenerationFn;
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
    MCNAPI void _sendFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void sendAllDeferredEvents();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ScriptDeferredEventCoordinator::DocumentableEventExecution> const&
    sEventExecutionOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
