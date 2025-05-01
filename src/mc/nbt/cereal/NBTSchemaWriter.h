#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
class Tag;
namespace cereal { class PropertyReader; }
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
    // vIndex: 13
    virtual bool write(::cereal::NullType, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 12
    virtual bool write(bool value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 11
    virtual bool write(char value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 10
    virtual bool write(uchar value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 9
    virtual bool write(short value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 8
    virtual bool write(ushort value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 7
    virtual bool write(int value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 6
    virtual bool write(uint value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 5
    virtual bool write(int64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 4
    virtual bool write(uint64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 3
    virtual bool write(float value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 2
    virtual bool write(double value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 1
    virtual bool write(::std::string_view const value, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual bool pushMember(::std::string_view const memberName, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 15
    virtual void popMember() /*override*/;

    // vIndex: 16
    virtual bool openObject(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 17
    virtual bool openArray(uint64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 18
    virtual void close() /*override*/;

    // vIndex: 0
    virtual ~NBTSchemaWriter() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _serializeTag(::std::unique_ptr<::Tag> tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $write(::cereal::NullType, ::cereal::PropertyReader const&);

    MCNAPI bool $write(bool value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(char value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(uchar value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(short value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(ushort value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(int value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(uint value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(int64, ::cereal::PropertyReader const&);

    MCNAPI bool $write(uint64, ::cereal::PropertyReader const&);

    MCNAPI bool $write(float value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(double value, ::cereal::PropertyReader const&);

    MCNAPI bool $write(::std::string_view const value, ::cereal::PropertyReader const&);

    MCNAPI bool $pushMember(::std::string_view const memberName, ::cereal::PropertyReader const&);

    MCNAPI void $popMember();

    MCNAPI bool $openObject(::cereal::PropertyReader const&);

    MCNAPI bool $openArray(uint64, ::cereal::PropertyReader const&);

    MCNAPI void $close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
