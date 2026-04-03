#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace OreUI {

class DeviceStorageInformationQuery : public ::OreUI::QueryBase<::OreUI::DeviceStorageInformationQuery>,
                                      public ::Core::StorageAreaStateListener {
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
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::FileStorageDirectory>>               mStorageLocation;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>                               mStorageSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>                               mStorageUsed;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                        mStorageAvailableSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mSupportsSizeQuery;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsStorageFull;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                 mIsStorageLow;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceStorageInformationQuery() /*override*/ = default;

    virtual void update(double timestampMs) /*override*/;

    virtual void onLowDiskSpace(bool bSet) /*override*/;

    virtual void onOutOfDiskSpace(bool bSet) /*override*/;

    virtual void onExtendDiskSpace(
        bool                                            bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& fileStorageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    ) /*override*/;

    virtual void onCriticalDiskError(bool bSet, ::Core::LevelStorageState const& errorCode) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
