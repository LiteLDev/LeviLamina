#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
// clang-format on

namespace ServerIdentityKeyStorage {
// functions
// NOLINTBEGIN
MCNAPI bool deleteServerIdentityKey(::std::string const& keyPath);

MCNAPI ::std::string const& getDefaultServerIdentityKeyPath();

MCNAPI bool hasSavedServerIdentityKey(::std::string const& keyPath);

MCNAPI ::std::shared_ptr<::PrivateKeyManager> loadOrCreateServerIdentityKey(::std::string const& keyPath);

MCNAPI bool saveServerIdentityKey(::PrivateKeyManager const& keyManager, ::std::string const& keyPath);
// NOLINTEND

} // namespace ServerIdentityKeyStorage
