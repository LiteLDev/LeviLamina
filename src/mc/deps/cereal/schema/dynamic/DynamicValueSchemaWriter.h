#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

class DynamicValueSchemaWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnke7aa60;
    ::ll::UntypedStorage<8, 24> mUnk29ce5e;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicValueSchemaWriter& operator=(DynamicValueSchemaWriter const&);
    DynamicValueSchemaWriter(DynamicValueSchemaWriter const&);
    DynamicValueSchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual bool write(::cereal::NullType) /*override*/;

    // vIndex: 12
    virtual bool write(bool value) /*override*/;

    // vIndex: 11
    virtual bool write(char value) /*override*/;

    // vIndex: 10
    virtual bool write(uchar value) /*override*/;

    // vIndex: 9
    virtual bool write(short value) /*override*/;

    // vIndex: 8
    virtual bool write(ushort value) /*override*/;

    // vIndex: 7
    virtual bool write(int value) /*override*/;

    // vIndex: 6
    virtual bool write(uint value) /*override*/;

    // vIndex: 5
    virtual bool write(int64 value) /*override*/;

    // vIndex: 4
    virtual bool write(uint64 value) /*override*/;

    // vIndex: 3
    virtual bool write(float value) /*override*/;

    // vIndex: 2
    virtual bool write(double value) /*override*/;

    // vIndex: 1
    virtual bool write(::std::string_view const value) /*override*/;

    // vIndex: 14
    virtual bool pushMember(::std::string_view const value) /*override*/;

    // vIndex: 15
    virtual void popMember() /*override*/;

    // vIndex: 16
    virtual bool openObject() /*override*/;

    // vIndex: 17
    virtual bool openArray(uint64 len) /*override*/;

    // vIndex: 18
    virtual void close() /*override*/;

    // vIndex: 0
    virtual ~DynamicValueSchemaWriter() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $write(::cereal::NullType);

    MCNAPI bool $write(bool value);

    MCNAPI bool $write(char value);

    MCNAPI bool $write(uchar value);

    MCNAPI bool $write(short value);

    MCNAPI bool $write(ushort value);

    MCNAPI bool $write(int value);

    MCNAPI bool $write(uint value);

    MCNAPI bool $write(int64 value);

    MCNAPI bool $write(uint64 value);

    MCNAPI bool $write(float value);

    MCNAPI bool $write(double value);

    MCNAPI bool $write(::std::string_view const value);

    MCNAPI bool $pushMember(::std::string_view const value);

    MCNAPI void $popMember();

    MCNAPI bool $openObject();

    MCNAPI bool $openArray(uint64 len);

    MCNAPI void $close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
