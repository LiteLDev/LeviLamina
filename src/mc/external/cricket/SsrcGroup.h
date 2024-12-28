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
    MCAPI SsrcGroup(::cricket::SsrcGroup&&);

    MCAPI SsrcGroup(::cricket::SsrcGroup const&);

    MCAPI SsrcGroup(::std::string const&, ::std::vector<uint> const&);

    MCAPI ::cricket::SsrcGroup& operator=(::cricket::SsrcGroup const&);

    MCAPI ~SsrcGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::SsrcGroup&&);

    MCAPI void* $ctor(::cricket::SsrcGroup const&);

    MCAPI void* $ctor(::std::string const&, ::std::vector<uint> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
