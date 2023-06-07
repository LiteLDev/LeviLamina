/**
 * @file  OnScreenTextureAnimationPacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@OnScreenTextureAnimationPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@OnScreenTextureAnimationPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@OnScreenTextureAnimationPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@OnScreenTextureAnimationPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSCREENTEXTUREANIMATIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnScreenTextureAnimationPacket();
#endif
    /**
     * @symbol ??0OnScreenTextureAnimationPacket\@\@QEAA\@I\@Z
     */
    MCAPI OnScreenTextureAnimationPacket(unsigned int);
    /**
     * @symbol ??0OnScreenTextureAnimationPacket\@\@QEAA\@XZ
     */
    MCAPI OnScreenTextureAnimationPacket();

};
