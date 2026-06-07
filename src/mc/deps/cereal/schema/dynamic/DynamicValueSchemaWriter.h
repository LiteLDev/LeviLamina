#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

class DynamicValueSchemaWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                                          mData;
    ::ll::TypedStorage<8, 8, uint64>                                                           mExpectedSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::cereal::DynamicValue>>> mStack;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool write(::cereal::NullType) /*override*/;

    virtual bool write(bool value) /*override*/;

    virtual bool write(schar value) /*override*/;

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

    virtual void writeAdditionalData(bool) /*override*/;

    virtual void writeAdditionalData(uint) /*override*/;

    virtual void writeAdditionalData(::std::string_view const) /*override*/;

    virtual bool pushMember(::std::string_view const value) /*override*/;

    virtual void popMember() /*override*/;

    virtual ::cereal::SchemaRWType openObject() /*override*/;

    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) /*override*/;

    virtual void close() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::cereal::DynamicValue& value();

    MCAPI bool write(::cereal::DynamicValue value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $write(::cereal::NullType);

    MCAPI bool $write(bool value);

    MCAPI bool $write(schar value);

    MCAPI bool $write(uchar value);

    MCAPI bool $write(short value);

    MCAPI bool $write(ushort value);

    MCAPI bool $write(int value);

    MCAPI bool $write(uint value);

    MCFOLD bool $write(int64 value);

    MCFOLD bool $write(uint64 value);

    MCAPI bool $write(float value);

    MCAPI bool $write(double value);

    MCAPI bool $write(::std::string_view const value);

    MCAPI bool $write(::gsl::span<uchar const> view);

    MCFOLD void $writeAdditionalData(bool);

    MCFOLD void $writeAdditionalData(uint);

    MCFOLD void $writeAdditionalData(::std::string_view const);

    MCAPI bool $pushMember(::std::string_view const value);

    MCAPI void $popMember();

    MCAPI ::cereal::SchemaRWType $openObject();

    MCAPI ::cereal::SchemaRWType $openArray(bool isDynamicExtent, uint64 length);

    MCAPI void $close();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
