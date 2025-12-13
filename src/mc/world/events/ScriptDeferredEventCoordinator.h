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
        ::ll::UntypedStorage<8, 8>  mUnk6fef1a;
        ::ll::UntypedStorage<8, 64> mUnkce87df;
        // NOLINTEND

    public:
        // prevent constructor by default
        DocumentableEventExecution& operator=(DocumentableEventExecution const&);
        DocumentableEventExecution(DocumentableEventExecution const&);
        DocumentableEventExecution();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DocumentableEventExecution();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    MCNAPI ScriptDeferredEventCoordinator();

    MCNAPI void _sendFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void _sendFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ScriptDeferredEventCoordinator::DocumentableEventExecution> const&
    sEventExecutionOrder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
