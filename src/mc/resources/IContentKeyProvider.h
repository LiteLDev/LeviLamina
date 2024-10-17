#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IContentKeyProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IContentKeyProvider& operator=(IContentKeyProvider const&);
    IContentKeyProvider(IContentKeyProvider const&);
    IContentKeyProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentKeyProvider() = default;

    MCVAPI std::string getAlternateContentKey(class ContentIdentity const&) const;

    MCVAPI bool requireEncryptedReads() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI std::string getAlternateContentKey$(class ContentIdentity const&) const;

    MCAPI bool requireEncryptedReads$() const;

    // NOLINTEND
};
