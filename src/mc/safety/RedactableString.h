#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock::Safety {

class RedactableString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mUnredactedString;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mRedactedString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RedactableString();

    MCAPI RedactableString(::Bedrock::Safety::RedactableString const&);

    MCAPI RedactableString(::Bedrock::Safety::RedactableString&&);

    MCAPI explicit RedactableString(::std::string const& unredactedString);

    MCAPI RedactableString(::std::string&& unredactedString, ::std::optional<::std::string>&& redactedString);

    MCAPI void append(::std::string rhs);

    MCAPI void append(::Bedrock::Safety::RedactableString const& rhs);

    MCAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);

    MCFOLD ::std::optional<::std::string> const& getRedacted() const;

    MCAPI ::std::optional<::std::string>&& getRedacted();

    MCFOLD ::std::string const& getUnredacted() const;

    MCFOLD bool const hasRedacted() const;

    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string unredactedSuffix);

    MCAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::std::string&& unredactedString);

    MCAPI bool operator==(::Bedrock::Safety::RedactableString const& rhs) const;

    MCAPI void set(::std::string const& unredactedString);

    MCAPI void set(::std::string&& unredactedString);

    MCAPI void setRedacted(::std::optional<::std::string>&& redactedString);

    MCAPI ~RedactableString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Bedrock::Safety::RedactableString const&);

    MCAPI void* $ctor(::Bedrock::Safety::RedactableString&&);

    MCAPI void* $ctor(::std::string const& unredactedString);

    MCAPI void* $ctor(::std::string&& unredactedString, ::std::optional<::std::string>&& redactedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Safety
