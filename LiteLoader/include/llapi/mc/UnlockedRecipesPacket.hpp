/**
 * @file  UnlockedRecipesPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class UnlockedRecipesPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNLOCKEDRECIPESPACKET
public:
    class UnlockedRecipesPacket& operator=(class UnlockedRecipesPacket const &) = delete;
    UnlockedRecipesPacket(class UnlockedRecipesPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UnlockedRecipesPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@UnlockedRecipesPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UnlockedRecipesPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@UnlockedRecipesPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UNLOCKEDRECIPESPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UnlockedRecipesPacket();
#endif
    /**
     * @symbol ??0UnlockedRecipesPacket\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_N\@Z
     */
    MCAPI UnlockedRecipesPacket(std::vector<std::string> const &, bool);
    /**
     * @symbol ??0UnlockedRecipesPacket\@\@QEAA\@XZ
     */
    MCAPI UnlockedRecipesPacket();

};
