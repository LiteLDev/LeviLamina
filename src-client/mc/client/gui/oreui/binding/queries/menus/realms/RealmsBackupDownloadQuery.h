#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/realms/BackupDownloadState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsBackupDownloader; }
// clang-format on

namespace OreUI {

class RealmsBackupDownloadQuery : public ::OreUI::QueryBase<::OreUI::RealmsBackupDownloadQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsBackupDownloader>> mBackupDownloader;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::BackupDownloadState>>               mState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>                                       mProgress;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsBackupDownloadQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsBackupDownloadQuery(::OreUI::GameDependencies const& game);
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
