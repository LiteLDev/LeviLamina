/**
 * @file  TextPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PlayerCapabilities.hpp"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@TextPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@TextPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@TextPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@TextPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TextPacket();
#endif
    /**
     * @symbol ??0TextPacket\@\@QEAA\@XZ
     */
    MCAPI TextPacket();
    /**
     * @symbol ?_shouldHandleTextPacketForPlayer\@TextPacket\@\@SA?B_NAEBV1\@AEAUIPlayerData\@PlayerCapabilities\@\@AEBUISharedController\@3\@\@Z
     */
    MCAPI static bool const _shouldHandleTextPacketForPlayer(class TextPacket const &, struct PlayerCapabilities::IPlayerData &, struct PlayerCapabilities::ISharedController const &);
    /**
     * @symbol ?createAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createChat\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createChat(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createJukeboxPopup\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static class TextPacket createJukeboxPopup(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?createRawJsonObjectMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createRawJsonObjectMessage(std::string const &);
    /**
     * @symbol ?createSystemMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class TextPacket createSystemMessage(std::string const &);
    /**
     * @symbol ?createTextObjectMessage\@TextPacket\@\@SA?AV1\@AEBVResolvedTextObject\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class TextPacket createTextObjectMessage(class ResolvedTextObject const &, std::string, std::string);
    /**
     * @symbol ?createTextObjectWhisperMessage\@TextPacket\@\@SA?AV1\@AEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @symbol ?createTextObjectWhisperMessage\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI static class TextPacket createTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createTranslated\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static class TextPacket createTranslated(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?createTranslatedAnnouncement\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createTranslatedAnnouncement(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?createWhisper\@TextPacket\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    MCAPI static class TextPacket createWhisper(std::string const &, std::string const &, std::string const &, std::string const &);

};
