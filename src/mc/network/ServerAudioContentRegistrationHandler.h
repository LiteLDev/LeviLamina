#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerAudioContentRegistry;
struct AudioContentRegistrationEntry;
struct NetworkIdentifierWithSubId;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerAudioContentRegistrationHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5a7e7d;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerAudioContentRegistrationHandler& operator=(ServerAudioContentRegistrationHandler const&);
    ServerAudioContentRegistrationHandler(ServerAudioContentRegistrationHandler const&);
    ServerAudioContentRegistrationHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handle(
        ::cereal::ReflectionCtx const&                 cerealContext,
        ::ServerAudioContentRegistry&                  serverAudioContentRegistry,
        ::NetworkIdentifierWithSubId const&            owner,
        ::std::vector<::AudioContentRegistrationEntry> audioContentRegistrationEntries
    ) const;
    // NOLINTEND
};
