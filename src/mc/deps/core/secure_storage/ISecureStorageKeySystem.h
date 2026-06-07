#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SecureStorageKey;
// clang-format on

class ISecureStorageKeySystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISecureStorageKeySystem() = default;

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) = 0;

    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
