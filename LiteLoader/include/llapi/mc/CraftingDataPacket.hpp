/**
 * @file  CraftingDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingDataPacket.
 *
 */
class CraftingDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGDATAPACKET
public:
    class CraftingDataPacket& operator=(class CraftingDataPacket const &) = delete;
    CraftingDataPacket(class CraftingDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftingDataPacket();
    /**
     * @hash   1342178922
     * @vftbl  1
     * @symbol ?getId@CraftingDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -419703529
     * @vftbl  2
     * @symbol ?getName@CraftingDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   862596016
     * @vftbl  3
     * @symbol ?write@CraftingDataPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1709521136
     * @vftbl  6
     * @symbol ?_read@CraftingDataPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -776033744
     * @symbol ??0CraftingDataPacket@@QEAA@XZ
     */
    MCAPI CraftingDataPacket();
    /**
     * @hash   593956178
     * @symbol ?prepareFromRecipes@CraftingDataPacket@@SA?AV?$unique_ptr@VCraftingDataPacket@@U?$default_delete@VCraftingDataPacket@@@std@@@std@@AEBVRecipes@@_N@Z
     */
    MCAPI static std::unique_ptr<class CraftingDataPacket> prepareFromRecipes(class Recipes const &, bool);

};