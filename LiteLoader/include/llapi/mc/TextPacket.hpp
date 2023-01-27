/**
 * @file  TextPacket.hpp
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
 * @brief MC class TextPacket.
 *
 */
class TextPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[168];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTPACKET
public:
    class TextPacket& operator=(class TextPacket const &) = delete;
    TextPacket(class TextPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TextPacket();
    /**
     * @hash   -624704551
     * @vftbl  1
     * @symbol  ?getId\@TextPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   499315334
     * @vftbl  2
     * @symbol  ?getName\@TextPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   243895105
     * @vftbl  3
     * @symbol  ?write\@TextPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   605890385
     * @vftbl  6
     * @symbol  ?_read\@TextPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1306529439
     * @symbol  ??0TextPacket\@\@QEAA\@XZ
     */
    MCAPI TextPacket();
    /**
     * @hash   -1399274349
     * @symbol  ?createAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1413485901
     * @symbol  ?createChat\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createChat(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -766755437
     * @symbol  ?createJukeboxPopup\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static class TextPacket createJukeboxPopup(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1184125851
     * @symbol  ?createRawJsonObjectAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createRawJsonObjectAnnouncement(std::string const &);
    /**
     * @hash   1082792185
     * @symbol  ?createRawJsonObjectMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const &);
    /**
     * @hash   2068813659
     * @symbol  ?createSystemMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createSystemMessage(std::string const &);
    /**
     * @hash   -1082251857
     * @symbol  ?createTextObjectMessage\@TextPacket\@\@SA?AV1\@AEBVResolvedTextObject\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class TextPacket createTextObjectMessage(class ResolvedTextObject const &, std::string, std::string);
    /**
     * @hash   -945217975
     * @symbol  ?createTextObjectWhisperMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1818396357
     * @symbol  ?createTextObjectWhisperMessage\@TextPacket\@\@SA?AV1\@AEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @hash   -427790013
     * @symbol  ?createTranslated\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static class TextPacket createTranslated(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1072502627
     * @symbol  ?createTranslatedAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createTranslatedAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -757619871
     * @symbol  ?createWhisper\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createWhisper(std::string const &, std::string const &, std::string const &, std::string const &);

//private:
    /**
     * @hash   1389020558
     * @symbol  ??0TextPacket\@\@AEAA\@W4TextPacketType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@_N11\@Z
     */
    MCAPI TextPacket(enum class TextPacketType, std::string const &, std::string const &, std::vector<std::string> const &, bool, std::string const &, std::string const &);

private:

};