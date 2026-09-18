#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct NullType; }
// clang-format on

namespace Bedrock::Services {

class URLPathWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke73794;
    // NOLINTEND

public:
    // prevent constructor by default
    URLPathWriter& operator=(URLPathWriter const&);
    URLPathWriter(URLPathWriter const&);
    URLPathWriter();

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

    virtual bool write(::gsl::span<uchar const>) /*override*/;

    virtual void writeAdditionalData(bool) /*override*/;

    virtual void writeAdditionalData(uint) /*override*/;

    virtual void writeAdditionalData(::std::string_view const) /*override*/;

    virtual bool pushMember(::std::string_view const) /*override*/;

    virtual void popMember() /*override*/;

    virtual ::cereal::SchemaRWType openObject() /*override*/;

    virtual ::cereal::SchemaRWType openArray(bool, uint64) /*override*/;

    virtual void close() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $write(::cereal::NullType);

    MCNAPI bool $write(bool value);

    MCNAPI bool $write(schar value);

    MCNAPI bool $write(uchar value);

    MCNAPI bool $write(short value);

    MCNAPI bool $write(ushort value);

    MCNAPI bool $write(int value);

    MCNAPI bool $write(uint value);

    MCNAPI bool $write(int64 value);

    MCNAPI bool $write(uint64 value);

    MCNAPI bool $write(float value);

    MCNAPI bool $write(double value);

    MCNAPI bool $write(::std::string_view const value);

    MCNAPI bool $write(::gsl::span<uchar const>);

    MCNAPI void $writeAdditionalData(bool);

    MCNAPI void $writeAdditionalData(uint);

    MCNAPI void $writeAdditionalData(::std::string_view const);

    MCNAPI bool $pushMember(::std::string_view const);

    MCNAPI void $popMember();

    MCNAPI ::cereal::SchemaRWType $openObject();

    MCNAPI ::cereal::SchemaRWType $openArray(bool, uint64);

    MCNAPI void $close();


    // NOLINTEND
};

} // namespace Bedrock::Services
