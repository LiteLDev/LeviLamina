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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@EducationSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@EducationSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@EducationSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@EducationSettingsPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUCATIONSETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EducationSettingsPacket();
#endif
    /**
     * @symbol ??0EducationSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI EducationSettingsPacket();
    /**
     * @symbol ??0EducationSettingsPacket\@\@QEAA\@UEducationLevelSettings\@\@\@Z
     */
    MCAPI EducationSettingsPacket(struct EducationLevelSettings);

};
