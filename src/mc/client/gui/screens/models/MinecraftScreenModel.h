#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/IDlcBatcher.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
class SkinHandle;
class StoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class MinecraftScreenModel : public ::IDlcBatcher, public ::std::enable_shared_from_this<::MinecraftScreenModel> {
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
        ::ll::UntypedStorage<8, 24> mUnka54f50;
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
    ::ll::UntypedStorage<8, 24> mUnkd7b250;
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
    ::ll::UntypedStorage<8, 16> mUnk347846;
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

    // vIndex: 4
    virtual void
    navigateToDisconnectScreen(::std::string const&, ::std::string const&, ::Connection::DisconnectFailReason);

    // vIndex: 5
    virtual bool isInGame() const;

    // vIndex: 6
    virtual bool isSelectedSkinInitialized() const;

    // vIndex: 7
    virtual bool platformTTSExists() const;

    // vIndex: 3
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const&) /*override*/;

    // vIndex: 2
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const&) /*override*/;

    // vIndex: 1
    virtual ::IDlcBatchModel& getDlcBatchModel(::std::vector<::PackIdVersion> const&) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> getStoreCatalogRepository() const;

    // vIndex: 9
    virtual float getStoreNetworkFailureTimeout() const;

    // vIndex: 10
    virtual bool isAdhocEnabled() const;

    // vIndex: 11
    virtual bool isDirty() const;

    // vIndex: 12
    virtual ::SkinHandle const& getSelectedSkinHandle() const;

    // vIndex: 13
    virtual ::std::string const& getLastPoppedScreenName() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
