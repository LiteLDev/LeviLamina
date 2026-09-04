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
    // prevent constructor by default
    RedactableString();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RedactableString(::Bedrock::Safety::RedactableString const&);

    MCAPI explicit RedactableString(::std::string const& unredactedString);

#ifdef LL_PLAT_C
    MCAPI void clear();
#endif

    MCAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);

    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string const& unredactedSuffix);

    MCAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);
#endif

    MCFOLD ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString const&);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(char const* unredactedCString);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::std::string&& unredactedString);

    MCAPI bool operator==(::Bedrock::Safety::RedactableString const& rhs) const;

    MCAPI void set(::std::string&& unredactedString);

    MCAPI void set(::std::string const& unredactedString);

    MCAPI ~RedactableString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::Safety::RedactableString const&);

    MCAPI void* $ctor(::std::string const& unredactedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Safety
