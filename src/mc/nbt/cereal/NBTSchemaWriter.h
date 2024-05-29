#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaWriter.h"

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

    // vIndex: 1, symbol: ?write@NBTSchemaWriter@@UEAA_N_NAEBVPropertyReader@cereal@@@Z
    virtual bool write(bool, class cereal::PropertyReader const&);

    // vIndex: 2, symbol: ?write@NBTSchemaWriter@@UEAA_NCAEBVPropertyReader@cereal@@@Z
    virtual bool write(schar, class cereal::PropertyReader const&);

    // vIndex: 3, symbol: ?write@NBTSchemaWriter@@UEAA_NEAEBVPropertyReader@cereal@@@Z
    virtual bool write(uchar, class cereal::PropertyReader const&);

    // vIndex: 4, symbol: ?write@NBTSchemaWriter@@UEAA_NFAEBVPropertyReader@cereal@@@Z
    virtual bool write(short, class cereal::PropertyReader const&);

    // vIndex: 5, symbol: ?write@NBTSchemaWriter@@UEAA_NGAEBVPropertyReader@cereal@@@Z
    virtual bool write(ushort, class cereal::PropertyReader const&);

    // vIndex: 6, symbol: ?write@NBTSchemaWriter@@UEAA_NHAEBVPropertyReader@cereal@@@Z
    virtual bool write(int, class cereal::PropertyReader const&);

    // vIndex: 7, symbol: ?write@NBTSchemaWriter@@UEAA_NIAEBVPropertyReader@cereal@@@Z
    virtual bool write(uint, class cereal::PropertyReader const&);

    // vIndex: 8, symbol: ?write@NBTSchemaWriter@@UEAA_N_JAEBVPropertyReader@cereal@@@Z
    virtual bool write(int64, class cereal::PropertyReader const&);

    // vIndex: 9, symbol: ?write@NBTSchemaWriter@@UEAA_N_KAEBVPropertyReader@cereal@@@Z
    virtual bool write(uint64, class cereal::PropertyReader const&);

    // vIndex: 10, symbol: ?write@NBTSchemaWriter@@UEAA_NMAEBVPropertyReader@cereal@@@Z
    virtual bool write(float, class cereal::PropertyReader const&);

    // vIndex: 11, symbol: ?write@NBTSchemaWriter@@UEAA_NNAEBVPropertyReader@cereal@@@Z
    virtual bool write(double, class cereal::PropertyReader const&);

    // vIndex: 12, symbol:
    // ?write@NBTSchemaWriter@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPropertyReader@cereal@@@Z
    virtual bool write(std::string_view, class cereal::PropertyReader const&);

    // vIndex: 13, symbol:
    // ?pushMember@NBTSchemaWriter@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPropertyReader@cereal@@@Z
    virtual bool pushMember(std::string_view, class cereal::PropertyReader const&);

    // vIndex: 14, symbol: ?popMember@NBTSchemaWriter@@UEAAXXZ
    virtual void popMember();

    // vIndex: 15, symbol: ?openObject@NBTSchemaWriter@@UEAA_NAEBVPropertyReader@cereal@@@Z
    virtual bool openObject(class cereal::PropertyReader const&);

    // vIndex: 16, symbol: ?openArray@NBTSchemaWriter@@UEAA_N_KAEBVPropertyReader@cereal@@@Z
    virtual bool openArray(uint64, class cereal::PropertyReader const&);

    // vIndex: 17, symbol: ?close@NBTSchemaWriter@@UEAAXXZ
    virtual void close();

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
