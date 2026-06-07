#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class ILevel;
class NetworkIdentifier;
// clang-format on

struct CommandRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mCommand;
    ::ll::TypedStorage<8, 64, ::CommandOriginData> mOrigin;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>  mVersion;
    ::ll::TypedStorage<1, 1, bool>                 mInternalSource;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandRequestPacketPayload(::CommandContext& context, bool internalSource);

    MCAPI ::std::unique_ptr<::CommandContext> createCommandContext(
        ::NetworkIdentifier const&                  source,
        ::Bedrock::NonOwnerPointer<::ILevel> const& level,
        ::SubClientId                               senderSubId
    ) const;

    MCAPI ~CommandRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandContext& context, bool internalSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
