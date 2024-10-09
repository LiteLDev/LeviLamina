#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
namespace cereal { struct SchemaWriter; }
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
        // prevent constructor by default
        StackNode& operator=(StackNode const&);
        StackNode(StackNode const&);
        StackNode();

    public:
        // NOLINTBEGIN
        MCAPI ~StackNode();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NBTSchemaWriter& operator=(NBTSchemaWriter const&);
    NBTSchemaWriter(NBTSchemaWriter const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBTSchemaWriter();

    // vIndex: 1
    virtual bool write(bool value, class cereal::PropertyReader const&);

    // vIndex: 2
    virtual bool write(schar value, class cereal::PropertyReader const&);

    // vIndex: 3
    virtual bool write(uchar value, class cereal::PropertyReader const&);

    // vIndex: 4
    virtual bool write(short value, class cereal::PropertyReader const&);

    // vIndex: 5
    virtual bool write(ushort value, class cereal::PropertyReader const&);

    // vIndex: 6
    virtual bool write(int value, class cereal::PropertyReader const&);

    // vIndex: 7
    virtual bool write(uint value, class cereal::PropertyReader const&);

    // vIndex: 8
    virtual bool write(int64, class cereal::PropertyReader const&);

    // vIndex: 9
    virtual bool write(uint64, class cereal::PropertyReader const&);

    // vIndex: 10
    virtual bool write(float value, class cereal::PropertyReader const&);

    // vIndex: 11
    virtual bool write(double value, class cereal::PropertyReader const&);

    // vIndex: 12
    virtual bool write(std::string_view value, class cereal::PropertyReader const&);

    // vIndex: 13
    virtual bool pushMember(std::string_view memberName, class cereal::PropertyReader const&);

    // vIndex: 14
    virtual void popMember();

    // vIndex: 15
    virtual bool openObject(class cereal::PropertyReader const&);

    // vIndex: 16
    virtual bool openArray(uint64, class cereal::PropertyReader const&);

    // vIndex: 17
    virtual void close();

    // vIndex: 18
    virtual bool isSequenceWriter() const;

    MCAPI NBTSchemaWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _serializeTag(std::unique_ptr<class Tag> tag);

    // NOLINTEND
};
