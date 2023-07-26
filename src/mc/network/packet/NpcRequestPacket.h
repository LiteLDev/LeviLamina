#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class NpcRequestPacket : public ::Packet {
public:
    // NpcRequestPacket inner types declare
    // clang-format off

    // clang-format on

    // NpcRequestPacket inner types define
    enum class RequestType {};

public:
    // prevent constructor by default
    NpcRequestPacket& operator=(NpcRequestPacket const&) = delete;
    NpcRequestPacket(NpcRequestPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@NpcRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@NpcRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@NpcRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@NpcRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcRequestPacket(); // NOLINT
#endif
    /**
     * @symbol ??0NpcRequestPacket\@\@QEAA\@XZ
     */
    MCAPI NpcRequestPacket(); // NOLINT
    /**
     * @symbol
     * ?getInteractText\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getInteractText() const; // NOLINT
    /**
     * @symbol
     * ?getNpcName\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getNpcName() const; // NOLINT
    /**
     * @symbol
     * ?getSceneName\@NpcRequestPacket\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getSceneName() const; // NOLINT
    /**
     * @symbol ?getSkin\@NpcRequestPacket\@\@QEBAHXZ
     */
    MCAPI int getSkin() const; // NOLINT
    /**
     * @symbol
     * ?requestSetInteractText\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string); // NOLINT
    /**
     * @symbol
     * ?requestSetName\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string); // NOLINT
    /**
     * @symbol ?requestSetSkin\@NpcRequestPacket\@\@SA?AV1\@VActorRuntimeID\@\@H\@Z
     */
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int); // NOLINT

    // private:
    /**
     * @symbol
     * ??0NpcRequestPacket\@\@AEAA\@VActorRuntimeID\@\@W4RequestType\@0\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@Z
     */
    MCAPI NpcRequestPacket(
        class ActorRuntimeID,
        enum class NpcRequestPacket::RequestType,
        std::string,
        unsigned char
    ); // NOLINT

private:
};
