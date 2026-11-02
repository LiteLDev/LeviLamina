#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

class CompoundTagEditHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk76e80d;
    ::ll::UntypedStorage<8, 40>  mUnka643d6;
    ::ll::UntypedStorage<8, 112> mUnk753b1e;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&);
    CompoundTagEditHelper(CompoundTagEditHelper const&);
    CompoundTagEditHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void replaceWith(::std::string const& newTagName, ::std::unique_ptr<::Tag> newTag);
    // NOLINTEND
};
