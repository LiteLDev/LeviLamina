#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AvailableCommandsPacket : public ::Packet {
public:
    // AvailableCommandsPacket inner types declare
    // clang-format off
    struct ChainedSubcommandData;
    struct CommandData;
    struct ConstrainedValueData;
    struct EnumData;
    struct OverloadData;
    struct ParamData;
    struct SoftEnumData;
    // clang-format on

    // AvailableCommandsPacket inner types define

    struct ChainedSubcommandDataValue {
        uint index;
        uint value;
    };

    struct ChainedSubcommandData {
    public:
        std::string                             name;
        std::vector<ChainedSubcommandDataValue> valueIndices;
    };

    struct CommandData {
    public:
        std::string                       name;           // 0
        std::string                       description;    // 32
        struct CommandFlag                flag;           // 64
        enum class CommandPermissionLevel perm;           // 66
        std::vector<OverloadData>         overloads;      // 72
        std::vector<int>                  chainedOffsets; // 96
        int                               aliasEnumIndex; // 120

    public:
        // NOLINTBEGIN
        // symbol: ??0CommandData@AvailableCommandsPacket@@QEAA@$$QEAU01@@Z
        MCAPI CommandData(struct AvailableCommandsPacket::CommandData&&);

        // symbol: ??1CommandData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~CommandData();

        // NOLINTEND
    };

    struct ConstrainedValueData {
    public:
        int                enumValueIndex;
        int                enumNameIndex;
        std::vector<uchar> indices;

    public:
        // NOLINTBEGIN
        // symbol: ??1ConstrainedValueData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~ConstrainedValueData();

        // NOLINTEND
    };

    struct EnumData {
    public:
        std::string       name;
        std::vector<uint> valueIndices;

    public:
        // NOLINTBEGIN
        // symbol: ??1EnumData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~EnumData();

        // NOLINTEND
    };

    struct OverloadData {
    public:
        std::vector<ParamData> datas;
        bool                   chained;

    public:
        // NOLINTBEGIN
        // symbol: ??1OverloadData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~OverloadData();

        // NOLINTEND
    };

    struct ParamData {
    public:
        std::string desc;
        uint        sym;
        bool        optional;
        uchar       paramOptions;

    public:
        // NOLINTBEGIN
        // symbol: ??1ParamData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~ParamData();

        // NOLINTEND
    };

    struct SoftEnumData {
    public:
        std::string              name;
        std::vector<std::string> values;

    public:
        // NOLINTBEGIN
        // symbol: ??1SoftEnumData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~SoftEnumData();

        // NOLINTEND
    };

    std::vector<std::string>           mEnumValues;       // 48
    std::vector<std::string>           mPostfixes;        // 48+24=72
    std::vector<EnumData>              mEnums;            // 48+24*2=96
    std::vector<std::string>           mSubcommandValues; // 48+24*3=120
    std::vector<ChainedSubcommandData> mSubcommands;      // 48+24*4=144
    std::vector<CommandData>           mCommands;         // 48+24*5=168
    std::vector<SoftEnumData>          mSoftEnums;        // 48+24*6=192
    std::vector<ConstrainedValueData>  mConstraints;      // 48+24*7=216

public:
    // prevent constructor by default
    AvailableCommandsPacket& operator=(AvailableCommandsPacket const&);
    AvailableCommandsPacket(AvailableCommandsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AvailableCommandsPacket@@UEAA@XZ
    virtual ~AvailableCommandsPacket();

    // vIndex: 1, symbol: ?getId@AvailableCommandsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@AvailableCommandsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@AvailableCommandsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8, symbol:
    // ?_read@AvailableCommandsPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0AvailableCommandsPacket@@QEAA@XZ
    MCAPI AvailableCommandsPacket();

    // symbol:
    // ??0AvailableCommandsPacket@@QEAA@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@00$$QEAV?$vector@UEnumData@AvailableCommandsPacket@@V?$allocator@UEnumData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@UChainedSubcommandData@AvailableCommandsPacket@@V?$allocator@UChainedSubcommandData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@UConstrainedValueData@AvailableCommandsPacket@@V?$allocator@UConstrainedValueData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@UCommandData@AvailableCommandsPacket@@V?$allocator@UCommandData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@USoftEnumData@AvailableCommandsPacket@@V?$allocator@USoftEnumData@AvailableCommandsPacket@@@std@@@2@@Z
    MCAPI
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<std::string> const&, std::vector<struct AvailableCommandsPacket::EnumData>&&, std::vector<struct AvailableCommandsPacket::ChainedSubcommandData>&&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&, std::vector<struct AvailableCommandsPacket::CommandData>&&, std::vector<struct AvailableCommandsPacket::SoftEnumData>&&);

    // NOLINTEND
};
