#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace ServerSoundRuntime { struct Definition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerSoundDefinitionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5d2794;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundDefinitionRegistry& operator=(ServerSoundDefinitionRegistry const&);
    ServerSoundDefinitionRegistry(ServerSoundDefinitionRegistry const&);
    ServerSoundDefinitionRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    loadFromPacks(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager const& resourcePackManager, bool betaApis);

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerSoundRuntime::Definition const>
    tryGet(::std::string const& soundEventName) const;
    // NOLINTEND
};
