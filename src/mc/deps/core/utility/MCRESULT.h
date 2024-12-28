#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/MCCATEGORY.h"

struct MCRESULT {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mSuccess;
    ::ll::TypedStorage<1, 1, ::MCCATEGORY> mCategory;
    ::ll::TypedStorage<2, 2, ushort>       mCode;
    // NOLINTEND

public:
    // prevent constructor by default
    MCRESULT& operator=(MCRESULT const&);
    MCRESULT(MCRESULT const&);
    MCRESULT();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getFullCode() const;

    MCAPI bool isSuccess() const;

    MCAPI bool operator==(::MCRESULT const& other) const;
    // NOLINTEND
};
