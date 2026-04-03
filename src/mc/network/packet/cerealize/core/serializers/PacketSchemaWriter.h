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
    virtual bool write(::cereal::NullType) /*override*/;

    virtual bool write(bool value) /*override*/;

    virtual bool write(schar) /*override*/;

    virtual bool write(uchar value) /*override*/;

    virtual bool write(short value) /*override*/;

    virtual bool write(ushort value) /*override*/;

    virtual bool write(int value) /*override*/;

    virtual bool write(uint value) /*override*/;

    virtual bool write(int64 value) /*override*/;

    virtual bool write(uint64 value) /*override*/;

    virtual bool write(float value) /*override*/;

    virtual bool write(double value) /*override*/;

    virtual bool write(::std::string_view const value) /*override*/;

    virtual bool write(::gsl::span<uchar const> view) /*override*/;

    virtual void writeAdditionalData(bool value) /*override*/;

    virtual void writeAdditionalData(uint value) /*override*/;

    virtual void writeAdditionalData(::std::string_view const value) /*override*/;

    virtual bool pushMember(::std::string_view const) /*override*/;

    virtual void popMember() /*override*/;

    virtual ::cereal::SchemaRWType openObject() /*override*/;

    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) /*override*/;

    virtual void close() /*override*/;

    virtual ~PacketSchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $write(::cereal::NullType);

    MCFOLD bool $write(bool value);

    MCFOLD bool $write(schar);

    MCFOLD bool $write(uchar value);

    MCFOLD bool $write(short value);

    MCFOLD bool $write(ushort value);

    MCFOLD bool $write(int value);

    MCFOLD bool $write(uint value);

    MCFOLD bool $write(int64 value);

    MCFOLD bool $write(uint64 value);

    MCFOLD bool $write(float value);

    MCFOLD bool $write(double value);

    MCFOLD bool $write(::std::string_view const value);

    MCFOLD bool $write(::gsl::span<uchar const> view);

    MCFOLD void $writeAdditionalData(bool value);

    MCFOLD void $writeAdditionalData(uint value);

    MCFOLD void $writeAdditionalData(::std::string_view const value);

    MCFOLD bool $pushMember(::std::string_view const);

    MCFOLD void $popMember();

    MCFOLD ::cereal::SchemaRWType $openObject();

    MCFOLD ::cereal::SchemaRWType $openArray(bool isDynamicExtent, uint64 length);

    MCFOLD void $close();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
