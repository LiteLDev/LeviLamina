/**
 * @file  NpcRequestPacket.hpp
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
 * @brief MC class NpcRequestPacket.
 *
 */
class NpcRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCREQUESTPACKET
public:
    class NpcRequestPacket& operator=(class NpcRequestPacket const &) = delete;
    NpcRequestPacket(class NpcRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@NpcRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@NpcRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@NpcRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@NpcRequestPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcRequestPacket();
#endif
    /**
     * @symbol ??0NpcRequestPacket\@\@QEAA\@XZ
     */
    MCAPI NpcRequestPacket();
    /**
     * @symbol ?getInteractText\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getInteractText() const;
    /**
     * @symbol ?getNpcName\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNpcName() const;
    /**
     * @symbol ?getSceneName\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getSceneName() const;
    /**
     * @symbol ?getSkin\@NpcRequestPacket\@\@QEBAHXZ
     */
    MCAPI int getSkin() const;
    /**
     * @symbol ?requestSetInteractText\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);
    /**
     * @symbol ?requestSetName\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);
    /**
     * @symbol ?requestSetSkin\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@H\@Z
     */
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int);

//private:
    /**
     * @symbol ??0NpcRequestPacket\@\@AEAA\@VActorRuntimeID\@\@W4RequestType\@0\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@Z
     */
    MCAPI NpcRequestPacket(class ActorRuntimeID, enum class NpcRequestPacket::RequestType, std::string, unsigned char);

private:

};
