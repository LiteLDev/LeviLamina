#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkHandler;
namespace Scripting { struct EngineError; }
// clang-format on

class ScriptServerNetworkHandlerReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcd0992;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerNetworkHandlerReference& operator=(ScriptServerNetworkHandlerReference const&);
    ScriptServerNetworkHandlerReference(ScriptServerNetworkHandlerReference const&);
    ScriptServerNetworkHandlerReference();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptServerNetworkHandlerReference(
        ::std::function<::Bedrock::NonOwnerPointer<::ServerNetworkHandler>()>&& fetcher
    );

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> tryGet() const;

    MCNAPI ::nonstd::expected<::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler>, ::Scripting::EngineError>
    unwrap() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::function<::Bedrock::NonOwnerPointer<::ServerNetworkHandler>()>&& fetcher);
    // NOLINTEND
};
