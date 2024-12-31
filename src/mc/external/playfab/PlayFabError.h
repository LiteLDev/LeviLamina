#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab {

struct PlayFabError : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk61f837;
    ::ll::UntypedStorage<8, 32> mUnk61f5f6;
    ::ll::UntypedStorage<4, 4>  mUnkfba53c;
    ::ll::UntypedStorage<8, 32> mUnk440f0f;
    ::ll::UntypedStorage<8, 32> mUnk60430e;
    ::ll::UntypedStorage<8, 16> mUnk47d34d;
    ::ll::UntypedStorage<8, 16> mUnkdb3878;
    ::ll::UntypedStorage<8, 32> mUnk81c4fa;
    ::ll::UntypedStorage<8, 16> mUnke84ddc;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabError& operator=(PlayFabError const&);
    PlayFabError(PlayFabError const&);
    PlayFabError();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;

    // vIndex: 0
    virtual ~PlayFabError() /*override*/ = default;
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

} // namespace PlayFab
