#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeBuff {

public:
    // prevent constructor by default
    AttributeBuff& operator=(AttributeBuff const&) = delete;
    AttributeBuff(AttributeBuff const&)            = delete;
    AttributeBuff()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isInstantaneous\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const = 0; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isSerializable\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const = 0; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?setDurationAmplifier\@AttributeBuff\@\@UEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEBUFF
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AttributeBuff(); // NOLINT
#endif
    /**
     * @symbol ?getAmount\@AttributeBuff\@\@QEBAMXZ
     */
    MCAPI float getAmount() const; // NOLINT
    /**
     * @symbol ?getId\@AttributeBuff\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getId() const; // NOLINT
    /**
     * @symbol ?getOperand\@AttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getOperand() const; // NOLINT
    /**
     * @symbol ?getType\@AttributeBuff\@\@QEBA?AW4AttributeBuffType\@\@XZ
     */
    MCAPI enum class AttributeBuffType getType() const; // NOLINT
    /**
     * @symbol ??8AttributeBuff\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeBuff const&) const; // NOLINT
    /**
     * @symbol ?setAmplificationAmount\@AttributeBuff\@\@QEAAXHM\@Z
     */
    MCAPI void setAmplificationAmount(int, float); // NOLINT
    /**
     * @symbol ?setId\@AttributeBuff\@\@QEAAX_K\@Z
     */
    MCAPI void setId(unsigned __int64); // NOLINT
    /**
     * @symbol ?setOperand\@AttributeBuff\@\@QEAAXH\@Z
     */
    MCAPI void setOperand(int); // NOLINT
    /**
     * @symbol ?setSource\@AttributeBuff\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setSource(class Actor*); // NOLINT
    /**
     * @symbol ?setValueAmplifier\@AttributeBuff\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>); // NOLINT
    /**
     * @symbol ?buffTypeToDamageCause\@AttributeBuff\@\@SA?AW4ActorDamageCause\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI static enum class ActorDamageCause buffTypeToDamageCause(enum class AttributeBuffType); // NOLINT

    // protected:
    /**
     * @symbol ??0AttributeBuff\@\@IEAA\@MHW4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, enum class AttributeBuffType); // NOLINT
    /**
     * @symbol ??0AttributeBuff\@\@IEAA\@MHAEBVActorDamageSource\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, class ActorDamageSource const&, enum class AttributeBuffType); // NOLINT

protected:
};
