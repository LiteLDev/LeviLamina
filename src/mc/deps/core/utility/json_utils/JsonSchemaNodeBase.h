#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class JsonSchemaNodeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk689ef1;
    ::ll::UntypedStorage<8, 24> mUnk26697d;
    ::ll::UntypedStorage<8, 32> mUnkeb533d;
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

    // vIndex: 1
    virtual void printSchema(::std::string&, ::std::string const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JsonSchemaNodeBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonUtil
