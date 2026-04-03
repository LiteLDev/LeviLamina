#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceAllowList.h"
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace OreUI { class AllowListPath; }
namespace OreUI { class AllowListProfileImage; }
namespace OreUI { class AllowListQRCode; }
namespace OreUI { struct ResourcePath; }
// clang-format on

namespace OreUI {

class ResourceAllowList : public ::OreUI::IResourceAllowList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>            mDataPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ResourcePath>>         mPaths;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                 mQRCodeTargets;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::ProfileImageOptions>> mProfileImages;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::Social::ProfileImageOptions, ::OreUI::IResourceHandler::Status>>
        mProfileImageStatusMap;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mNotifyProfileImageSubscribers;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceAllowList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::OreUI::AllowListPath getOrAddPath(::Core::Path path) /*override*/;

    virtual ::OreUI::AllowListQRCode getOrAddQRCode(::std::string target) /*override*/;

    virtual ::OreUI::AllowListProfileImage
    getOrAddProfileImage(::Social::ProfileImageOptions const& options) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    addProfileImageStateSubscriber(::std::function<void()> const& callback) /*override*/;

    virtual void setProfileImageStatus(
        ::Social::ProfileImageOptions const& options,
        ::OreUI::IResourceHandler::Status    status
    ) /*override*/;

    virtual ::OreUI::ProfileImageState getProfileImageState(::Social::ProfileImageOptions const& options) /*override*/;

    virtual ~ResourceAllowList() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourceAllowList(::Core::Path const& packagePath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& packagePath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::AllowListPath $getOrAddPath(::Core::Path path);

    MCAPI ::OreUI::AllowListQRCode $getOrAddQRCode(::std::string target);

    MCAPI ::OreUI::AllowListProfileImage $getOrAddProfileImage(::Social::ProfileImageOptions const& options);

    MCAPI ::Bedrock::PubSub::Subscription $addProfileImageStateSubscriber(::std::function<void()> const& callback);

    MCAPI void
    $setProfileImageStatus(::Social::ProfileImageOptions const& options, ::OreUI::IResourceHandler::Status status);

    MCAPI ::OreUI::ProfileImageState $getProfileImageState(::Social::ProfileImageOptions const& options);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
