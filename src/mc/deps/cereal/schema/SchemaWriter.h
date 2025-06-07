#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace cereal {

struct SchemaWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SchemaWriter() = default;

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
    virtual bool pushMember(::std::string_view const) = 0;

    // vIndex: 15
    virtual void popMember() = 0;

    // vIndex: 16
    virtual bool openObject() = 0;

    // vIndex: 17
    virtual bool openArray(uint64) = 0;

    // vIndex: 18
    virtual void close() = 0;

    // vIndex: 19
    virtual bool isSequenceWriter() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSequenceWriter() const;
    // NOLINTEND
};

} // namespace cereal
