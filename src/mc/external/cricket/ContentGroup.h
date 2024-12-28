#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class ContentGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8493f8;
    ::ll::UntypedStorage<8, 24> mUnk1d7d34;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddContentName(::std::string_view);

    MCAPI ContentGroup(::cricket::ContentGroup&&);

    MCAPI explicit ContentGroup(::std::string const&);

    MCAPI ContentGroup(::cricket::ContentGroup const&);

    MCAPI ::std::string const* FirstContentName() const;

    MCAPI bool HasContentName(::std::string_view) const;

    MCAPI bool RemoveContentName(::std::string_view);

    MCAPI ::std::string ToString() const;

    MCAPI ::cricket::ContentGroup& operator=(::cricket::ContentGroup const&);

    MCAPI ~ContentGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::ContentGroup&&);

    MCAPI void* $ctor(::std::string const&);

    MCAPI void* $ctor(::cricket::ContentGroup const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
