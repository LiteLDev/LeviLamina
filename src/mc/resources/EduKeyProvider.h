#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentAccessibilityProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class EduKeyProvider : public ::IContentAccessibilityProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk7175c2;
    ::ll::UntypedStorage<8, 64> mUnk3ad3ad;
    // NOLINTEND

public:
    // prevent constructor by default
    EduKeyProvider& operator=(EduKeyProvider const&);
    EduKeyProvider(EduKeyProvider const&);
    EduKeyProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EduKeyProvider() /*override*/ = default;

    // vIndex: 6
    virtual bool canAccess(::ContentIdentity const&) const /*override*/;

    // vIndex: 1
    virtual ::std::string getContentKey(::ContentIdentity const&) const /*override*/;

    // vIndex: 2
    virtual ::std::string getAlternateContentKey(::ContentIdentity const&) const /*override*/;

    // vIndex: 4
    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    // vIndex: 5
    virtual void clearTempContentKeys() /*override*/;

    // vIndex: 3
    virtual bool requireEncryptedReads() const /*override*/;
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
