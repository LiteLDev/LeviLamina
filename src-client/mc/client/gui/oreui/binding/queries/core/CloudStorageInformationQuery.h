#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class CloudStorageInformationQuery : public ::OreUI::QueryBase<::OreUI::CloudStorageInformationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                 mUserManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>               mIsCloudStorageSupported;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>             mStorageSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>             mStorageUsed;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>      mStorageAvailableSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>              mStoragePercentage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>               mIsStorageFull;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>               mIsStorageLow;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudStorageInformationQuery& operator=(CloudStorageInformationQuery const&);
    CloudStorageInformationQuery(CloudStorageInformationQuery const&);
    CloudStorageInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudStorageInformationQuery() /*override*/ = default;

    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CloudStorageInformationQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
