#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaWriter.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
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
        // symbol: ??1StackNode@NBTSchemaWriter@@QEAA@XZ
        MCAPI ~StackNode();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NBTSchemaWriter& operator=(NBTSchemaWriter const&);
    NBTSchemaWriter(NBTSchemaWriter const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NBTSchemaWriter@@UEAA@XZ
    virtual ~NBTSchemaWriter();

    // vIndex: 1, symbol: ?write@NBTSchemaWriter@@UEAA_N_NAEBUSerializerTraits@cereal@@@Z
    virtual bool write(bool, struct cereal::SerializerTraits const&);

    // vIndex: 2, symbol: ?write@NBTSchemaWriter@@UEAA_NCAEBUSerializerTraits@cereal@@@Z
    virtual bool write(schar, struct cereal::SerializerTraits const&);

    // vIndex: 3, symbol: ?write@NBTSchemaWriter@@UEAA_NEAEBUSerializerTraits@cereal@@@Z
    virtual bool write(uchar, struct cereal::SerializerTraits const&);

    // vIndex: 4, symbol: ?write@NBTSchemaWriter@@UEAA_NFAEBUSerializerTraits@cereal@@@Z
    virtual bool write(short, struct cereal::SerializerTraits const&);

    // vIndex: 5, symbol: ?write@NBTSchemaWriter@@UEAA_NGAEBUSerializerTraits@cereal@@@Z
    virtual bool write(ushort, struct cereal::SerializerTraits const&);

    // vIndex: 6, symbol: ?write@NBTSchemaWriter@@UEAA_NHAEBUSerializerTraits@cereal@@@Z
    virtual bool write(int, struct cereal::SerializerTraits const&);

    // vIndex: 7, symbol: ?write@NBTSchemaWriter@@UEAA_NIAEBUSerializerTraits@cereal@@@Z
    virtual bool write(uint, struct cereal::SerializerTraits const&);

    // vIndex: 8, symbol: ?write@NBTSchemaWriter@@UEAA_N_JAEBUSerializerTraits@cereal@@@Z
    virtual bool write(int64, struct cereal::SerializerTraits const&);

    // vIndex: 9, symbol: ?write@NBTSchemaWriter@@UEAA_N_KAEBUSerializerTraits@cereal@@@Z
    virtual bool write(uint64, struct cereal::SerializerTraits const&);

    // vIndex: 10, symbol: ?write@NBTSchemaWriter@@UEAA_NMAEBUSerializerTraits@cereal@@@Z
    virtual bool write(float, struct cereal::SerializerTraits const&);

    // vIndex: 11, symbol: ?write@NBTSchemaWriter@@UEAA_NNAEBUSerializerTraits@cereal@@@Z
    virtual bool write(double, struct cereal::SerializerTraits const&);

    // vIndex: 12, symbol:
    // ?write@NBTSchemaWriter@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSerializerTraits@cereal@@@Z
    virtual bool write(std::string const&, struct cereal::SerializerTraits const&);

    // vIndex: 13, symbol:
    // ?pushMember@NBTSchemaWriter@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSerializerTraits@cereal@@@Z
    virtual bool pushMember(std::string const&, struct cereal::SerializerTraits const&);

    // vIndex: 14, symbol: ?popMember@NBTSchemaWriter@@UEAAXXZ
    virtual void popMember();

    // vIndex: 15, symbol: ?openObject@NBTSchemaWriter@@UEAA_NAEBUSerializerTraits@cereal@@@Z
    virtual bool openObject(struct cereal::SerializerTraits const&);

    // vIndex: 16, symbol: ?openArray@NBTSchemaWriter@@UEAA_N_KAEBUSerializerTraits@cereal@@@Z
    virtual bool openArray(uint64, struct cereal::SerializerTraits const&);

    // vIndex: 17, symbol: ?close@NBTSchemaWriter@@UEAAXAEBUSerializerTraits@cereal@@@Z
    virtual void close(struct cereal::SerializerTraits const&);

    // vIndex: 18, symbol: ?isSequenceWriter@SchemaWriter@cereal@@UEBA_NXZ
    virtual bool isSequenceWriter() const;

    // symbol: ??0NBTSchemaWriter@@QEAA@XZ
    MCAPI NBTSchemaWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_serializeTag@NBTSchemaWriter@@AEAA_NV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z
    MCAPI bool _serializeTag(std::unique_ptr<class Tag> tag);

    // NOLINTEND
};
