/**
 * @file  StartGamePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StartGamePacket.
 *
 */
class StartGamePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGAMEPACKET
public:
    class StartGamePacket& operator=(class StartGamePacket const &) = delete;
    StartGamePacket(class StartGamePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@StartGamePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@StartGamePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@StartGamePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@StartGamePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTGAMEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StartGamePacket();
#endif
    /**
     * @symbol ??0StartGamePacket\@\@QEAA\@VItemRegistryRef\@\@AEBVLevelSettings\@\@UActorUniqueID\@\@VActorRuntimeID\@\@W4GameType\@\@_NAEBVVec3\@\@AEBVVec2\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@8AEBVContentIdentity\@\@8AEBVBlockDefinitionGroup\@\@5VCompoundTag\@\@AEBUPlayerMovementSettings\@\@8AEBVUUID\@mce\@\@_KH_K\@Z
     */
    MCAPI StartGamePacket(class ItemRegistryRef, class LevelSettings const &, struct ActorUniqueID, class ActorRuntimeID, enum class GameType, bool, class Vec3 const &, class Vec2 const &, std::string const &, std::string const &, class ContentIdentity const &, std::string const &, class BlockDefinitionGroup const &, bool, class CompoundTag, struct PlayerMovementSettings const &, std::string const &, class mce::UUID const &, unsigned __int64, int, unsigned __int64);
    /**
     * @symbol ??0StartGamePacket\@\@QEAA\@XZ
     */
    MCAPI StartGamePacket();

};
