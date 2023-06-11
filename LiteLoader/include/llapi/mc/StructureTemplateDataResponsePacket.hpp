/**
 * @file  StructureTemplateDataResponsePacket.hpp
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
 * @brief MC class StructureTemplateDataResponsePacket.
 *
 */
class StructureTemplateDataResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATARESPONSEPACKET
public:
    class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket const &) = delete;
    StructureTemplateDataResponsePacket(class StructureTemplateDataResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@StructureTemplateDataResponsePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@StructureTemplateDataResponsePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@StructureTemplateDataResponsePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@StructureTemplateDataResponsePacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATEDATARESPONSEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureTemplateDataResponsePacket();
#endif
    /**
     * @symbol ??0StructureTemplateDataResponsePacket\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateDataResponsePacket();
    /**
     * @symbol ??0StructureTemplateDataResponsePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@2\@W4StructureTemplateResponseType\@\@\@Z
     */
    MCAPI StructureTemplateDataResponsePacket(std::string const &, std::unique_ptr<class CompoundTag>, enum class StructureTemplateResponseType);
    /**
     * @symbol ??4StructureTemplateDataResponsePacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StructureTemplateDataResponsePacket & operator=(class StructureTemplateDataResponsePacket &&);

};
