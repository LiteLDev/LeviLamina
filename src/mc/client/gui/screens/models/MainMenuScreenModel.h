#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/IMainMenuScreenModel.h"
#include "mc/client/gui/screens/models/MinecraftScreenModel.h"
#include "mc/client/network/NetworkFilter.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IMinecraftEventing;
class StoreCatalogRepository;
struct WorldTemplateInfo;
namespace mce { class UUID; }
// clang-format on

class MainMenuScreenModel : public ::MinecraftScreenModel, public ::IMainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk91be37;
    ::ll::UntypedStorage<8, 8>   mUnk61a852;
    ::ll::UntypedStorage<8, 8>   mUnk76c977;
    ::ll::UntypedStorage<8, 16>  mUnkef369f;
    ::ll::UntypedStorage<8, 8>   mUnk52b71e;
    ::ll::UntypedStorage<8, 16>  mUnk8c0d7d;
    ::ll::UntypedStorage<8, 8>   mUnkb2c4db;
    ::ll::UntypedStorage<8, 24>  mUnk6e0902;
    ::ll::UntypedStorage<8, 8>   mUnk5d30f7;
    ::ll::UntypedStorage<8, 16>  mUnk8ace6f;
    // NOLINTEND

public:
    // prevent constructor by default
    MainMenuScreenModel& operator=(MainMenuScreenModel const&);
    MainMenuScreenModel(MainMenuScreenModel const&);
    MainMenuScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MainMenuScreenModel() /*override*/ = default;

    // vIndex: 1
    virtual void navigateToDlcProgressScreen(
        ::std::vector<::DlcId> const&,
        ::std::function<void(bool, bool)>,
        bool,
        bool,
        bool
    ) /*override*/;

    // vIndex: 4
    virtual void navigateToDisconnectScreen(
        ::std::string const&,
        ::std::string const&,
        ::Connection::DisconnectFailReason
    ) /*override*/;

    // vIndex: 13
    virtual ::std::string const& getLastPoppedScreenName() const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() const /*override*/;

    // vIndex: 3
    virtual bool doesPlatformSupportRealms() const /*override*/;

    // vIndex: 6
    virtual bool isSelectedSkinInitialized() const /*override*/;

    // vIndex: 5
    virtual void repopulateWorldTemplates() /*override*/;

    // vIndex: 6
    virtual ::WorldTemplateInfo const* findWorldTemplateByUUID(::std::vector<::mce::UUID> const&) const /*override*/;

    // vIndex: 4
    virtual bool isPackIdInRealmsPlus(::std::string const&) const /*override*/;

    // vIndex: 9
    virtual float getStoreNetworkFailureTimeout() const /*override*/;

    // vIndex: 5
    virtual bool isInGame() const /*override*/;

    // vIndex: 14
    virtual ::IMinecraftEventing& getMinecraftEventing() const;

    // vIndex: 10
    virtual bool isAdhocEnabled() const /*override*/;

    // vIndex: 2
    virtual bool isNetworkEnabled(::NetworkFilter) const /*override*/;

    // vIndex: 7
    virtual bool platformTTSExists() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
