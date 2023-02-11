/**
 * @file  EducationSettingsPacket.hpp
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
 * @brief MC class EducationSettingsPacket.
 *
 */
class EducationSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONSETTINGSPACKET
public:
    class EducationSettingsPacket& operator=(class EducationSettingsPacket const &) = delete;
    EducationSettingsPacket(class EducationSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EducationSettingsPacket();
    /**
     * @hash   1108359691
     * @vftbl  1
     * @symbol  ?getId\@EducationSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1371460792
     * @vftbl  2
     * @symbol  ?getName\@EducationSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   709865519
     * @vftbl  3
     * @symbol  ?write\@EducationSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   5584175
     * @vftbl  6
     * @symbol  ?_read\@EducationSettingsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   40593071
     * @symbol  ??0EducationSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI EducationSettingsPacket();
    /**
     * @hash   -1064279950
     * @symbol  ??0EducationSettingsPacket\@\@QEAA\@UEducationLevelSettings\@\@\@Z
     */
    MCAPI EducationSettingsPacket(struct EducationLevelSettings);

};