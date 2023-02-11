/**
 * @file  GameTestResultsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestResultsPacket.
 *
 */
class GameTestResultsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTRESULTSPACKET
public:
    class GameTestResultsPacket& operator=(class GameTestResultsPacket const &) = delete;
    GameTestResultsPacket(class GameTestResultsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameTestResultsPacket();
    /**
     * @hash   -143793900
     * @vftbl  1
     * @symbol  ?getId\@GameTestResultsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1250401217
     * @vftbl  2
     * @symbol  ?getName\@GameTestResultsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1916823322
     * @vftbl  3
     * @symbol  ?write\@GameTestResultsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1894775590
     * @vftbl  6
     * @symbol  ?_read\@GameTestResultsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1713156250
     * @symbol  ??0GameTestResultsPacket\@\@QEAA\@XZ
     */
    MCAPI GameTestResultsPacket();
    /**
     * @hash   1452616078
     * @symbol  ??0GameTestResultsPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI GameTestResultsPacket(std::string const &, std::string const &, bool);

};