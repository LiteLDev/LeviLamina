#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock::Safety {

class RedactableString {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string                  mUnredactedString;
    ::std::optional<::std::string> mRedactedString;
    // NOLINTEND

public:
    RedactableString()                                   = default;
    RedactableString& operator=(RedactableString const&) = default;
    RedactableString(RedactableString const&)            = default;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void append(::std::string rhs);

    MCAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);

    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string const& unredactedSuffix);

    MCAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::std::string&& unredactedString);

    MCAPI bool operator==(::Bedrock::Safety::RedactableString const& rhs) const;

    MCAPI void set(::std::string const& unredactedString);

    MCAPI void set(::std::string&& unredactedString);

    MCAPI void setRedacted(::std::optional<::std::string>&& redactedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Safety
