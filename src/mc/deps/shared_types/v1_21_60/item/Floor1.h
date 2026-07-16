#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Floor1 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>           partitions;
    ::ll::TypedStorage<1, 32, uchar[32]>      partition_class_list;
    ::ll::TypedStorage<1, 16, uchar[16]>      class_dimensions;
    ::ll::TypedStorage<1, 16, uchar[16]>      class_subclasses;
    ::ll::TypedStorage<1, 16, uchar[16]>      class_masterbooks;
    ::ll::TypedStorage<2, 256, short[16][8]>  subclass_books;
    ::ll::TypedStorage<2, 500, ushort[250]>   Xlist;
    ::ll::TypedStorage<1, 250, uchar[250]>    sorted_order;
    ::ll::TypedStorage<1, 500, uchar[250][2]> neighbors;
    ::ll::TypedStorage<1, 1, uchar>           floor1_multiplier;
    ::ll::TypedStorage<1, 1, uchar>           rangebits;
    ::ll::TypedStorage<4, 4, int>             values;
    // NOLINTEND
};
