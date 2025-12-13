#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IContentKeyProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentKeyProvider() /*override*/ = default;

    virtual ::std::string getContentKey(::ContentIdentity const&) const = 0;

    virtual ::std::string getAlternateContentKey(::ContentIdentity const&) const;

    virtual bool requireEncryptedReads() const;

    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const&) = 0;

    virtual void clearTempContentKeys() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getAlternateContentKey(::ContentIdentity const&) const;

    MCNAPI bool $requireEncryptedReads() const;


    // NOLINTEND
};
