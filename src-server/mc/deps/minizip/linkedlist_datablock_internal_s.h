#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct linkedlist_datablock_internal_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka21b4d;
    ::ll::UntypedStorage<4, 4> mUnk61a132;
    ::ll::UntypedStorage<4, 4> mUnk4849dd;
    ::ll::UntypedStorage<4, 4> mUnkb4b9e7;
    ::ll::UntypedStorage<1, 4080> mUnk9e2e83;
    // NOLINTEND

public:
    // prevent constructor by default
    linkedlist_datablock_internal_s& operator=(linkedlist_datablock_internal_s const&);
    linkedlist_datablock_internal_s(linkedlist_datablock_internal_s const&);
    linkedlist_datablock_internal_s();

};
