#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

// 定义一个名为 AvailableCommandsPacket 的类，它继承自 Packet 类
// 这个数据包由服务器发送给客户端，包含了所有可供玩家使用的命令的完整定义，
// 包括命令名称、描述、权限、参数、重载形式等。客户端利用这些信息来实现命令的自动补全提示和语法校验。
class AvailableCommandsPacket : public ::Packet {
public:
    // AvailableCommandsPacket 内部类型的声明
    // clang-format off
    struct ChainedSubcommandData; // 链式子命令数据
    struct CommandData;           // 命令数据
    struct ConstrainedValueData;  // 约束值数据
    struct EnumData;              // 枚举数据
    struct OverloadData;          // 命令重载数据
    struct ParamData;             // 命令参数数据
    struct SoftEnumData;          // 软枚举数据（值是字符串，通常用于可扩展的类型）
    // clang-format on

    // AvailableCommandsPacket 内部类型的定义
    struct EnumData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>       name;   // 枚举的名称，例如 "GameMode"。
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> values; // 枚举值的索引列表，这些索引指向 AvailableCommandsPacket 顶层的 mEnumValues 列表。
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumData& operator=(EnumData const&);
        EnumData(EnumData const&);
        EnumData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI EnumData(::AvailableCommandsPacket::EnumData&&);

        MCAPI ~EnumData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::AvailableCommandsPacket::EnumData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    // 描述链式子命令的数据结构，用于像 /execute ... run ... 这样的命令
    struct ChainedSubcommandData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                          name;   // 子命令链的名称。
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uint, uint>>> values;
        // NOLINTEND
    };

    // 定义了“软”枚举，其值是字符串，而不是固定的索引。常用于可以通过行为包添加新值的类型，如实体ID。
    struct SoftEnumData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                name;   // 软枚举的名称。
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> values; // 软枚举所有可能值的字符串列表。
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

    // 描述对枚举值的约束条件
    struct ConstrainedValueData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                  enumValueSymbol; // 枚举值的符号
        ::ll::TypedStorage<4, 4, uint>                  enumSymbol;      // 枚举本身的符号
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>> constraints;   // 约束列表
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

    // 描述命令重载中的一个参数。
    struct ParamData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;        // 参数的名称，例如 "player"。
        ::ll::TypedStorage<4, 4, uint>           parseSymbol; // 参数的解析类型符号，表示这个参数是整数、字符串、目标选择器还是某个枚举等。
        ::ll::TypedStorage<1, 1, bool>           optional;    // 标记此参数是否是可选的。
        ::ll::TypedStorage<1, 1, uchar>          paramOptions; // 参数选项的位掩码。
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

    // 描述命令的一种用法，即一个“重载”。例如 /tp <target> 和 /tp <x> <y> <z> 是两个不同的重载。
    struct OverloadData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::ParamData>> params; // 该重载的所有参数列表。
        ::ll::TypedStorage<1, 1, bool>                                                 isChaining; // 是否是链式命令
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

    // 描述一个完整的命令。
    struct CommandData {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                          name;         // 命令的名称，例如 "teleport"。
        ::ll::TypedStorage<8, 32, ::std::string>                                          description;  // 命令的描述信息。
        ::ll::TypedStorage<2, 2, ushort>                                                  flags;        // 命令的标志位。
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                permission;   // 执行此命令所需的最低权限等级。
        ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::OverloadData>> overloads;    // 此命令的所有重载形式列表。
        ::ll::TypedStorage<8, 24, ::std::vector<uint>>                                    chainedSubcommandIndexes; // 链式子命令的索引。
        ::ll::TypedStorage<4, 4, int>                                                     aliasEnum;    // 如果该命令是一个别名，这里指向其原始命令的枚举。
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

public:
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mEnumValues;              // 所有普通枚举的所有可能值（字符串形式），被 EnumData 通过索引引用。
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mPostfixes;               // 所有命令参数可能的后缀列表。
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::EnumData>>              mEnums;                   // 所有普通枚举的定义列表。
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mChainedSubcommandValues; // 所有链式子命令的值。
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::ChainedSubcommandData>> mChainedSubcommands;      // 所有链式子命令的定义列表。
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::CommandData>>           mCommands;                // 核心数据：所有可用命令的定义列表。
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::SoftEnumData>>          mSoftEnums;               // 所有软枚举的定义列表。
    ::ll::TypedStorage<8, 24, ::std::vector<::AvailableCommandsPacket::ConstrainedValueData>>  mConstraints;             // 所有约束的定义列表。
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
