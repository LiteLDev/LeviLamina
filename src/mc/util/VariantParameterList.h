#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VariantParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk305e2c;
    ::ll::UntypedStorage<8, 8> mUnk600d04;
    ::ll::UntypedStorage<8, 8> mUnk3a6258;
    ::ll::UntypedStorage<8, 8> mUnk2518ff;
    ::ll::UntypedStorage<8, 8> mUnk4d051c;
    ::ll::UntypedStorage<8, 8> mUnk1f7f43;
    ::ll::UntypedStorage<8, 8> mUnk2a0892;
    ::ll::UntypedStorage<8, 8> mUnkcb5bc4;
    ::ll::UntypedStorage<8, 8> mUnkbcee5b;
    // NOLINTEND

public:
    // prevent constructor by default
    VariantParameterList& operator=(VariantParameterList const&);
    VariantParameterList(VariantParameterList const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VariantParameterList();

    MCAPI explicit operator ::VariantParameterListConst() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
