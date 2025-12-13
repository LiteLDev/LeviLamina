#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

struct SortParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdd87b7;
    ::ll::UntypedStorage<4, 4> mUnk460254;
    // NOLINTEND

public:
    // prevent constructor by default
    SortParams& operator=(SortParams const&);
    SortParams(SortParams const&);
    SortParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C SortParams(::std::string const& sortByStr, ::std::string const& sortDirectionStr);

    MCNAPI_C ::std::string getSortByAsStr() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& sortByStr, ::std::string const& sortDirectionStr);
    // NOLINTEND
};

} // namespace catalog
