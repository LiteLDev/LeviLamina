#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

class INISchemaWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk6741b6;
    ::ll::UntypedStorage<8, 8>  mUnke426ee;
    // NOLINTEND

public:
    // prevent constructor by default
    INISchemaWriter& operator=(INISchemaWriter const&);
    INISchemaWriter(INISchemaWriter const&);
    INISchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool write(::cereal::NullType) /*override*/;

    virtual bool write(bool) /*override*/;

    virtual bool write(char) /*override*/;

    virtual bool write(uchar) /*override*/;

    virtual bool write(short) /*override*/;

    virtual bool write(ushort) /*override*/;

    virtual bool write(int) /*override*/;

    virtual bool write(uint) /*override*/;

    virtual bool write(int64) /*override*/;

    virtual bool write(uint64) /*override*/;

    virtual bool write(float) /*override*/;

    virtual bool write(double) /*override*/;

    virtual bool write(::std::string_view const) /*override*/;

    virtual void writeValidityFlag(bool) /*override*/;

    virtual void writeControlValue(uint) /*override*/;

    virtual bool pushMember(::std::string_view const) /*override*/;

    virtual void popMember() /*override*/;

    virtual ::cereal::SchemaRWType openObject() /*override*/;

    virtual ::cereal::SchemaRWType openArray(bool, uint64) /*override*/;

    virtual void close() /*override*/;

    virtual ~INISchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
