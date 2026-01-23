#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Poi {

class TagProvider {
public:
    // TagProvider inner types declare
    // clang-format off
    class Tag;
    // clang-format on

    // TagProvider inner types define
    class Tag {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk428c06;
        ::ll::UntypedStorage<8, 8> mUnkd1d583;
        ::ll::UntypedStorage<8, 8> mUnk7c361b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Tag& operator=(Tag const&);
        Tag(Tag const&);
        Tag();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk3ce2f8;
    ::ll::UntypedStorage<8, 72> mUnkb1da15;
    // NOLINTEND

public:
    // prevent constructor by default
    TagProvider& operator=(TagProvider const&);
    TagProvider(TagProvider const&);
    TagProvider();
};

} // namespace Poi
