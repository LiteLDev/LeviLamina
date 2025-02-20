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
    ::ll::UntypedStorage<8, 8>  mUnk76e80d;
    ::ll::UntypedStorage<8, 24> mUnkd306c3;
    ::ll::UntypedStorage<8, 24> mUnk7225c7;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&);
    CompoundTagEditHelper(CompoundTagEditHelper const&);
    CompoundTagEditHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void pushChild(::std::string const& tagName);

    MCAPI void replaceWith(::std::string const& newTagName, ::std::unique_ptr<::Tag> newTag);

    MCAPI ~CompoundTagEditHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
