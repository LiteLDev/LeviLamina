/**
 * @file  AvailableCommandsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandFlag.hpp"
enum class CommandPermissionLevel : char;

#undef BEFORE_EXTRA

/**
 * @brief MC class AvailableCommandsPacket.
 *
 */
class AvailableCommandsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    struct EnumData
    {
        std::string name;
        std::vector<unsigned int> valueIndices;
    };//56
    struct ConstrainedValueData
    {
        int enumIndex;
        int enumNameIndex;
        std::vector<unsigned char> indices;
    };
    struct ParamData
    {
        std::string desc;
        unsigned int sym;
        bool optional;
        char paramOptions;
    };
    struct OverloadData
    {
        std::vector<ParamData> datas;
        bool chained;
    };
    struct CommandData
    {
        std::string name;                    // 0
        std::string description;             // 32
        CommandFlag flag;                    // 64
        CommandPermissionLevel perm;         // 66
        std::vector<OverloadData> overloads; // 72
        std::vector<int> chainedOffsets;     // 96
        signed int aliasIndex;               // 120
    };                                       // 128
    struct SoftEnumData
    {
        std::string name;
        std::vector<std::string> values;
    };
    struct ChainedSubcommandDataValue
    {
        unsigned int index;
        unsigned int value;
    };
    struct ChainedSubcommandData
    {
        std::string name;
        std::vector<ChainedSubcommandDataValue> valueIndices;
    };

    std::vector<std::string> mAllEnums;                       // 48
    std::vector<std::string> mAllSuffix;                      // 48+24=72
    std::vector<EnumData> mEnumDatas;                         // 48+24*2=96
    std::vector<std::string> mChainedSubcommandValues;        // 48+24*3=120
    std::vector<ChainedSubcommandData> mChainedSubcommands;   // 48+24*4=144
    std::vector<CommandData> mCommandDatas;                   // 48+24*5=168
    std::vector<SoftEnumData> mSoftEnums;                     // 48+24*6=192
    std::vector<ConstrainedValueData> mConstrainedValueDatas; // 48+24*7=216

inline void test() {
    static_assert(sizeof(AvailableCommandsPacket) == 240);
    static_assert(sizeof(EnumData) == 56);
    static_assert(sizeof(CommandData) == 128);
    static_assert(offsetof(CommandData, perm) == 66);
    static_assert(offsetof(AvailableCommandsPacket, mAllEnums) == 48);
    static_assert(offsetof(AvailableCommandsPacket, mAllSuffix) == 72);
    static_assert(offsetof(AvailableCommandsPacket, mConstrainedValueDatas) == 216);
}

public:
inline std::vector<std::string> getEnumNames()
{
    std::vector<std::string> names;
    for (auto& data : mEnumDatas) {
        names.push_back(data.name);
    }
    return names;
}
inline std::vector<std::string> getSoftEnumNames()
{
    std::vector<std::string> names;
    for (auto& data : mSoftEnums)
    {
        names.push_back(data.name);
    }
    return names;
}
inline std::vector<std::string> getEnumValues(std::string const& name)
{
    std::vector<std::string> values;
    for (auto& data : mEnumDatas)
    {
        if (data.name == name)
        {
            for (auto& index : data.valueIndices) {
                values.push_back(mAllEnums.at(index));
            }
            break;
        }
    }
    return values;
}
inline std::vector<std::string> getSoftEnumValues(std::string const& name)
{
    for (auto& data : mSoftEnums)
    {
        if (data.name == name)
            return data.values;
    }
    return {};
}


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET
public:
    class AvailableCommandsPacket& operator=(class AvailableCommandsPacket const &) = delete;
    AvailableCommandsPacket(class AvailableCommandsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AvailableCommandsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@AvailableCommandsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AvailableCommandsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@AvailableCommandsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVAILABLECOMMANDSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AvailableCommandsPacket();
#endif
    /**
     * @symbol ??0AvailableCommandsPacket\@\@QEAA\@XZ
     */
    MCAPI AvailableCommandsPacket();
    /**
     * @symbol ??0AvailableCommandsPacket\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@00$$QEAV?$vector\@UEnumData\@AvailableCommandsPacket\@\@V?$allocator\@UEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UChainedSubcommandData\@AvailableCommandsPacket\@\@V?$allocator\@UChainedSubcommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UConstrainedValueData\@AvailableCommandsPacket\@\@V?$allocator\@UConstrainedValueData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UCommandData\@AvailableCommandsPacket\@\@V?$allocator\@UCommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@USoftEnumData\@AvailableCommandsPacket\@\@V?$allocator\@USoftEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI AvailableCommandsPacket(std::vector<std::string> const &, std::vector<std::string> const &, std::vector<std::string> const &, std::vector<struct AvailableCommandsPacket::EnumData> &&, std::vector<struct AvailableCommandsPacket::ChainedSubcommandData> &&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData> &&, std::vector<struct AvailableCommandsPacket::CommandData> &&, std::vector<struct AvailableCommandsPacket::SoftEnumData> &&);

};
