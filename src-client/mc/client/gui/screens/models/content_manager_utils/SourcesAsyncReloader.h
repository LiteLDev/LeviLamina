#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/resources/interface/content_manager_utils/ISourcesAsyncReloader.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class TaskGroup;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace ContentManagerUtils {

class SourcesAsyncReloader : public ::ContentManagerUtils::ISourcesAsyncReloader,
                             public ::std::enable_shared_from_this<::ContentManagerUtils::SourcesAsyncReloader> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IContentManager>>      mWeakOwner;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>> mInitTask;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                              mOnSourcesReloadedAsyncPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SourcesAsyncReloader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SourcesAsyncReloader() /*override*/;

    virtual ::Bedrock::Threading::Async<void> reloadSourcesAsync(bool saveSources) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SourcesAsyncReloader(::std::unique_ptr<::TaskGroup> taskGroup);

    MCAPI ::Bedrock::Threading::Async<void> _queueReloadingSources(bool saveSources);

    MCAPI void
    setOwnerAndInitTask(::std::weak_ptr<::IContentManager> weakOwner, ::Bedrock::Threading::Async<void>&& initTask);

    MCAPI ::Bedrock::PubSub::Subscription
    subscribeToOnSourcesReloadedAsync(::std::function<void()>&& onSourcesReloadedAsyncCallback);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::TaskGroup> createDefaultTaskGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::TaskGroup> taskGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Threading::Async<void> $reloadSourcesAsync(bool saveSources);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ContentManagerUtils
