/**
 * @file  RemoveEntityPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "EntityServerPacket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RemoveEntityPacket.
 *
 */
class RemoveEntityPacket : public EntityServerPacket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEENTITYPACKET
public:
    class RemoveEntityPacket& operator=(class RemoveEntityPacket const &) = delete;
    RemoveEntityPacket(class RemoveEntityPacket const &) = delete;
#endif

public:
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
     * @symbol ?getName\@RemoveEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
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

};
