#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SecureStorageKey;
// clang-format on

class ISecureStorageKeySystem {
public:
    // prevent constructor by default
    ISecureStorageKeySystem& operator=(ISecureStorageKeySystem const&);
    ISecureStorageKeySystem(ISecureStorageKeySystem const&);
    ISecureStorageKeySystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISecureStorageKeySystem();

    // vIndex: 1
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) = 0;

    // vIndex: 2
    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
