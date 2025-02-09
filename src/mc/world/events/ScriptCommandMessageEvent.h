#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
struct ActorUniqueID;
struct BlockObject;
// clang-format on

struct ScriptCommandMessageEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                    mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string>                    mMessageValue;
    ::ll::TypedStorage<8, 8, ::Level const&>                    mLevel;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mSourceActor;
    ::ll::TypedStorage<8, 32, ::std::optional<::BlockObject>>   mBlockObject;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mInitiator;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptCommandMessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
