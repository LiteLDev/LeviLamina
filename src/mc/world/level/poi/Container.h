#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct BlockRelPos; }
namespace Poi { struct Record; }
// clang-format on

namespace Poi::detail {

struct Container {
public:
    // Container inner types declare
    // clang-format off
    struct QueryIterator;
    // clang-format on

    // Container inner types define
    struct QueryIterator : public ::std::ranges::view_interface<::Poi::detail::Container::QueryIterator> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk167e38;
        ::ll::UntypedStorage<8, 8>  mUnk9ff917;
        ::ll::UntypedStorage<8, 64> mUnkcfc4ea;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueryIterator& operator=(QueryIterator const&);
        QueryIterator(QueryIterator const&);
        QueryIterator();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7d133d;
    // NOLINTEND

public:
    // prevent constructor by default
    Container& operator=(Container const&);
    Container(Container const&);
    Container();
};

} // namespace Poi::detail
