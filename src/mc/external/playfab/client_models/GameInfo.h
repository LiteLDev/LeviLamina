#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GameInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfe521d;
    ::ll::UntypedStorage<8, 32> mUnk86ca13;
    ::ll::UntypedStorage<8, 32> mUnk6117f1;
    ::ll::UntypedStorage<4, 8>  mUnkf9ba95;
    ::ll::UntypedStorage<8, 16> mUnk14086d;
    ::ll::UntypedStorage<8, 32> mUnk825582;
    ::ll::UntypedStorage<4, 8>  mUnkd00f3c;
    ::ll::UntypedStorage<8, 16> mUnke2001a;
    ::ll::UntypedStorage<4, 8>  mUnk69d8ee;
    ::ll::UntypedStorage<4, 4>  mUnk9f42a8;
    ::ll::UntypedStorage<8, 32> mUnkfb5737;
    ::ll::UntypedStorage<8, 32> mUnkadf98a;
    ::ll::UntypedStorage<4, 8>  mUnk877465;
    ::ll::UntypedStorage<8, 32> mUnkb38c64;
    ::ll::UntypedStorage<8, 32> mUnk98f0c9;
    ::ll::UntypedStorage<8, 16> mUnka13afa;
    // NOLINTEND

public:
    // prevent constructor by default
    GameInfo& operator=(GameInfo const&);
    GameInfo(GameInfo const&);
    GameInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameInfo() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
