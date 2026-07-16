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
        ChainedSubcommandData& operator=(ChainedSubcommandData const&);
        ChainedSubcommandData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ChainedSubcommandData(::AvailableCommandsPacketPayload::ChainedSubcommandData const&);

        MCFOLD ::AvailableCommandsPacketPayload::ChainedSubcommandData&
        operator=(::AvailableCommandsPacketPayload::ChainedSubcommandData&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::AvailableCommandsPacketPayload::ChainedSubcommandData const&);
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
        EnumData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EnumData(::AvailableCommandsPacketPayload::EnumData const&);

        MCFOLD ::AvailableCommandsPacketPayload::EnumData& operator=(::AvailableCommandsPacketPayload::EnumData&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::AvailableCommandsPacketPayload::EnumData const&);
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
        CommandData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CommandData(::AvailableCommandsPacketPayload::CommandData const&);

        MCAPI ::AvailableCommandsPacketPayload::CommandData& operator=(::AvailableCommandsPacketPayload::CommandData&&);

        MCAPI ::AvailableCommandsPacketPayload::CommandData&
        operator=(::AvailableCommandsPacketPayload::CommandData const&);

        MCAPI bool operator==(::AvailableCommandsPacketPayload::CommandData const& other) const;

        MCAPI ~CommandData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::AvailableCommandsPacketPayload::CommandData const&);
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
        // member functions
        // NOLINTBEGIN
        MCFOLD bool operator==(::AvailableCommandsPacketPayload::SoftEnumData const& other) const;
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
    AvailableCommandsPacketPayload& operator=(AvailableCommandsPacketPayload const&);
    AvailableCommandsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AvailableCommandsPacketPayload(::AvailableCommandsPacketPayload const&);

    MCAPI AvailableCommandsPacketPayload(
        ::std::vector<::std::string> const&                                      enumValues,
        ::std::vector<::std::string> const&                                      chainedSubcommandValues,
        ::std::vector<::std::string> const&                                      postfixes,
        ::std::vector<::AvailableCommandsPacketPayload::EnumData>&&              enumData,
        ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandData>&& chainedSubcommandData,
        ::std::vector<::AvailableCommandsPacketPayload::ConstrainedValueData>&&  constraints,
        ::std::vector<::AvailableCommandsPacketPayload::CommandData>&&           commandData,
        ::std::vector<::AvailableCommandsPacketPayload::SoftEnumData>&&          softEnumData
    );

    MCAPI ~AvailableCommandsPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AvailableCommandsPacketPayload const&);

    MCAPI void* $ctor(
        ::std::vector<::std::string> const&                                      enumValues,
        ::std::vector<::std::string> const&                                      chainedSubcommandValues,
        ::std::vector<::std::string> const&                                      postfixes,
        ::std::vector<::AvailableCommandsPacketPayload::EnumData>&&              enumData,
        ::std::vector<::AvailableCommandsPacketPayload::ChainedSubcommandData>&& chainedSubcommandData,
        ::std::vector<::AvailableCommandsPacketPayload::ConstrainedValueData>&&  constraints,
        ::std::vector<::AvailableCommandsPacketPayload::CommandData>&&           commandData,
        ::std::vector<::AvailableCommandsPacketPayload::SoftEnumData>&&          softEnumData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
