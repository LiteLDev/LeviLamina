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
    virtual bool write(::cereal::NullType) = 0;

    virtual bool write(bool) = 0;

    virtual bool write(schar) = 0;

    virtual bool write(uchar) = 0;

    virtual bool write(short) = 0;

    virtual bool write(ushort) = 0;

    virtual bool write(int) = 0;

    virtual bool write(uint) = 0;

    virtual bool write(int64) = 0;

    virtual bool write(uint64) = 0;

    virtual bool write(float) = 0;

    virtual bool write(double) = 0;

    virtual bool write(::std::string_view const) = 0;

    virtual bool write(::gsl::span<uchar const>) = 0;

    virtual void writeValidityFlag(bool) = 0;

    virtual void writeControlValue(uint) = 0;

    virtual bool pushMember(::std::string_view const) = 0;

    virtual void popMember() = 0;

    virtual ::cereal::SchemaRWType openObject() = 0;

    virtual ::cereal::SchemaRWType openArray(bool, uint64) = 0;

    virtual void close() = 0;

    virtual ~SchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
