/**
 * @file  LevelEventGenericPacket.hpp
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
 * @brief MC class LevelEventGenericPacket.
 *
 */
class LevelEventGenericPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTGENERICPACKET
public:
    class LevelEventGenericPacket& operator=(class LevelEventGenericPacket const &) = delete;
    LevelEventGenericPacket(class LevelEventGenericPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelEventGenericPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@LevelEventGenericPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelEventGenericPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@LevelEventGenericPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTGENERICPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelEventGenericPacket();
#endif
    /**
     * @symbol ??0LevelEventGenericPacket\@\@QEAA\@XZ
     */
    MCAPI LevelEventGenericPacket();
    /**
     * @symbol ??0LevelEventGenericPacket\@\@QEAA\@W4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI LevelEventGenericPacket(enum class LevelEvent, class CompoundTag const &);

};
