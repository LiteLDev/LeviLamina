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
    MCNAPI void AddContentName(::std::string_view content_name);

    MCNAPI ContentGroup(::cricket::ContentGroup&&);

    MCNAPI ContentGroup(::cricket::ContentGroup const&);

    MCNAPI explicit ContentGroup(::std::string const& semantics);

    MCNAPI ::std::string const* FirstContentName() const;

    MCNAPI bool HasContentName(::std::string_view content_name) const;

    MCNAPI bool RemoveContentName(::std::string_view content_name);

    MCNAPI ::std::string ToString() const;

    MCNAPI ::cricket::ContentGroup& operator=(::cricket::ContentGroup const&);

    MCNAPI ~ContentGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::ContentGroup&&);

    MCNAPI void* $ctor(::cricket::ContentGroup const&);

    MCNAPI void* $ctor(::std::string const& semantics);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
