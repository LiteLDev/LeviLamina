#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ParseContextData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk7b6afb;
    ::ll::UntypedStorage<8, 144> mUnk938741;
    ::ll::UntypedStorage<4, 8>   mUnk83c6bc;
    ::ll::UntypedStorage<8, 32>  mUnk189c0a;
    // NOLINTEND

public:
    // prevent constructor by default
    ParseContextData& operator=(ParseContextData const&);
    ParseContextData(ParseContextData const&);
    ParseContextData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParseContextData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
