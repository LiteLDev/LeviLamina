#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PersonaClient;
// clang-format on

class IPersonaClientProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::NonOwnerPointer<::PersonaClient> tryGetPersonaClient() const = 0;
    // NOLINTEND
};
