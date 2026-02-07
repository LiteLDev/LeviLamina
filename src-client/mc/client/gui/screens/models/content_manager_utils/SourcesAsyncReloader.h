#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/resources/interface/content_manager_utils/ISourcesAsyncReloader.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
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
    ::ll::TypedStorage<8, 336, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SourcesAsyncReloader() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<void> reloadSourcesAsync(bool saveSources) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SourcesAsyncReloader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
