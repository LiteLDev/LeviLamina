#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

class ServerContentKeyProvider : public ::IContentAccessibilityProvider {
public:
    // prevent constructor by default
    ServerContentKeyProvider& operator=(ServerContentKeyProvider const&);
    ServerContentKeyProvider(ServerContentKeyProvider const&);
    ServerContentKeyProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerContentKeyProvider() = default;

    // vIndex: 1
    virtual std::string getContentKey(class ContentIdentity const& contentIdentity) const;

    // vIndex: 2
    virtual std::string getAlternateContentKey(class ContentIdentity const&) const;

    // vIndex: 3
    virtual bool requireEncryptedReads() const;

    // vIndex: 4
    virtual void setTempContentKeys(std::unordered_map<class ContentIdentity, std::string> const&);

    // vIndex: 5
    virtual void clearTempContentKeys();

    // vIndex: 6
    virtual bool canAccess(class ContentIdentity const& contentIdentity) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool canAccess$(class ContentIdentity const& contentIdentity) const;

    MCAPI void clearTempContentKeys$();

    MCAPI std::string getAlternateContentKey$(class ContentIdentity const&) const;

    MCAPI std::string getContentKey$(class ContentIdentity const& contentIdentity) const;

    MCAPI bool requireEncryptedReads$() const;

    MCAPI void setTempContentKeys$(std::unordered_map<class ContentIdentity, std::string> const&);

    // NOLINTEND
};
