#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

struct ResolvedTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> identifier;
    ::ll::TypedStorage<8, 32, ::std::string> path;
    ::ll::TypedStorage<8, 32, ::std::string> uvSize;
    ::ll::TypedStorage<8, 32, ::std::string> uvScale;
    ::ll::TypedStorage<8, 32, ::std::string> nineSliceSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResolvedTextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace UI::Resources
