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
    MCNAPI void clear();
#endif

    MCNAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);

    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string const& unredactedSuffix);

    MCNAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);
#endif

    MCNAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString const&);

    MCNAPI ::Bedrock::Safety::RedactableString& operator=(char const* unredactedCString);

    MCAPI ::Bedrock::Safety::RedactableString& operator=(::std::string&& unredactedString);

    MCNAPI bool operator==(::Bedrock::Safety::RedactableString const& rhs) const;

    MCNAPI void set(::std::string&& unredactedString);

    MCNAPI void set(::std::string const& unredactedString);

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
