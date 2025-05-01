#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct TagsProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk45d9de;
    // NOLINTEND

public:
    // prevent constructor by default
    TagsProxy(TagsProxy const&);
    TagsProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromString(::std::string const& expression);

    MCNAPI ::BlockDescriptorSerializer::TagsProxy& operator=(::BlockDescriptorSerializer::TagsProxy const&);

    MCNAPI ::BlockDescriptorSerializer::TagsProxy& operator=(::BlockDescriptorSerializer::TagsProxy&&);

    MCNAPI ~TagsProxy();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
