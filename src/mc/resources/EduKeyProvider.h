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
    virtual ~EduKeyProvider() /*override*/ = default;

    virtual bool canAccess(::ContentIdentity const&) const /*override*/;

    virtual ::std::string getContentKey(::ContentIdentity const&) const /*override*/;

    virtual ::std::string getAlternateContentKey(::ContentIdentity const&) const /*override*/;

    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) /*override*/;

    virtual void clearTempContentKeys() /*override*/;

    virtual bool requireEncryptedReads() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
