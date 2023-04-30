/**
 * @file  AddEntityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AddEntityPacket.
 *
 */
class AddEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDENTITYPACKET
public:
    class AddEntityPacket& operator=(class AddEntityPacket const &) = delete;
    AddEntityPacket(class AddEntityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@AddEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddEntityPacket();
#endif
    /**
     * @symbol ??0AddEntityPacket\@\@QEAA\@XZ
     */
    MCAPI AddEntityPacket();

};
