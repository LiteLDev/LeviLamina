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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RedactableString& operator=(RedactableString const&);
    RedactableString(RedactableString const&);
    RedactableString();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    RedactableString& operator=(RedactableString const&);
    RedactableString();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI RedactableString(::Bedrock::Safety::RedactableString const&);
#endif

    MCAPI RedactableString(::std::string&& unredactedString, ::std::optional<::std::string>&& redactedString);

    MCAPI void append(::std::string rhs);

#ifdef LL_PLAT_C
    MCAPI void clear();
#endif

    MCAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);

    MCAPI ::Bedrock::Safety::RedactableString operator+(::std::string const& str) const;

    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string const& unredactedSuffix);

    MCAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);

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
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Bedrock::Safety::RedactableString const&);
#endif

    MCAPI void* $ctor(::std::string&& unredactedString, ::std::optional<::std::string>&& redactedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Safety
