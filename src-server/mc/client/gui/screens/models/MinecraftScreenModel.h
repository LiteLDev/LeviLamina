#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/IMinecraftScreenModel.h"
#include "mc/client/services/download/IDlcBatcher.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
class SkinHandle;
class StoreCatalogRepository;
struct PackIdVersion;
struct StoreDataDrivenScreenParams;
namespace Social { class IUserManager; }
// clang-format on

class MinecraftScreenModel : public ::IMinecraftScreenModel,
                             public ::IDlcBatcher,
                             public ::std::enable_shared_from_this<::MinecraftScreenModel> {
public:
    // MinecraftScreenModel inner types declare
    // clang-format off
    struct Context;
    // clang-format on

    // MinecraftScreenModel inner types define
    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkb9c806;
        ::ll::UntypedStorage<8, 8>  mUnk8d2695;
        ::ll::UntypedStorage<8, 24> mUnk81dcb0;
        ::ll::UntypedStorage<8, 24> mUnk5380eb;
        ::ll::UntypedStorage<8, 8>  mUnk3264d3;
        ::ll::UntypedStorage<8, 8>  mUnk960ac9;
        // NOLINTEND

    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();
    };

    enum class FriendsDrawerLocation : int {
        MainMenu   = 0,
        InGameMenu = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd4f179;
    ::ll::UntypedStorage<8, 24> mUnk5898df;
    ::ll::UntypedStorage<8, 24> mUnkb8f778;
    ::ll::UntypedStorage<8, 24> mUnk93fc9a;
    ::ll::UntypedStorage<8, 16> mUnk8c29e5;
    ::ll::UntypedStorage<8, 8>  mUnk3c4539;
    ::ll::UntypedStorage<1, 1>  mUnk5cfbc7;
    ::ll::UntypedStorage<8, 8>  mUnkaaaefd;
    ::ll::UntypedStorage<4, 4>  mUnkc9ba95;
    ::ll::UntypedStorage<8, 8>  mUnkb52f29;
    ::ll::UntypedStorage<8, 8>  mUnk8c3280;
    ::ll::UntypedStorage<8, 8>  mUnkb03986;
    ::ll::UntypedStorage<8, 8>  mUnk3c6d08;
    ::ll::UntypedStorage<8, 8>  mUnk20edbb;
    ::ll::UntypedStorage<8, 16> mUnk4e8c10;
    ::ll::UntypedStorage<8, 8>  mUnkd89614;
    ::ll::UntypedStorage<8, 16> mUnk866edf;
    ::ll::UntypedStorage<8, 8>  mUnk6a6185;
    ::ll::UntypedStorage<8, 16> mUnk41aee7;
    ::ll::UntypedStorage<8, 8>  mUnk430851;
    ::ll::UntypedStorage<8, 16> mUnka056cc;
    ::ll::UntypedStorage<4, 4>  mUnk921493;
    ::ll::UntypedStorage<1, 1>  mUnke8ca16;
    ::ll::UntypedStorage<1, 1>  mUnkf47178;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenModel& operator=(MinecraftScreenModel const&);
    MinecraftScreenModel(MinecraftScreenModel const&);
    MinecraftScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftScreenModel() /*override*/ = default;

    // vIndex: 9
    virtual void
    navigateToDisconnectScreen(::std::string const&, ::std::string const&, ::Connection::DisconnectFailReason);

    // vIndex: 8
    virtual void navigateToDisconnectScreen(::Connection::DisconnectFailReason);

    // vIndex: 5
    virtual bool tryNavigateToProfileScreen() /*override*/;

    // vIndex: 6
    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin() /*override*/;

    // vIndex: 4
    virtual void navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool) /*override*/;

    // vIndex: 7
    virtual bool leaveScreen(::std::string, bool) /*override*/;

    // vIndex: 10
    virtual bool isInGame() const;

    // vIndex: 11
    virtual bool isSelectedSkinInitialized() const;

    // vIndex: 1
    virtual ::SubClientId getSubClientId() const /*override*/;

    // vIndex: 12
    virtual bool platformTTSExists() const;

    // vIndex: 3
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const&) /*override*/;

    // vIndex: 2
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const&) /*override*/;

    // vIndex: 1
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const&) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() const;

    // vIndex: 14
    virtual float getStoreNetworkFailureTimeout() const;

    // vIndex: 15
    virtual bool isAdhocEnabled() const;

    // vIndex: 16
    virtual bool isDirty() const;

    // vIndex: 17
    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    // vIndex: 3
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const getUserManager() const /*override*/;

    // vIndex: 18
    virtual ::std::string const& getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
