/**
 * @file  PlayerSkinPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <llapi/mc/SerializedSkin.hpp>
#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerSkinPacket.
 *
 */
class PlayerSkinPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
  mce::UUID mUUID;
  SerializedSkin mSkin;
  string mLocalizedNewSkinName;
  string mLocalizedOldSkinName;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSKINPACKET
public:
    class PlayerSkinPacket& operator=(class PlayerSkinPacket const &) = delete;
    PlayerSkinPacket(class PlayerSkinPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@PlayerSkinPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@PlayerSkinPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@PlayerSkinPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@PlayerSkinPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 7
     * @symbol ?_read\@PlayerSkinPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSKINPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerSkinPacket();
#endif
    /**
     * @symbol ??0PlayerSkinPacket\@\@QEAA\@XZ
     */
    MCAPI PlayerSkinPacket();

};
