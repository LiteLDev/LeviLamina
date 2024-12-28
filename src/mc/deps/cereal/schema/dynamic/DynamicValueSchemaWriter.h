#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { class PropertyReader; }
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual bool write(bool value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 11
    virtual bool write(char value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 10
    virtual bool write(uchar value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 9
    virtual bool write(short value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 8
    virtual bool write(ushort value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 7
    virtual bool write(int value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 6
    virtual bool write(uint value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 5
    virtual bool write(int64 value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 4
    virtual bool write(uint64 value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 3
    virtual bool write(float value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 2
    virtual bool write(double value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 1
    virtual bool write(::std::string_view const value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 13
    virtual bool pushMember(::std::string_view const value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual void popMember() /*override*/;

    // vIndex: 15
    virtual bool openObject(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 16
    virtual bool openArray(uint64 len, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 17
    virtual void close() /*override*/;

    // vIndex: 0
    virtual ~DynamicValueSchemaWriter() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DynamicValueSchemaWriter();

    MCAPI ::cereal::DynamicValue& value();
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
    MCAPI bool $write(bool value, ::cereal::PropertyReader const&);

    MCAPI bool $write(char value, ::cereal::PropertyReader const&);

    MCAPI bool $write(uchar value, ::cereal::PropertyReader const&);

    MCAPI bool $write(short value, ::cereal::PropertyReader const&);

    MCAPI bool $write(ushort value, ::cereal::PropertyReader const&);

    MCAPI bool $write(int value, ::cereal::PropertyReader const&);

    MCAPI bool $write(uint value, ::cereal::PropertyReader const&);

    MCAPI bool $write(int64 value, ::cereal::PropertyReader const&);

    MCAPI bool $write(uint64 value, ::cereal::PropertyReader const&);

    MCAPI bool $write(float value, ::cereal::PropertyReader const&);

    MCAPI bool $write(double value, ::cereal::PropertyReader const&);

    MCAPI bool $write(::std::string_view const value, ::cereal::PropertyReader const&);

    MCAPI bool $pushMember(::std::string_view const value, ::cereal::PropertyReader const&);

    MCAPI void $popMember();

    MCAPI bool $openObject(::cereal::PropertyReader const&);

    MCAPI bool $openArray(uint64 len, ::cereal::PropertyReader const&);

    MCAPI void $close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
