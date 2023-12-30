#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    struct ChainedSubcommandData {
    public:
        // prevent constructor by default
        ChainedSubcommandData& operator=(ChainedSubcommandData const&);
        ChainedSubcommandData(ChainedSubcommandData const&);
        ChainedSubcommandData();
    };

    struct CommandData {
    public:
        // prevent constructor by default
        CommandData& operator=(CommandData const&);
        CommandData(CommandData const&);
        CommandData();

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
        // prevent constructor by default
        ConstrainedValueData& operator=(ConstrainedValueData const&);
        ConstrainedValueData(ConstrainedValueData const&);
        ConstrainedValueData();

    public:
        // NOLINTBEGIN
        // symbol: ??1ConstrainedValueData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~ConstrainedValueData();

        // NOLINTEND
    };

    struct EnumData {
    public:
        // prevent constructor by default
        EnumData& operator=(EnumData const&);
        EnumData(EnumData const&);
        EnumData();

    public:
        // NOLINTBEGIN
        // symbol: ??1EnumData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~EnumData();

        // NOLINTEND
    };

    struct OverloadData {
    public:
        // prevent constructor by default
        OverloadData& operator=(OverloadData const&);
        OverloadData(OverloadData const&);
        OverloadData();

    public:
        // NOLINTBEGIN
        // symbol: ??1OverloadData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~OverloadData();

        // NOLINTEND
    };

    struct ParamData {
    public:
        // prevent constructor by default
        ParamData& operator=(ParamData const&);
        ParamData(ParamData const&);
        ParamData();

    public:
        // NOLINTBEGIN
        // symbol: ??1ParamData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~ParamData();

        // NOLINTEND
    };

    struct SoftEnumData {
    public:
        // prevent constructor by default
        SoftEnumData& operator=(SoftEnumData const&);
        SoftEnumData(SoftEnumData const&);
        SoftEnumData();

    public:
        // NOLINTBEGIN
        // symbol: ??1SoftEnumData@AvailableCommandsPacket@@QEAA@XZ
        MCAPI ~SoftEnumData();

        // NOLINTEND
    };

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

    // vIndex: 3, symbol: ?write@AvailableCommandsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@AvailableCommandsPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0AvailableCommandsPacket@@QEAA@XZ
    MCAPI AvailableCommandsPacket();

    // symbol:
    // ??0AvailableCommandsPacket@@QEAA@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@00$$QEAV?$vector@UEnumData@AvailableCommandsPacket@@V?$allocator@UEnumData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@UChainedSubcommandData@AvailableCommandsPacket@@V?$allocator@UChainedSubcommandData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@UConstrainedValueData@AvailableCommandsPacket@@V?$allocator@UConstrainedValueData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@UCommandData@AvailableCommandsPacket@@V?$allocator@UCommandData@AvailableCommandsPacket@@@std@@@2@$$QEAV?$vector@USoftEnumData@AvailableCommandsPacket@@V?$allocator@USoftEnumData@AvailableCommandsPacket@@@std@@@2@@Z
    MCAPI
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<std::string> const&, std::vector<struct AvailableCommandsPacket::EnumData>&&, std::vector<struct AvailableCommandsPacket::ChainedSubcommandData>&&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&, std::vector<struct AvailableCommandsPacket::CommandData>&&, std::vector<struct AvailableCommandsPacket::SoftEnumData>&&);

    // NOLINTEND
};
