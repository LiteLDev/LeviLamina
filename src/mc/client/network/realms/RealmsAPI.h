#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/IContentApi.h"
#include "mc/client/network/realms/ISubscriptionApi.h"
#include "mc/client/network/realms/IWorldApi.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace Realms { struct SubscriptionInfo; }
// clang-format on

class RealmsAPI : public ::std::enable_shared_from_this<::RealmsAPI>,
                  public ::Realms::IContentApi,
                  public ::Realms::ISubscriptionApi,
                  public ::Realms::IWorldApi {
public:
    // RealmsAPI inner types declare
    // clang-format off
    struct FeatureFlagPair;
    // clang-format on

    // RealmsAPI inner types define
    enum class JoinStatus : int {
        Fail       = 0,
        Unassigned = 1,
        Success    = 2,
    };

    enum class Compatibility : int {
        Compatible         = 0,
        CompatibleShowInfo = 1,
        Outdated           = 2,
        AlphaEnded         = 3,
        UserNotAllowed     = 4,
        Other              = 5,
    };

    enum class InviteAction : int {
        Add    = 0,
        Remove = 1,
        Op     = 2,
        DeOp   = 3,
    };

    struct FeatureFlagPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk5537ca;
        ::ll::UntypedStorage<1, 1>  mUnk1b5218;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureFlagPair& operator=(FeatureFlagPair const&);
        FeatureFlagPair(FeatureFlagPair const&);
        FeatureFlagPair();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk5b2bda;
    ::ll::UntypedStorage<4, 20>  mUnk482701;
    ::ll::UntypedStorage<1, 1>   mUnkce61bf;
    ::ll::UntypedStorage<4, 4>   mUnk3f2ea9;
    ::ll::UntypedStorage<8, 16>  mUnk17fb45;
    ::ll::UntypedStorage<8, 24>  mUnk7c6863;
    ::ll::UntypedStorage<4, 4>   mUnkbf951b;
    ::ll::UntypedStorage<4, 4>   mUnk8023bc;
    ::ll::UntypedStorage<1, 1>   mUnk93d45d;
    ::ll::UntypedStorage<8, 8>   mUnkebb3b5;
    ::ll::UntypedStorage<8, 16>  mUnk899812;
    ::ll::UntypedStorage<8, 32>  mUnkeb96e8;
    ::ll::UntypedStorage<8, 32>  mUnk7ec7da;
    ::ll::UntypedStorage<8, 32>  mUnkc5672a;
    ::ll::UntypedStorage<8, 16>  mUnk5121fd;
    ::ll::UntypedStorage<8, 16>  mUnk3dc1e8;
    ::ll::UntypedStorage<8, 64>  mUnkf80c4d;
    ::ll::UntypedStorage<8, 64>  mUnk8ae990;
    ::ll::UntypedStorage<8, 16>  mUnk434ed6;
    ::ll::UntypedStorage<8, 16>  mUnk879a51;
    ::ll::UntypedStorage<1, 1>   mUnk8b6fa0;
    ::ll::UntypedStorage<8, 80>  mUnkd7e02a;
    ::ll::UntypedStorage<8, 16>  mUnkfe7c75;
    ::ll::UntypedStorage<8, 16>  mUnk739a87;
    ::ll::UntypedStorage<8, 16>  mUnk3c792e;
    ::ll::UntypedStorage<8, 128> mUnka3d57a;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAPI& operator=(RealmsAPI const&);
    RealmsAPI(RealmsAPI const&);
    RealmsAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsAPI() /*override*/ = default;

    // vIndex: 1
    virtual void
    initializeWorld(::Realms::RealmId, ::std::string const&, ::std::string const&, ::std::function<void(::Realms::GenericStatus, ::Realms::FailureReason)>) /*override*/
        ;

    // vIndex: 2
    virtual void
        openWorld(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus)>, ::std::function<void(int)>) /*override*/
        ;

    // vIndex: 3
    virtual void
        closeWorld(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus)>, ::std::function<void(int)>) /*override*/
        ;

    // vIndex: 4
    virtual void
        resetWorld(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus)>, ::std::function<void(int)>) /*override*/
        ;

    // vIndex: 1
    virtual void
    applyContentOnRealm(::Realms::RealmId const, ::std::vector<::Realms::Content> const&, ::std::function<void(::Realms::GenericStatus)>) /*override*/
        ;

    // vIndex: 2
    virtual void
        fetchAppliedPacks(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus, ::std::vector<::Realms::Content>)>) /*override*/
        ;

    // vIndex: 3
    virtual void
    checkForExistingPack(::std::string const&, ::std::string const&, ::std::function<void(::Realms::GenericStatus, bool)>) /*override*/
        ;

    // vIndex: 1
    virtual void
        getSubscriptionDetails(::Realms::RealmId, ::std::function<void(::Realms::GenericStatus, ::Realms::SubscriptionInfo)>) /*override*/
        ;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
