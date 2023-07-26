/**
 * @file  AvailableCommandsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
    };
    struct OverloadData
    {
        std::vector<ParamData> datas;
    };
    struct CommandData
    {
        std::string name;                    //0
        std::string description;             //32
        CommandFlag flag;                    //64
        CommandPermissionLevel perm;         //66
        std::vector<OverloadData> overloads; //72
        signed int aliasIndex;               //96
    };//104
    struct SoftEnumData
    {
        std::string name;
        std::vector<std::string> values;
    };//56

std::vector<std::string> mAllEnums;//48
std::vector<std::string> mAllSuffix;//72
std::vector<EnumData> mEnumDatas;//96
std::vector<CommandData> mCommandDatas;//120
std::vector<SoftEnumData> mSoftEnums;//144
std::vector<ConstrainedValueData> mConstrainedValueDatas; //168
inline void test()
{
    static_assert(sizeof(AvailableCommandsPacket) == 192);
    static_assert(sizeof(EnumData) == 56);
    static_assert(sizeof(CommandData) == 104);
    static_assert(offsetof(CommandData, perm) == 66);
    static_assert(offsetof(AvailableCommandsPacket, mAllEnums) == 48);
    static_assert(offsetof(AvailableCommandsPacket, mAllSuffix) == 72);
    static_assert(offsetof(AvailableCommandsPacket, mConstrainedValueDatas) == 168);
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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AvailableCommandsPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@AvailableCommandsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@AvailableCommandsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@AvailableCommandsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@AvailableCommandsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0AvailableCommandsPacket\@\@QEAA\@XZ
     */
    MCAPI AvailableCommandsPacket();
    /**
     * @symbol  ??0AvailableCommandsPacket\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@0$$QEAV?$vector\@UEnumData\@AvailableCommandsPacket\@\@V?$allocator\@UEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UConstrainedValueData\@AvailableCommandsPacket\@\@V?$allocator\@UConstrainedValueData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UCommandData\@AvailableCommandsPacket\@\@V?$allocator\@UCommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@USoftEnumData\@AvailableCommandsPacket\@\@V?$allocator\@USoftEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI AvailableCommandsPacket(std::vector<std::string> const &, std::vector<std::string> const &, std::vector<struct AvailableCommandsPacket::EnumData> &&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData> &&, std::vector<struct AvailableCommandsPacket::CommandData> &&, std::vector<struct AvailableCommandsPacket::SoftEnumData> &&);

};