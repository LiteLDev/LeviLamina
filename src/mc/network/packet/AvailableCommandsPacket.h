#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"

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
        std::string               name;           // 0
        std::string               description;    // 32
        struct CommandFlag        flag;           // 64
        ::CommandPermissionLevel  perm;           // 66
        std::vector<OverloadData> overloads;      // 72
        std::vector<int>          chainedOffsets; // 96
        int                       aliasEnumIndex; // 120

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
        int                enumValueIndex;
        int                enumNameIndex;
        std::vector<uchar> indices;

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
        std::string       name;
        std::vector<uint> valueIndices;

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
        std::vector<ParamData> datas;
        bool                   chained;

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
        std::string desc;
        uint        sym;
        bool        optional;
        uchar       paramOptions;

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
        std::string              name;
        std::vector<std::string> values;

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
