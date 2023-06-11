/**
 * @file  CraftingEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NetworkItemStackDescriptor.hpp"
#include "Block.hpp"
static_assert(sizeof(NetworkItemStackDescriptor) == 96);

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingEventPacket.
 *
 */
class CraftingEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    unsigned char screenID;//48
    unsigned int craftingType;//52
    mce::UUID recipeUUID;//56
    std::vector<NetworkItemStackDescriptor> inputItems;//72
    std::vector<NetworkItemStackDescriptor> outputItems;//96

    //inline std::string toDebugString() {
    //    auto str = fmt::format("{}: screenID: {}, craftingType: {}, recipeUUID: {}, input: [",
    //        __super::toDebugString(), (int)screenID, craftingType, recipeUUID.asString());
    //    bool first = true;
    //    for (auto& item : inputItems) {
    //        str += fmt::format("{}{}", first ? "" : ", ", item.mDescriptor.getFullName());
    //        first = false;
    //    }
    //    str += "], output: [";
    //    first = true;
    //    for (auto& item : outputItems) {
    //        str += fmt::format("{}{}", first ? "" : ", ", item.mDescriptor.getRawNameId());
    //        first = false;
    //    }
    //    str += "]";
    //    return str;
    //}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGEVENTPACKET
public:
    class CraftingEventPacket& operator=(class CraftingEventPacket const &) = delete;
    CraftingEventPacket(class CraftingEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CraftingEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CraftingEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CraftingEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@CraftingEventPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CraftingEventPacket\@\@QEAA\@XZ
     */
    MCAPI CraftingEventPacket();

};
