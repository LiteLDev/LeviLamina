#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

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
    struct EnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>       name;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~EnumData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ChainedSubcommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                          name;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, uint>>> values;
        // NOLINTEND
    };

    struct SoftEnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                name;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> values;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SoftEnumData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ConstrainedValueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                  enumValueSymbol;
        ::ll::TypedStorage<4, 4, uint>                  enumSymbol;
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> constraints;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ConstrainedValueData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ParamData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<4, 4, uint>           parseSymbol;
        ::ll::TypedStorage<1, 1, bool>           optional;
        ::ll::TypedStorage<1, 1, uchar>          paramOptions;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ParamData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct OverloadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::ParamData>> params;
        ::ll::TypedStorage<1, 1, bool>                                                 isChaining;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~OverloadData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct CommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                          name;
        ::ll::TypedStorage<8, 32, ::std::string>                                          description;
        ::ll::TypedStorage<2, 2, ushort>                                                  flags;
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                permission;
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::OverloadData>> overloads;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>>                                    chainedSubcommandIndexes;
        ::ll::TypedStorage<4, 4, int>                                                     aliasEnum;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CommandData(::AvailableCommandsPacket::CommandData&&);

        MCAPI ~CommandData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::AvailableCommandsPacket::CommandData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mEnumValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mPostfixes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::EnumData>>              mEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::ChainedSubcommandData>> mChainedSubcommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::CommandData>>           mCommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::SoftEnumData>>          mSoftEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::ConstrainedValueData>>  mConstraints;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AvailableCommandsPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AvailableCommandsPacket();

    MCAPI AvailableCommandsPacket(
        ::std::vector<::std::string> const&                               enumValues,
        ::std::vector<::std::string> const&                               chainedSubcommandValues,
        ::std::vector<::std::string> const&                               postfixes,
        ::std::vector<::AvailableCommandsPacket::EnumData>&&              enumData,
        ::std::vector<::AvailableCommandsPacket::ChainedSubcommandData>&& chainedSubcommandData,
        ::std::vector<::AvailableCommandsPacket::ConstrainedValueData>&&  constraints,
        ::std::vector<::AvailableCommandsPacket::CommandData>&&           commandData,
        ::std::vector<::AvailableCommandsPacket::SoftEnumData>&&          softEnumData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::std::vector<::std::string> const&                               enumValues,
        ::std::vector<::std::string> const&                               chainedSubcommandValues,
        ::std::vector<::std::string> const&                               postfixes,
        ::std::vector<::AvailableCommandsPacket::EnumData>&&              enumData,
        ::std::vector<::AvailableCommandsPacket::ChainedSubcommandData>&& chainedSubcommandData,
        ::std::vector<::AvailableCommandsPacket::ConstrainedValueData>&&  constraints,
        ::std::vector<::AvailableCommandsPacket::CommandData>&&           commandData,
        ::std::vector<::AvailableCommandsPacket::SoftEnumData>&&          softEnumData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
