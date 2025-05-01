#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SsrcGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk166636;
    ::ll::UntypedStorage<8, 24> mUnk8de361;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SsrcGroup(::cricket::SsrcGroup&&);

    MCNAPI SsrcGroup(::cricket::SsrcGroup const&);

    MCNAPI SsrcGroup(::std::string const&, ::std::vector<uint> const&);

    MCNAPI ::cricket::SsrcGroup& operator=(::cricket::SsrcGroup const&);

    MCNAPI ~SsrcGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::SsrcGroup&&);

    MCNAPI void* $ctor(::cricket::SsrcGroup const&);

    MCNAPI void* $ctor(::std::string const&, ::std::vector<uint> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
