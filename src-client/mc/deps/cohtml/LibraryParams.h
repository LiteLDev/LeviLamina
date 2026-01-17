#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/LibraryParamsWithExternalRenderingLibrary.h"
#include "mc/deps/renoir/CommonRenderingLibraryParams.h"

namespace cohtml {

struct LibraryParams : public ::cohtml::LibraryParamsWithExternalRenderingLibrary,
                       public ::renoir::CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk48fe4d;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryParams& operator=(LibraryParams const&);
    LibraryParams(LibraryParams const&);
    LibraryParams();
};

} // namespace cohtml
