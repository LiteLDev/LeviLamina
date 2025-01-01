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
    MCAPI CommandItem();

    MCAPI explicit CommandItem(uint64 versionId);

    MCAPI CommandItem(int id, short version, bool overrideAux);

    MCAPI ::std::optional<::ItemInstance>
    createInstance(int count, int aux, ::CommandOutput& output, bool requireExactAux) const;

    MCAPI int getId() const;

    MCAPI explicit operator bool() const;

    MCAPI explicit operator uint64() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(uint64 versionId);

    MCAPI void* $ctor(int id, short version, bool overrideAux);
    // NOLINTEND
};
