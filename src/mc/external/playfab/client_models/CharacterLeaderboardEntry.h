#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CharacterLeaderboardEntry : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke502f3;
    ::ll::UntypedStorage<8, 32> mUnkc778be;
    ::ll::UntypedStorage<8, 32> mUnkf2205d;
    ::ll::UntypedStorage<8, 32> mUnk47016e;
    ::ll::UntypedStorage<8, 32> mUnk307e4d;
    ::ll::UntypedStorage<4, 4>  mUnk4b3068;
    ::ll::UntypedStorage<4, 4>  mUnkb4653b;
    // NOLINTEND

public:
    // prevent constructor by default
    CharacterLeaderboardEntry& operator=(CharacterLeaderboardEntry const&);
    CharacterLeaderboardEntry(CharacterLeaderboardEntry const&);
    CharacterLeaderboardEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CharacterLeaderboardEntry() /*override*/ = default;

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
