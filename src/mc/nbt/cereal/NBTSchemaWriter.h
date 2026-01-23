#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
class Tag;
namespace cereal { struct NullType; }
// clang-format on

class NBTSchemaWriter : public ::cereal::SchemaWriter {
public:
    // NBTSchemaWriter inner types declare
    // clang-format off
    struct StackNode;
    // clang-format on

    // NBTSchemaWriter inner types define
    struct StackNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk1473c9;
        ::ll::UntypedStorage<8, 32> mUnk935d05;
        // NOLINTEND

    public:
        // prevent constructor by default
        StackNode& operator=(StackNode const&);
        StackNode(StackNode const&);
        StackNode();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StackNode();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9702ee;
    // NOLINTEND

public:
    // prevent constructor by default
    NBTSchemaWriter& operator=(NBTSchemaWriter const&);
    NBTSchemaWriter(NBTSchemaWriter const&);
    NBTSchemaWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool write(::cereal::NullType) /*override*/;

    virtual bool write(bool value) /*override*/;

    virtual bool write(char value) /*override*/;

    virtual bool write(uchar value) /*override*/;

    virtual bool write(short value) /*override*/;

    virtual bool write(ushort value) /*override*/;

    virtual bool write(int value) /*override*/;

    virtual bool write(uint value) /*override*/;

    virtual bool write(int64) /*override*/;

    virtual bool write(uint64) /*override*/;

    virtual bool write(float value) /*override*/;

    virtual bool write(double value) /*override*/;

    virtual bool write(::std::string_view const value) /*override*/;

    virtual bool write(::gsl::span<uchar const> view) /*override*/;

    virtual void writeValidityFlag(bool) /*override*/;

    virtual void writeControlValue(uint) /*override*/;

    virtual bool pushMember(::std::string_view const memberName) /*override*/;

    virtual void popMember() /*override*/;

    virtual ::cereal::SchemaRWType openObject() /*override*/;

    virtual ::cereal::SchemaRWType openArray(bool isDynamicExtent, uint64 length) /*override*/;

    virtual void close() /*override*/;

    virtual ~NBTSchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _serializeTag(::std::unique_ptr<::Tag> tag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $write(::cereal::NullType);

    MCNAPI bool $write(bool value);

    MCNAPI bool $write(char value);

    MCNAPI bool $write(uchar value);

    MCNAPI bool $write(short value);

    MCNAPI bool $write(ushort value);

    MCNAPI bool $write(int value);

    MCNAPI bool $write(uint value);

    MCNAPI bool $write(int64);

    MCNAPI bool $write(uint64);

    MCNAPI bool $write(float value);

    MCNAPI bool $write(double value);

    MCNAPI bool $write(::std::string_view const value);

    MCNAPI bool $write(::gsl::span<uchar const> view);

    MCNAPI void $writeValidityFlag(bool);

    MCNAPI void $writeControlValue(uint);

    MCNAPI bool $pushMember(::std::string_view const memberName);

    MCNAPI void $popMember();

    MCNAPI ::cereal::SchemaRWType $openObject();

    MCNAPI ::cereal::SchemaRWType $openArray(bool isDynamicExtent, uint64 length);

    MCNAPI void $close();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
