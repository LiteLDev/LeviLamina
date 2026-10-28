#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedLoadError.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace World { class IRecentlyPlayedStorePersistence; }
namespace World { struct RecentlyPlayedEntry; }
// clang-format on

namespace World {

class RecentlyPlayedStore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IRecentlyPlayedStorePersistence>> mPersistence;
    ::ll::TypedStorage<8, 8, uint64>                                                      mMaxEntryCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::RecentlyPlayedEntry>>                mEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::RecentlyPlayedLoadError>>            mLoadErrors;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mUpdatedPublisher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::span<::World::RecentlyPlayedEntry const> getEntries() const;
    // NOLINTEND
};

} // namespace World
