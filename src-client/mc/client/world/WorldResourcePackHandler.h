#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/IWorldResourcePackHandler.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/PendingPackActionHash.h"
#include "mc/client/world/PendingPackActionKey.h"
#include "mc/client/world/PendingPackActivation.h"
#include "mc/client/world/PendingPackRemoval.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IContentManager;
class IContentManagerContext;
class IContentTierManager;
class IEntitlementManager;
class IResourcePackRepository;
struct ContentItem;
struct LevelSummary;
struct PackIdVersion;
namespace World { class IWorldResourcePackDownloader; }
namespace World { struct PackCheckResult; }
namespace World { struct PackCollection; }
namespace World { struct PackDetails; }
namespace World { struct PackDownloadProgressInfo; }
namespace World { struct WorldPacks; }
// clang-format on

namespace World {

class WorldResourcePackHandler : public ::World::IWorldResourcePackHandler {
public:
    // WorldResourcePackHandler inner types declare
    // clang-format off
    struct Contexts;
    // clang-format on

    // WorldResourcePackHandler inner types define
    struct Contexts {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContext;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mGlobalContext;
        // NOLINTEND
    };

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                          mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>   mResourcePackRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>> mContentTierManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldResourcePackDownloader>>    mWorldResourcePackDownloader;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                      mContentAcquisition;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSourcesReloadedSubscription;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::World::WorldPacks>> mWorldPacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::World::PendingPackActionKey,
            ::std::variant<::World::PendingPackActivation, ::World::PendingPackRemoval>,
            ::World::PendingPackActionHash,
            ::std::equal_to<::World::PendingPackActionKey>>>
                                                mPendingPackActions;
    ::ll::TypedStorage<1, 1, bool>              mIsEditorWorld;
    ::ll::TypedStorage<8, 32, ::World::WorldID> mCurrentWorldID;
    ::ll::TypedStorage<1, 1, bool>              mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldResourcePackHandler& operator=(WorldResourcePackHandler const&);
    WorldResourcePackHandler(WorldResourcePackHandler const&);
    WorldResourcePackHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldResourcePackHandler() /*override*/ = default;

    virtual ::World::WorldPacks& loadPackContentForWorld(::LevelSummary const&) /*override*/;

    virtual ::World::PackCollection
    getWorldPackCollection(::LevelSummary const&, ::ContentType const, bool const) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    activatePack(::LevelSummary const&, ::ContentType const, ::std::string const&, bool const, bool const) /*override*/;

    virtual ::std::optional<::World::PackActionError> deactivatePack(
        ::LevelSummary const&,
        ::ContentType const,
        ::std::string const&,
        bool const,
        bool const
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError> continuePackActivation(::LevelSummary const&) /*override*/;

    virtual ::std::optional<::World::PackActionError> continuePackDeactivation(::LevelSummary const&) /*override*/;

    virtual void downloadPacks(
        ::LevelSummary const&,
        ::std::vector<::std::string> const&,
        ::std::function<void()>,
        ::std::function<void(::World::PackDownloadError)>
    ) /*override*/;

    virtual ::World::PackDownloadProgressInfo getDownloadPackProgress() /*override*/;

    virtual void getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)>) /*override*/;

    virtual void cancelDownloadPack() /*override*/;

    virtual void getPackSizes(
        ::LevelSummary const&,
        ::std::vector<::std::string> const&,
        ::std::function<void(uint64)>,
        ::std::function<void(::World::PackActionError)>
    ) /*override*/;

    virtual void savePacksData() /*override*/;

    virtual bool hasNonAddonBehaviorPacks(::LevelSummary const&) /*override*/;

    virtual bool hasBehaviorPacks(::LevelSummary const&) /*override*/;

    virtual bool hasLockedPacks(::LevelSummary const&) const /*override*/;

    virtual ::std::optional<::World::PackActionError> changePackPriority(
        ::LevelSummary const&,
        ::ContentType const,
        ::std::string const&,
        int const,
        int const
    ) /*override*/;

    virtual ::World::PackCheckResult checkDlc(::std::string const&, ::PackIdVersion const&, bool const) /*override*/;

    virtual ::std::vector<::World::PackDetails>
    getPackDetailsForWorld(::LevelSummary const&, ::std::vector<::std::string> const&) /*override*/;

    virtual bool getResourcePacksDirty() /*override*/;

    virtual void refreshPacksData() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
