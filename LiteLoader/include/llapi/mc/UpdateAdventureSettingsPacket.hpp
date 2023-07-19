/**
 * @file  UpdateAdventureSettingsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateAdventureSettingsPacket.
 *
 */
class UpdateAdventureSettingsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEADVENTURESETTINGSPACKET
public:
    class UpdateAdventureSettingsPacket& operator=(class UpdateAdventureSettingsPacket const &) = delete;
    UpdateAdventureSettingsPacket(class UpdateAdventureSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAdventureSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@UpdateAdventureSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAdventureSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@UpdateAdventureSettingsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEADVENTURESETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateAdventureSettingsPacket();
#endif
    /**
     * @symbol ??0UpdateAdventureSettingsPacket\@\@QEAA\@AEBUAdventureSettings\@\@\@Z
     */
    MCAPI UpdateAdventureSettingsPacket(struct AdventureSettings const &);
    /**
     * @symbol ??0UpdateAdventureSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAdventureSettingsPacket();

};
