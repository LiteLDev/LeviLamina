#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/events/BlockObject.h"

// auto generated forward declare list
// clang-format off
class Level;
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
    // prevent constructor by default
    ScriptCommandMessageEvent& operator=(ScriptCommandMessageEvent const&);
    ScriptCommandMessageEvent(ScriptCommandMessageEvent const&);
    ScriptCommandMessageEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCommandMessageEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
