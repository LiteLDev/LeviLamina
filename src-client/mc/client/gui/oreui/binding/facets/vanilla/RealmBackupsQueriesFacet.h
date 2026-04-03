#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelSummaryBindings.h"
#include "mc/client/realms/RealmsBackupsState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Realms { class RealmsBackups; }
// clang-format on

namespace OreUI {

class RealmBackupsQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmBackupsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsBackups>>                 mRealmsBackups;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 160, ::OreUI::LevelSummaryBindings>                             mLevelSummaryBindings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mRealmBackupsStateSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmBackupsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmBackupsQueriesFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmBackupsQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsBackups>                 realmsBackups,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCFOLD ::OreUI::LevelSummaryBindings& getCurrentWorldSummary();

    MCAPI ::Realms::RealmsBackupsState getRealmBackupsState();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::RealmsBackups>                 realmsBackups,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
