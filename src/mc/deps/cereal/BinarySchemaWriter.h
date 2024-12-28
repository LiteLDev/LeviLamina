#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

class BinarySchemaWriter : public ::cereal::SchemaWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk404173;
    ::ll::UntypedStorage<8, 24> mUnk3c7407;
    ::ll::UntypedStorage<8, 8>  mUnk8e06a2;
    ::ll::UntypedStorage<8, 8>  mUnk7d3b71;
    // NOLINTEND

public:
    // prevent constructor by default
    BinarySchemaWriter& operator=(BinarySchemaWriter const&);
    BinarySchemaWriter(BinarySchemaWriter const&);
    BinarySchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual bool write(bool, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 11
    virtual bool write(char, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 10
    virtual bool write(uchar, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 9
    virtual bool write(short, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 8
    virtual bool write(ushort, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 7
    virtual bool write(int, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 6
    virtual bool write(uint, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 5
    virtual bool write(int64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 4
    virtual bool write(uint64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 3
    virtual bool write(float, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 2
    virtual bool write(double, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 1
    virtual bool write(::std::string_view const, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 13
    virtual bool pushMember(::std::string_view const, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual void popMember() /*override*/;

    // vIndex: 15
    virtual bool openObject(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 16
    virtual bool openArray(uint64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 17
    virtual void close() /*override*/;

    // vIndex: 18
    virtual bool isSequenceWriter() const /*override*/;

    // vIndex: 0
    virtual ~BinarySchemaWriter() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $write(bool, ::cereal::PropertyReader const&);

    MCAPI bool $write(char, ::cereal::PropertyReader const&);

    MCAPI bool $write(uchar, ::cereal::PropertyReader const&);

    MCAPI bool $write(short, ::cereal::PropertyReader const&);

    MCAPI bool $write(ushort, ::cereal::PropertyReader const&);

    MCAPI bool $write(int, ::cereal::PropertyReader const&);

    MCAPI bool $write(uint, ::cereal::PropertyReader const&);

    MCAPI bool $write(int64, ::cereal::PropertyReader const&);

    MCAPI bool $write(uint64, ::cereal::PropertyReader const&);

    MCAPI bool $write(float, ::cereal::PropertyReader const&);

    MCAPI bool $write(double, ::cereal::PropertyReader const&);

    MCAPI bool $write(::std::string_view const, ::cereal::PropertyReader const&);

    MCAPI bool $pushMember(::std::string_view const, ::cereal::PropertyReader const&);

    MCAPI void $popMember();

    MCAPI bool $openObject(::cereal::PropertyReader const&);

    MCAPI bool $openArray(uint64, ::cereal::PropertyReader const&);

    MCAPI void $close();

    MCAPI bool $isSequenceWriter() const;
    // NOLINTEND
};

} // namespace cereal
