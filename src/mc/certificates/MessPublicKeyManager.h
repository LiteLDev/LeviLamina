#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class MessPublicKeyManager {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string> getPublicKeys();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string>& mMessPublicKeys();

    MCAPI static ::Bedrock::Threading::Mutex& mPublicKeyMutex();
    // NOLINTEND
};
