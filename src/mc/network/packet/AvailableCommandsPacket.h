#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
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
    struct ConstrainedValueData;
    struct EnumData;
    struct ParamData;
    struct OverloadData;
    struct CommandData;
    struct SoftEnumData;
    // clang-format on

    // AvailableCommandsPacket inner types define
    struct ChainedSubcommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                          name;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, uint>>> values;
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
        // prevent constructor by default
        ConstrainedValueData& operator=(ConstrainedValueData const&);
        ConstrainedValueData(ConstrainedValueData const&);
        ConstrainedValueData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ConstrainedValueData(::AvailableCommandsPacket::ConstrainedValueData&&);

        MCAPI ~ConstrainedValueData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::AvailableCommandsPacket::ConstrainedValueData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct EnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>       name;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> values;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumData& operator=(EnumData const&);
        EnumData(EnumData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EnumData();

        MCAPI EnumData(::AvailableCommandsPacket::EnumData&&);

        MCAPI ~EnumData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCFOLD void* $ctor(::AvailableCommandsPacket::EnumData&&);
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
        // prevent constructor by default
        ParamData& operator=(ParamData const&);
        ParamData(ParamData const&);
        ParamData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ParamData(::AvailableCommandsPacket::ParamData&&);

        MCAPI ~ParamData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::AvailableCommandsPacket::ParamData&&);
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
        // prevent constructor by default
        OverloadData& operator=(OverloadData const&);
        OverloadData(OverloadData const&);
        OverloadData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI OverloadData(::AvailableCommandsPacket::OverloadData&&);

        MCAPI ~OverloadData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::AvailableCommandsPacket::OverloadData&&);
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
        // prevent constructor by default
        CommandData& operator=(CommandData const&);
        CommandData(CommandData const&);
        CommandData();

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

    struct SoftEnumData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                name;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> values;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoftEnumData& operator=(SoftEnumData const&);
        SoftEnumData(SoftEnumData const&);
        SoftEnumData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SoftEnumData(::AvailableCommandsPacket::SoftEnumData&&);

        MCAPI ~SoftEnumData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::AvailableCommandsPacket::SoftEnumData&&);
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
    virtual ~AvailableCommandsPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
