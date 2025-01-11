#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
class Tag;
namespace cereal { class PropertyReader; }
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
        MCAPI ~StackNode();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 13
    virtual bool pushMember(::std::string_view const memberName, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual void popMember() /*override*/;

    // vIndex: 15
    virtual bool openObject(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 16
    virtual bool openArray(uint64, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 17
    virtual void close() /*override*/;

    // vIndex: 0
    virtual ~NBTSchemaWriter() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NBTSchemaWriter();

    MCAPI bool _serializeTag(::std::unique_ptr<::Tag> tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $write(bool value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(char value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(uchar value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(short value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(ushort value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(int value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(uint value, ::cereal::PropertyReader const&);

    MCFOLD bool $write(int64, ::cereal::PropertyReader const&);

    MCFOLD bool $write(uint64, ::cereal::PropertyReader const&);

    MCAPI bool $write(float value, ::cereal::PropertyReader const&);

    MCAPI bool $write(double value, ::cereal::PropertyReader const&);

    MCAPI bool $write(::std::string_view const value, ::cereal::PropertyReader const&);

    MCAPI bool $pushMember(::std::string_view const memberName, ::cereal::PropertyReader const&);

    MCAPI void $popMember();

    MCAPI bool $openObject(::cereal::PropertyReader const&);

    MCAPI bool $openArray(uint64, ::cereal::PropertyReader const&);

    MCAPI void $close();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
