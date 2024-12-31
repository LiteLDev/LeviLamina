#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PlayerProfileModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk266a49;
    ::ll::UntypedStorage<8, 32> mUnk4df67d;
    ::ll::UntypedStorage<8, 16> mUnkf1cecd;
    ::ll::UntypedStorage<8, 16> mUnkd71131;
    ::ll::UntypedStorage<8, 16> mUnk8105ba;
    ::ll::UntypedStorage<8, 32> mUnk31ff4c;
    ::ll::UntypedStorage<8, 16> mUnk3c468b;
    ::ll::UntypedStorage<8, 16> mUnkdb5568;
    ::ll::UntypedStorage<8, 16> mUnk809f95;
    ::ll::UntypedStorage<8, 16> mUnk9b33f4;
    ::ll::UntypedStorage<4, 8>  mUnk77627c;
    ::ll::UntypedStorage<8, 32> mUnk85b027;
    ::ll::UntypedStorage<8, 32> mUnk598e54;
    ::ll::UntypedStorage<8, 16> mUnk78c3d8;
    ::ll::UntypedStorage<8, 16> mUnk43e34e;
    ::ll::UntypedStorage<8, 16> mUnkbf3f58;
    ::ll::UntypedStorage<8, 32> mUnk8ffb52;
    ::ll::UntypedStorage<4, 8>  mUnk9234f1;
    ::ll::UntypedStorage<8, 16> mUnk570ab9;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileModel& operator=(PlayerProfileModel const&);
    PlayerProfileModel(PlayerProfileModel const&);
    PlayerProfileModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerProfileModel() /*override*/ = default;

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
