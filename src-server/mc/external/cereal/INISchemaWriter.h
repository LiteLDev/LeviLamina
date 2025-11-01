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
    ::ll::UntypedStorage<8, 8> mUnke426ee;
    // NOLINTEND

public:
    // prevent constructor by default
    INISchemaWriter& operator=(INISchemaWriter const&);
    INISchemaWriter(INISchemaWriter const&);
    INISchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual bool write(::cereal::NullType) /*override*/;

    // vIndex: 12
    virtual bool write(bool) /*override*/;

    // vIndex: 11
    virtual bool write(char) /*override*/;

    // vIndex: 10
    virtual bool write(uchar) /*override*/;

    // vIndex: 9
    virtual bool write(short) /*override*/;

    // vIndex: 8
    virtual bool write(ushort) /*override*/;

    // vIndex: 7
    virtual bool write(int) /*override*/;

    // vIndex: 6
    virtual bool write(uint) /*override*/;

    // vIndex: 5
    virtual bool write(int64) /*override*/;

    // vIndex: 4
    virtual bool write(uint64) /*override*/;

    // vIndex: 3
    virtual bool write(float) /*override*/;

    // vIndex: 2
    virtual bool write(double) /*override*/;

    // vIndex: 1
    virtual bool write(::std::string_view const) /*override*/;

    // vIndex: 14
    virtual void writeValidityFlag(bool) /*override*/;

    // vIndex: 15
    virtual void writeControlValue(uint) /*override*/;

    // vIndex: 16
    virtual bool pushMember(::std::string_view const) /*override*/;

    // vIndex: 17
    virtual void popMember() /*override*/;

    // vIndex: 18
    virtual ::cereal::SchemaRWType openObject() /*override*/;

    // vIndex: 19
    virtual ::cereal::SchemaRWType openArray(bool, uint64) /*override*/;

    // vIndex: 20
    virtual void close() /*override*/;

    // vIndex: 0
    virtual ~INISchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
