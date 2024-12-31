#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PlayerProfileViewConstraints : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnka033ca;
    ::ll::UntypedStorage<1, 1> mUnk8d4652;
    ::ll::UntypedStorage<1, 1> mUnkea5001;
    ::ll::UntypedStorage<1, 1> mUnk209cb1;
    ::ll::UntypedStorage<1, 1> mUnkb47d7d;
    ::ll::UntypedStorage<1, 1> mUnkbc212e;
    ::ll::UntypedStorage<1, 1> mUnkbbf6d7;
    ::ll::UntypedStorage<1, 1> mUnkdb39c2;
    ::ll::UntypedStorage<1, 1> mUnk728c0e;
    ::ll::UntypedStorage<1, 1> mUnk37ff41;
    ::ll::UntypedStorage<1, 1> mUnk7bb6fa;
    ::ll::UntypedStorage<1, 1> mUnk5b528d;
    ::ll::UntypedStorage<1, 1> mUnk48e109;
    ::ll::UntypedStorage<1, 1> mUnkf50317;
    ::ll::UntypedStorage<1, 1> mUnk4529f6;
    ::ll::UntypedStorage<1, 1> mUnk975962;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerProfileViewConstraints& operator=(PlayerProfileViewConstraints const&);
    PlayerProfileViewConstraints(PlayerProfileViewConstraints const&);
    PlayerProfileViewConstraints();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerProfileViewConstraints() /*override*/ = default;

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
