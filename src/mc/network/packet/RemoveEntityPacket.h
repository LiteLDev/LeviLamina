#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/EntityServerPacket.h"

class RemoveEntityPacket : public ::EntityServerPacket {

public:
    // prevent constructor by default
    RemoveEntityPacket& operator=(RemoveEntityPacket const&) = delete;
    RemoveEntityPacket(RemoveEntityPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RemoveEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@RemoveEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoveEntityPacket();
#endif
    /**
     * @symbol ??0RemoveEntityPacket\@\@QEAA\@XZ
     */
    MCAPI RemoveEntityPacket();
    // NOLINTEND
};
