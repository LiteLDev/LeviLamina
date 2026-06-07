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

    MCAPI RedactableString(::Bedrock::Safety::RedactableString&&);

    MCAPI RedactableString(::Bedrock::Safety::RedactableString const&);

    MCAPI explicit RedactableString(::std::string const& unredactedString);

    MCAPI RedactableString(::std::string&& unredactedString, ::std::optional<::std::string>&& redactedString);

    MCAPI void append(::Bedrock::Safety::RedactableString const& rhs);

    MCAPI void append(::std::string rhs);

#ifdef LL_PLAT_C
    MCAPI void clear();
#endif

    MCAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);

    MCAPI ::std::string const& get(bool redact) const;

    MCFOLD ::std::optional<::std::string> const& getRedacted() const;

    MCFOLD ::std::optional<::std::string>&& getRedacted();

    MCFOLD ::std::string const& getUnredacted() const;

    MCFOLD bool const hasRedacted() const;

    MCAPI ::Bedrock::Safety::RedactableString operator+(::std::string const& str) const;

    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string const& unredactedSuffix);

    MCAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);

    MCFOLD ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString const&);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(char const* unredactedCString);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::std::string&& unredactedString);

    MCAPI bool operator==(::Bedrock::Safety::RedactableString const& rhs) const;

    MCAPI void set(::std::string&& unredactedString);

    MCAPI void set(::std::string const& unredactedString);

    MCAPI void setRedacted(::std::optional<::std::string>&& redactedString);

    MCAPI ~RedactableString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Bedrock::Safety::RedactableString&&);

    MCAPI void* $ctor(::Bedrock::Safety::RedactableString const&);

    MCAPI void* $ctor(::std::string const& unredactedString);

    MCAPI void* $ctor(::std::string&& unredactedString, ::std::optional<::std::string>&& redactedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Safety
