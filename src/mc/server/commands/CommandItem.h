#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class ItemInstance;
// clang-format on

class CommandItem {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<2, 2, short> mVersion;
            ::ll::TypedStorage<1, 1, bool>  mOverrideAux;
            ::ll::TypedStorage<4, 4, int>   mId;
        };
        ::ll::TypedStorage<8, 8, uint64> mVersionId;
    };
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::ItemInstance createInstance(int count) const;

    MCAPI ::std::optional<::ItemInstance>
    createInstance(int count, int aux, ::CommandOutput& output, bool requireExactAux) const;
    // NOLINTEND
};
