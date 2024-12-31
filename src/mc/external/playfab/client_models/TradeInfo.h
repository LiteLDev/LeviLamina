#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct TradeInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka3b784;
    ::ll::UntypedStorage<8, 32> mUnk9cc8b5;
    ::ll::UntypedStorage<8, 16> mUnk5ef15f;
    ::ll::UntypedStorage<8, 16> mUnk99f677;
    ::ll::UntypedStorage<8, 16> mUnka4e4ce;
    ::ll::UntypedStorage<8, 16> mUnk2011be;
    ::ll::UntypedStorage<8, 16> mUnk7605fd;
    ::ll::UntypedStorage<8, 16> mUnkcd50a9;
    ::ll::UntypedStorage<8, 32> mUnkd5939a;
    ::ll::UntypedStorage<8, 16> mUnkc10944;
    ::ll::UntypedStorage<8, 16> mUnka6a266;
    ::ll::UntypedStorage<4, 8>  mUnk72ea2c;
    ::ll::UntypedStorage<8, 32> mUnkd68ad9;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeInfo& operator=(TradeInfo const&);
    TradeInfo(TradeInfo const&);
    TradeInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TradeInfo() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
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

} // namespace PlayFab::ClientModels
