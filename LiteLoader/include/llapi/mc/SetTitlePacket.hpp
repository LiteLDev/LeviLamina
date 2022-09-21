/**
 * @file  MC/SetTitlePacket.hpp
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
 * @brief MC class SetTitlePacket.
 *
 */
class SetTitlePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum class TitleType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTITLEPACKET
public:
    class SetTitlePacket& operator=(class SetTitlePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetTitlePacket();
    /**
     * @hash   1596830016
     * @vftbl  1
     * @symbol ?getId@SetTitlePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1309949933
     * @vftbl  2
     * @symbol ?getName@SetTitlePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2070479782
     * @vftbl  3
     * @symbol ?write@SetTitlePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1242486374
     * @vftbl  6
     * @symbol ?_read@SetTitlePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   2028357217
     * @symbol ??0SetTitlePacket@@QEAA@AEBV0@@Z
     */
    MCAPI SetTitlePacket(class SetTitlePacket const &);
    /**
     * @hash   1323016986
     * @symbol ??0SetTitlePacket@@QEAA@XZ
     */
    MCAPI SetTitlePacket();
    /**
     * @hash   -1657646678
     * @symbol ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBVResolvedTextObject@@@Z
     */
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType, class ResolvedTextObject const &);
    /**
     * @hash   1633281104
     * @symbol ??0SetTitlePacket@@QEAA@W4TitleType@0@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType, std::string const &);
    /**
     * @hash   1785848041
     * @symbol ??0SetTitlePacket@@QEAA@W4TitleType@0@@Z
     */
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType);
    /**
     * @hash   1259888529
     * @symbol ??0SetTitlePacket@@QEAA@HHH@Z
     */
    MCAPI SetTitlePacket(int, int, int);
    /**
     * @hash   -499608856
     * @symbol ??4SetTitlePacket@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class SetTitlePacket & operator=(class SetTitlePacket &&);

};