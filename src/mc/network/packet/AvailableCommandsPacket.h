#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

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
        MCAPI CommandData(struct AvailableCommandsPacket::CommandData&&);

        MCAPI ~CommandData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct AvailableCommandsPacket::CommandData&&);

        MCAPI void dtor$();

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
        MCAPI ~ConstrainedValueData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~EnumData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~OverloadData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~ParamData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~SoftEnumData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AvailableCommandsPacket& operator=(AvailableCommandsPacket const&);
    AvailableCommandsPacket(AvailableCommandsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AvailableCommandsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AvailableCommandsPacket();

    MCAPI AvailableCommandsPacket(
        std::vector<std::string> const&                                      enumValues,
        std::vector<std::string> const&                                      chainedSubcommandValues,
        std::vector<std::string> const&                                      postfixes,
        std::vector<struct AvailableCommandsPacket::EnumData>&&              enumData,
        std::vector<struct AvailableCommandsPacket::ChainedSubcommandData>&& chainedSubcommandData,
        std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&  constraints,
        std::vector<struct AvailableCommandsPacket::CommandData>&&           commandData,
        std::vector<struct AvailableCommandsPacket::SoftEnumData>&&          softEnumData
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        std::vector<std::string> const&                                      enumValues,
        std::vector<std::string> const&                                      chainedSubcommandValues,
        std::vector<std::string> const&                                      postfixes,
        std::vector<struct AvailableCommandsPacket::EnumData>&&              enumData,
        std::vector<struct AvailableCommandsPacket::ChainedSubcommandData>&& chainedSubcommandData,
        std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&  constraints,
        std::vector<struct AvailableCommandsPacket::CommandData>&&           commandData,
        std::vector<struct AvailableCommandsPacket::SoftEnumData>&&          softEnumData
    );

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
