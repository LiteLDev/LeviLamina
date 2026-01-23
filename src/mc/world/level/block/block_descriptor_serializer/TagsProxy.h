#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct TagsProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTagExpression;
    // NOLINTEND

public:
    // prevent constructor by default
    TagsProxy(TagsProxy const&);
    TagsProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BlockDescriptorSerializer::TagsProxy& operator=(::BlockDescriptorSerializer::TagsProxy&&);

    MCFOLD ::BlockDescriptorSerializer::TagsProxy& operator=(::BlockDescriptorSerializer::TagsProxy const&);

    MCAPI ~TagsProxy();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
