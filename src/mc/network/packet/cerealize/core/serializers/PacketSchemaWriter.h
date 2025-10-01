#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
namespace cereal { struct NullType; }
// clang-format on

class PacketSchemaWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BinaryStream&> mStream;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSchemaWriter& operator=(PacketSchemaWriter const&);
    PacketSchemaWriter(PacketSchemaWriter const&);
    PacketSchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual bool write(::cereal::NullType) /*override*/;

    // vIndex: 12
    virtual bool write(bool value) /*override*/;

    // vIndex: 11
    virtual bool write(char) /*override*/;

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
    virtual void writeValidityFlag(bool value) /*override*/;

    // vIndex: 15
    virtual void writeControlValue(uint value) /*override*/;

    // vIndex: 16
    virtual bool pushMember(::std::string_view const) /*override*/;

    // vIndex: 17
    virtual void popMember() /*override*/;

    // vIndex: 18
    virtual ::cereal::SchemaRWType openObject() /*override*/;

    // vIndex: 19
    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) /*override*/;

    // vIndex: 20
    virtual void close() /*override*/;

    // vIndex: 0
    virtual ~PacketSchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $write(::cereal::NullType);

    MCAPI bool $write(bool value);

    MCFOLD bool $write(char);

    MCAPI bool $write(uchar value);

    MCAPI bool $write(short value);

    MCAPI bool $write(ushort value);

    MCAPI bool $write(int value);

    MCAPI bool $write(uint value);

    MCAPI bool $write(int64 value);

    MCAPI bool $write(uint64 value);

    MCAPI bool $write(float value);

    MCAPI bool $write(double value);

    MCAPI bool $write(::std::string_view const value);

    MCAPI void $writeValidityFlag(bool value);

    MCAPI void $writeControlValue(uint value);

    MCFOLD bool $pushMember(::std::string_view const);

    MCFOLD void $popMember();

    MCFOLD ::cereal::SchemaRWType $openObject();

    MCAPI ::cereal::SchemaRWType $openArray(bool isDynamicExtent, uint64 length);

    MCFOLD void $close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
