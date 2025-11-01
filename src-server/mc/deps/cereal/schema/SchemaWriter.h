#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SerializationTraitsSupport.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

struct SchemaWriter : public ::cereal::SerializationTraitsSupport {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual bool write(::cereal::NullType) = 0;

    // vIndex: 12
    virtual bool write(bool) = 0;

    // vIndex: 11
    virtual bool write(char) = 0;

    // vIndex: 10
    virtual bool write(uchar) = 0;

    // vIndex: 9
    virtual bool write(short) = 0;

    // vIndex: 8
    virtual bool write(ushort) = 0;

    // vIndex: 7
    virtual bool write(int) = 0;

    // vIndex: 6
    virtual bool write(uint) = 0;

    // vIndex: 5
    virtual bool write(int64) = 0;

    // vIndex: 4
    virtual bool write(uint64) = 0;

    // vIndex: 3
    virtual bool write(float) = 0;

    // vIndex: 2
    virtual bool write(double) = 0;

    // vIndex: 1
    virtual bool write(::std::string_view const) = 0;

    // vIndex: 14
    virtual void writeValidityFlag(bool) = 0;

    // vIndex: 15
    virtual void writeControlValue(uint) = 0;

    // vIndex: 16
    virtual bool pushMember(::std::string_view const) = 0;

    // vIndex: 17
    virtual void popMember() = 0;

    // vIndex: 18
    virtual ::cereal::SchemaRWType openObject() = 0;

    // vIndex: 19
    virtual ::cereal::SchemaRWType openArray(bool, uint64) = 0;

    // vIndex: 20
    virtual void close() = 0;

    // vIndex: 0
    virtual ~SchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
