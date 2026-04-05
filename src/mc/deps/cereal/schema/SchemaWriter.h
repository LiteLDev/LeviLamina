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

    virtual bool write(bool value) = 0;

    virtual bool write(schar value) = 0;

    virtual bool write(uchar value) = 0;

    virtual bool write(short value) = 0;

    virtual bool write(ushort value) = 0;

    virtual bool write(int value) = 0;

    virtual bool write(uint value) = 0;

    virtual bool write(int64 value) = 0;

    virtual bool write(uint64 value) = 0;

    virtual bool write(float value) = 0;

    virtual bool write(double value) = 0;

    virtual bool write(::std::string_view const value) = 0;

    virtual bool write(::gsl::span<uchar const> view) = 0;

    virtual void writeAdditionalData(bool value) = 0;

    virtual void writeAdditionalData(uint value) = 0;

    virtual void writeAdditionalData(::std::string_view const value) = 0;

    virtual bool pushMember(::std::string_view const memberName) = 0;

    virtual void popMember() = 0;

    virtual ::cereal::SchemaRWType openObject() = 0;

    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) = 0;

    virtual void close() = 0;

    virtual ~SchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
