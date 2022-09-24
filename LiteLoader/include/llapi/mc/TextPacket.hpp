/**
 * @file  TextPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

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
     * @symbol __unk_destructor_0
     */
    virtual ~TextPacket();
    /**
     * @hash   291197641
     * @vftbl  1
     * @symbol ?getId@TextPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1415217526
     * @vftbl  2
     * @symbol ?getName@TextPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1159797297
     * @vftbl  3
     * @symbol ?write@TextPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1522330737
     * @vftbl  6
     * @symbol ?_read@TextPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -390089087
     * @symbol ??0TextPacket@@QEAA@XZ
     */
    MCAPI TextPacket();
    /**
     * @hash   -482849373
     * @symbol ?createAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCAPI static class TextPacket createAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -497060925
     * @symbol ?createChat@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCAPI static class TextPacket createChat(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   149669539
     * @symbol ?createJukeboxPopup@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI static class TextPacket createJukeboxPopup(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?createRawJsonObjectAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class TextPacket createRawJsonObjectAnnouncement(std::string const &);
    /**
     * @symbol ?createRawJsonObjectMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const &);
    /**
     * @hash   -1310389829
     * @symbol ?createSystemMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class TextPacket createSystemMessage(std::string const &);
    /**
     * @hash   -166426545
     * @symbol ?createTextObjectMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCAPI static class TextPacket createTextObjectMessage(class ResolvedTextObject const &, std::string, std::string);
    /**
     * @hash   -29392663
     * @symbol ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -902571045
     * @symbol ?createTextObjectWhisperMessage@TextPacket@@SA?AV1@AEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @hash   488035299
     * @symbol ?createTranslated@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     */
    MCAPI static class TextPacket createTranslated(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1988404819
     * @symbol ?createTranslatedAnnouncement@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCAPI static class TextPacket createTranslatedAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   158282321
     * @symbol ?createWhisper@TextPacket@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    MCAPI static class TextPacket createWhisper(std::string const &, std::string const &, std::string const &, std::string const &);

//private:
    /**
     * @hash   -1989506386
     * @symbol ??0TextPacket@@AEAA@W4TextPacketType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@_N11@Z
     */
    MCAPI TextPacket(enum TextPacketType, std::string const &, std::string const &, std::vector<std::string> const &, bool, std::string const &, std::string const &);

private:

};