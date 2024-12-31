#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IEntitlement {
public:
    // prevent constructor by default
    IEntitlement& operator=(IEntitlement const&);
    IEntitlement(IEntitlement const&);
    IEntitlement();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntitlement() = default;

    // vIndex: 1
    virtual bool isLegacy() const = 0;

    // vIndex: 2
    virtual bool isValid() const = 0;

    // vIndex: 3
    virtual bool isOwned() const = 0;

    // vIndex: 4
    virtual bool hasExpired() const = 0;

    // vIndex: 5
    virtual uint quantityOwned() const = 0;

    // vIndex: 6
    virtual bool canUseLegacyKeyLookup() const = 0;

    // vIndex: 7
    virtual ::ContentIdentity const& getContentIdentity() const = 0;

    // vIndex: 8
    virtual ::std::string getContentKey() const = 0;

    // vIndex: 9
    virtual bool getIsOwnedFromSubscription() const = 0;

    // vIndex: 10
    virtual ::std::string getExpirationDate() const = 0;

    // vIndex: 11
    virtual ::std::string getSourceMarketplace() const = 0;

    // vIndex: 12
    virtual void markDeviceOwnership(::std::string const&) = 0;
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
