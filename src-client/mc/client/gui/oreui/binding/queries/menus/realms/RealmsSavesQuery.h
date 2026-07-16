#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class WorldBackupData; }
namespace Realms { class RealmsSavesManager; }
// clang-format on

namespace OreUI {

class RealmsSavesQuery : public ::OreUI::QueryBase<::OreUI::RealmsSavesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSavesManager>> mRealmsSavesManager;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::WorldBackupData, ::std::allocator<::OreUI::WorldBackupData>>>
        mManualBackups;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::WorldBackupData, ::std::allocator<::OreUI::WorldBackupData>>>
                                                               mAutomaticBackups;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>       mStorageBytesUsed;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>       mStorageBytesTotal;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>>       mActiveWorldSizeBytes;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mBackupListChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mActiveWorldSizeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSavesQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsSavesQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
