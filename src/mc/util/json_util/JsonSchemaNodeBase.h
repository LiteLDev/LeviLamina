#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class JsonSchemaNodeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk689ef1;
    ::ll::UntypedStorage<8, 24> mUnk26697d;
    ::ll::UntypedStorage<1, 1>  mUnk2cf354;
    ::ll::UntypedStorage<8, 16> mUnk239121;
    ::ll::UntypedStorage<1, 1>  mUnk53cc41;
    ::ll::UntypedStorage<8, 48> mUnkc96539;
    ::ll::UntypedStorage<8, 8>  mUnk972890;
    ::ll::UntypedStorage<8, 8>  mUnk58f69a;
    ::ll::UntypedStorage<8, 32> mUnkf9df10;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonSchemaNodeBase& operator=(JsonSchemaNodeBase const&);
    JsonSchemaNodeBase(JsonSchemaNodeBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JsonSchemaNodeBase();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonSchemaNodeBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonUtil
