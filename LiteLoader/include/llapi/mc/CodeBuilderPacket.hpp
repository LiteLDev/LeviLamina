/**
 * @file  CodeBuilderPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CodeBuilderPacket.
 *
 */
class CodeBuilderPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERPACKET
public:
    class CodeBuilderPacket& operator=(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CodeBuilderPacket();
    /**
     * @hash   -1093108904
     * @vftbl  1
     * @symbol  ?getId\@CodeBuilderPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -284447435
     * @vftbl  2
     * @symbol  ?getName\@CodeBuilderPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   901484370
     * @vftbl  3
     * @symbol  ?write\@CodeBuilderPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -925872190
     * @vftbl  6
     * @symbol  ?_read\@CodeBuilderPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};