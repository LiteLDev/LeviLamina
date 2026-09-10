#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DeviceStorageInformationQuery : public ::OreUI::QueryBase<::OreUI::DeviceStorageInformationQuery>,
                                      public ::Core::StorageAreaStateListener,
                                      public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // DeviceStorageInformationQuery inner types declare
    // clang-format off
    class ThrottledUpdater;
    // clang-format on

    // DeviceStorageInformationQuery inner types define
    class ThrottledUpdater {
    public:
        // ThrottledUpdater inner types define
        using Duration = ::std::chrono::seconds;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<void()>>                mCallable;
        ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mDuration;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::OreUI::DeviceStorageInformationQuery::ThrottledUpdater> mStorageUpdater;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mDeleteContentSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsUsingExternalStorage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsUsingAppDataStorage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>                               mStorageSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>                               mStorageUsed;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                        mStorageAvailableSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mSupportsSizeQuery;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsStorageFull;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsStorageLow;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceStorageInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceStorageInformationQuery() /*override*/ = default;

    virtual void update(double) /*override*/;

    virtual void onLowDiskSpace(bool, uint64) /*override*/;

    virtual void onOutOfDiskSpace(bool, uint64) /*override*/;

    virtual void onExtendDiskSpace(
        bool,
        ::std::weak_ptr<::Core::FileStorageArea> const&,
        uint64,
        ::std::function<void()>
    ) /*override*/;

    virtual void onCriticalDiskError(bool, ::Core::LevelStorageState const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DeviceStorageInformationQuery(::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);

    MCAPI void $onLowDiskSpace(bool, uint64);

    MCAPI void $onOutOfDiskSpace(bool, uint64);

    MCAPI void
    $onExtendDiskSpace(bool, ::std::weak_ptr<::Core::FileStorageArea> const&, uint64, ::std::function<void()>);

    MCAPI void $onCriticalDiskError(bool, ::Core::LevelStorageState const&);
    // NOLINTEND
};

} // namespace OreUI
