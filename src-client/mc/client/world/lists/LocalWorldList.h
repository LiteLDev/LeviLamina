#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IEntitlementManager;
class ILevelListCache;
class OptionRegistry;
class TrialManager;
struct LevelSummary;
// clang-format on

namespace World {

class LocalWorldList : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                     mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>  mEntitlementManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OptionRegistry>>                   mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mStorageOptionSubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>> mEntitlementChangeListener;
    ::ll::TypedStorage<1, 1, bool>                                                   mOtherStorageContainsWorlds;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasCompletedStorageCheck;
    ::ll::TypedStorage<4, 4, ::FileStorageDirectory>                                 mLastFileStorageDirectory;
    ::ll::TypedStorage<1, 1, bool const>                                             mIsEditorMode;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                   mLevelListCacheDirty;
    ::ll::TypedStorage<1, 1, bool>                                                   mAreTrialWorldsHidden;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelSummary>>                         mLocalWorldList;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldList& operator=(LocalWorldList const&);
    LocalWorldList(LocalWorldList const&);
    LocalWorldList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldList() /*override*/ = default;

    virtual void onLevelAdded(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type) /*override*/;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onSummaryUpdated(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldList(
        ::ILevelListCache&                                   levelListCache,
        ::std::shared_ptr<::OptionRegistry>                  options,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        bool                                                 isEditorMode
    );

    MCAPI void update(::TrialManager const& trialManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                   levelListCache,
        ::std::shared_ptr<::OptionRegistry>                  options,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        bool                                                 isEditorMode
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
