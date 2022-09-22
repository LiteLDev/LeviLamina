/**
 * @file  OnScreenTextureAnimationPacket.hpp
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
 * @brief MC class OnScreenTextureAnimationPacket.
 *
 */
class OnScreenTextureAnimationPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSCREENTEXTUREANIMATIONPACKET
public:
    class OnScreenTextureAnimationPacket& operator=(class OnScreenTextureAnimationPacket const &) = delete;
    OnScreenTextureAnimationPacket(class OnScreenTextureAnimationPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OnScreenTextureAnimationPacket();
    /**
     * @hash   -1465499470
     * @vftbl  1
     * @symbol ?getId@OnScreenTextureAnimationPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1406005409
     * @vftbl  2
     * @symbol ?getName@OnScreenTextureAnimationPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -119045176
     * @vftbl  3
     * @symbol ?write@OnScreenTextureAnimationPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -419622456
     * @vftbl  6
     * @symbol ?_read@OnScreenTextureAnimationPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1838138104
     * @symbol ??0OnScreenTextureAnimationPacket@@QEAA@XZ
     */
    MCAPI OnScreenTextureAnimationPacket();
    /**
     * @hash   1257619357
     * @symbol ??0OnScreenTextureAnimationPacket@@QEAA@I@Z
     */
    MCAPI OnScreenTextureAnimationPacket(unsigned int);

};