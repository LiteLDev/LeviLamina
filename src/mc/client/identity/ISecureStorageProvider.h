#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SecureStorage;
// clang-format on

namespace Social {

class ISecureStorageProvider {
public:
    // prevent constructor by default
    ISecureStorageProvider& operator=(ISecureStorageProvider const&);
    ISecureStorageProvider(ISecureStorageProvider const&);
    ISecureStorageProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISecureStorageProvider() = default;

    // vIndex: 1
    virtual ::gsl::not_null<::std::shared_ptr<::SecureStorage>> getSecureStorage() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
