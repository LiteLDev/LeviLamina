#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SetTitlePacketPayload.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerTitleCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             mSender;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                             mTitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>            mFilteredTitle;
    ::ll::TypedStorage<4, 4, ::SetTitlePacketPayload::TitleType>         mTitleType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerTitleCommandEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
