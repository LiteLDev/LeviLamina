#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaReader.h"
#include "mc/deps/cereal/SchemaReaderState.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaReader; }
namespace cereal { struct SerializerTraits; }
// clang-format on

class NBTSchemaReader : public ::cereal::SchemaReader {
public:
    // prevent constructor by default
    NBTSchemaReader& operator=(NBTSchemaReader const&);
    NBTSchemaReader(NBTSchemaReader const&);
    NBTSchemaReader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isValid@NBTSchemaReader@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 2, symbol: ?isObject@NBTSchemaReader@@UEBA?AW4SchemaReaderState@cereal@@XZ
    virtual ::cereal::SchemaReaderState isObject() const;

    // vIndex: 3, symbol: ?isArray@NBTSchemaReader@@UEBA?AW4SchemaReaderState@cereal@@XZ
    virtual ::cereal::SchemaReaderState isArray() const;

    // vIndex: 4, symbol: ?asBool@NBTSchemaReader@@UEAA?AV?$optional@_N@std@@AEBUSerializerTraits@cereal@@@Z
    virtual std::optional<bool> asBool(struct cereal::SerializerTraits const&);

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?asFloat@NBTSchemaReader@@UEAA?AV?$optional@M@std@@AEBUSerializerTraits@cereal@@@Z
    virtual std::optional<float> asFloat(struct cereal::SerializerTraits const&);

    // vIndex: 14, symbol: ?asDouble@NBTSchemaReader@@UEAA?AV?$optional@N@std@@AEBUSerializerTraits@cereal@@@Z
    virtual std::optional<double> asDouble(struct cereal::SerializerTraits const&);

    // vIndex: 15, symbol:
    // ?asString@NBTSchemaReader@@UEAA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBUSerializerTraits@cereal@@@Z
    virtual std::optional<std::string> asString(struct cereal::SerializerTraits const&);

    // vIndex: 16, symbol: ?members@NBTSchemaReader@@UEAA_KAEBUSerializerTraits@cereal@@@Z
    virtual uint64 members(struct cereal::SerializerTraits const&);

    // vIndex: 17, symbol: ?length@NBTSchemaReader@@UEAA_KAEBUSerializerTraits@cereal@@@Z
    virtual uint64 length(struct cereal::SerializerTraits const&);

    // vIndex: 18, symbol:
    // ?pushMember@NBTSchemaReader@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUSerializerTraits@cereal@@@Z
    virtual bool pushMember(std::string const&, struct cereal::SerializerTraits const&);

    // vIndex: 19, symbol:
    // ?pushMember@NBTSchemaReader@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KAEBUSerializerTraits@cereal@@@Z
    virtual std::string pushMember(uint64, struct cereal::SerializerTraits const&);

    // vIndex: 20, symbol: ?pushElement@NBTSchemaReader@@UEAAX_KAEBUSerializerTraits@cereal@@@Z
    virtual void pushElement(uint64, struct cereal::SerializerTraits const&);

    // vIndex: 21, symbol: ?pop@NBTSchemaReader@@UEAAXAEBUSerializerTraits@cereal@@@Z
    virtual void pop(struct cereal::SerializerTraits const&);

    // vIndex: 22, symbol: ?isSequenceReader@SchemaReader@cereal@@UEBA_NXZ
    virtual bool isSequenceReader() const;

    // symbol: ?asInt16@NBTSchemaReader@@UEAA?AV?$optional@F@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<short> asInt16(struct cereal::SerializerTraits const&);

    // symbol: ?asInt32@NBTSchemaReader@@UEAA?AV?$optional@H@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<int> asInt32(struct cereal::SerializerTraits const&);

    // symbol: ?asInt64@NBTSchemaReader@@UEAA?AV?$optional@_J@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<int64> asInt64(struct cereal::SerializerTraits const&);

    // symbol: ?asInt8@NBTSchemaReader@@UEAA?AV?$optional@C@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<schar> asInt8(struct cereal::SerializerTraits const&);

    // symbol: ?asUInt16@NBTSchemaReader@@UEAA?AV?$optional@G@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<ushort> asUInt16(struct cereal::SerializerTraits const&);

    // symbol: ?asUInt32@NBTSchemaReader@@UEAA?AV?$optional@I@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<uint> asUInt32(struct cereal::SerializerTraits const&);

    // symbol: ?asUInt64@NBTSchemaReader@@UEAA?AV?$optional@_K@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<uint64> asUInt64(struct cereal::SerializerTraits const&);

    // symbol: ?asUInt8@NBTSchemaReader@@UEAA?AV?$optional@E@std@@AEBUSerializerTraits@cereal@@@Z
    MCVAPI std::optional<uchar> asUInt8(struct cereal::SerializerTraits const&);

    // symbol: ??1NBTSchemaReader@@UEAA@XZ
    MCVAPI ~NBTSchemaReader();

    // symbol: ??0NBTSchemaReader@@QEAA@V?$not_null@PEBVCompoundTag@@@gsl@@@Z
    MCAPI explicit NBTSchemaReader(gsl::not_null<class CompoundTag const*>);

    // NOLINTEND
};
