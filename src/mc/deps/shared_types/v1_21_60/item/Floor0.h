#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Floor0 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>      order;
    ::ll::TypedStorage<2, 2, ushort>     rate;
    ::ll::TypedStorage<2, 2, ushort>     bark_map_size;
    ::ll::TypedStorage<1, 1, uchar>      amplitude_bits;
    ::ll::TypedStorage<1, 1, uchar>      amplitude_offset;
    ::ll::TypedStorage<1, 1, uchar>      number_of_books;
    ::ll::TypedStorage<1, 16, uchar[16]> book_list;
    // NOLINTEND
};
