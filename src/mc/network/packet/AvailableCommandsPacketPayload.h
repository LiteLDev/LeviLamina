#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

class AvailableCommandsPacketPayload {
public:
    // AvailableCommandsPacketPayload inner types declare
    // clang-format off
    struct ChainedSubcommandRelationship;
    struct ChainedSubcommandData;
    struct ConstrainedValueData;
    struct EnumData;
    struct ParamData;
    struct OverloadData;
    struct CommandData;
    struct SoftEnumData;
    // clang-format on

    // AvailableCommandsPacketPayload inner types define
    struct ChainedSubcommandRelationship {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> subCommandFirstValue;
        ::ll::TypedStorage<4, 4, uint> subCommandSecondValue;
        // NOLINTEND
    };

    struct ChainedSubcommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandRelationship>>
            values;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChainedSubcommandData(ChainedSubcommandData const&);
        ChainedSubcommandData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::AvailableCommandsPacketPayload::ChainedSubcommandData&
        operator=(::AvailableCommandsPacketPayload::ChainedSubcommandData&&);

        MCAPI ::AvailableCommandsPacketPayload::ChainedSubcommandData&
        operator=(::AvailableCommandsPacketPayload::ChainedSubcommandData const&);

        MCAPI bool operator==(::AvailableCommandsPacketPayload::ChainedSubcommandData const& other) const;
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
        ConstrainedValueData(ConstrainedValueData const&);
        ConstrainedValueData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::AvailableCommandsPacketPayload::ConstrainedValueData&
        operator=(::AvailableCommandsPacketPayload::ConstrainedValueData&&);

        MCAPI ::AvailableCommandsPacketPayload::ConstrainedValueData&
        operator=(::AvailableCommandsPacketPayload::ConstrainedValueData const&);

        MCAPI ~ConstrainedValueData();
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
        EnumData(EnumData const&);
        EnumData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::AvailableCommandsPacketPayload::EnumData& operator=(::AvailableCommandsPacketPayload::EnumData&&);

        MCAPI ::AvailableCommandsPacketPayload::EnumData& operator=(::AvailableCommandsPacketPayload::EnumData const&);
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
        ParamData(ParamData const&);
        ParamData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::AvailableCommandsPacketPayload::ParamData& operator=(::AvailableCommandsPacketPayload::ParamData&&);

        MCAPI ::AvailableCommandsPacketPayload::ParamData&
        operator=(::AvailableCommandsPacketPayload::ParamData const&);
        // NOLINTEND
    };

    struct OverloadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ParamData>> params;
        ::ll::TypedStorage<1, 1, bool>                                                        isChaining;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::AvailableCommandsPacketPayload::OverloadData const& other) const;
        // NOLINTEND
    };

    struct CommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                 name;
        ::ll::TypedStorage<8, 32, ::std::string>                                                 description;
        ::ll::TypedStorage<2, 2, ushort>                                                         flags;
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                       permission;
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::OverloadData>> overloads;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> chainedSubcommandIndexes;
        ::ll::TypedStorage<4, 4, int>                  aliasEnum;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommandData(CommandData const&);
        CommandData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::AvailableCommandsPacketPayload::CommandData& operator=(::AvailableCommandsPacketPayload::CommandData&&);

        MCAPI ::AvailableCommandsPacketPayload::CommandData&
        operator=(::AvailableCommandsPacketPayload::CommandData const&);

        MCAPI bool operator==(::AvailableCommandsPacketPayload::CommandData const& other) const;

        MCAPI ~CommandData();
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
        SoftEnumData(SoftEnumData const&);
        SoftEnumData();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::AvailableCommandsPacketPayload::SoftEnumData&
        operator=(::AvailableCommandsPacketPayload::SoftEnumData&&);

        MCFOLD ::AvailableCommandsPacketPayload::SoftEnumData&
        operator=(::AvailableCommandsPacketPayload::SoftEnumData const&);

        MCFOLD bool operator==(::AvailableCommandsPacketPayload::SoftEnumData const& other) const;

        MCAPI ~SoftEnumData();
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mEnumValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mPostfixes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::EnumData>> mEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandData>>
                                                                                             mChainedSubcommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::CommandData>>  mCommands;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::SoftEnumData>> mSoftEnums;
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacketPayload::ConstrainedValueData>> mConstraints;
    // NOLINTEND

public:
    // prevent constructor by default
    AvailableCommandsPacketPayload(AvailableCommandsPacketPayload const&);
    AvailableCommandsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AvailableCommandsPacketPayload& operator=(::AvailableCommandsPacketPayload const&);

    MCAPI ~AvailableCommandsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
