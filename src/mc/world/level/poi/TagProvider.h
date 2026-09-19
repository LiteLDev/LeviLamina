#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 16> mUnk223ba5;
        ::ll::UntypedStorage<8, 8>  mUnk7a422e;
        ::ll::UntypedStorage<2, 2>  mUnk536470;
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
    ::ll::UntypedStorage<8, 24> mUnkeaf59a;
    ::ll::UntypedStorage<8, 64> mUnkcf66d1;
    ::ll::UntypedStorage<8, 24> mUnk1f6218;
    // NOLINTEND

public:
    // prevent constructor by default
    TagProvider& operator=(TagProvider const&);
    TagProvider(TagProvider const&);
    TagProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Poi::TagProvider::Tag tag(::std::string_view name) const;
    // NOLINTEND
};

} // namespace Poi
