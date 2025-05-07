#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class MessPublicKeyManager {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::string>& mMessPublicKeys();

    MCNAPI static ::Bedrock::Threading::Mutex& mPublicKeyMutex();
    // NOLINTEND
};
