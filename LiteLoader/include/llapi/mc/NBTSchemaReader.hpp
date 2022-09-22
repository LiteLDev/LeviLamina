/**
 * @file  NBTSchemaReader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NBTSchemaReader.
 *
 */
class NBTSchemaReader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTSCHEMAREADER
public:
    class NBTSchemaReader& operator=(class NBTSchemaReader const &) = delete;
    NBTSchemaReader(class NBTSchemaReader const &) = delete;
    NBTSchemaReader() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBTSchemaReader();
    /**
     * @hash   1072041286
     * @vftbl  1
     * @symbol ?isValid@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -797108225
     * @vftbl  2
     * @symbol ?isString@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool isString() const;
    /**
     * @hash   -106490435
     * @vftbl  3
     * @symbol ?isObject@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool isObject() const;
    /**
     * @hash   275078323
     * @vftbl  4
     * @symbol ?isArray@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool isArray() const;
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @hash   651802662
     * @vftbl  14
     * @symbol ?isFloat@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool isFloat() const;
    /**
     * @hash   -2096852321
     * @vftbl  15
     * @symbol ?isDouble@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool isDouble() const;
    /**
     * @hash   -1062807808
     * @vftbl  16
     * @symbol ?asBool@NBTSchemaReader@@UEBA_NXZ
     */
    virtual bool asBool() const;
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @hash   -408777612
     * @vftbl  25
     * @symbol ?asFloat@NBTSchemaReader@@UEBAMXZ
     */
    virtual float asFloat() const;
    /**
     * @hash   2101779272
     * @vftbl  26
     * @symbol ?asDouble@NBTSchemaReader@@UEBANXZ
     */
    virtual double asDouble() const;
    /**
     * @hash   1400497369
     * @vftbl  27
     * @symbol ?asString@NBTSchemaReader@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   -1880132795
     * @vftbl  28
     * @symbol ?members@NBTSchemaReader@@UEBA_KXZ
     */
    virtual unsigned __int64 members() const;
    /**
     * @hash   -1943402558
     * @vftbl  29
     * @symbol ?length@NBTSchemaReader@@UEBA_KXZ
     */
    virtual unsigned __int64 length() const;
    /**
     * @hash   740112553
     * @vftbl  30
     * @symbol ?pushMember@NBTSchemaReader@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
     */
    virtual std::string pushMember(unsigned __int64);
    /**
     * @hash   590404303
     * @vftbl  31
     * @symbol ?pushElement@NBTSchemaReader@@UEAAX_K@Z
     */
    virtual void pushElement(unsigned __int64);
    /**
     * @hash   -430788828
     * @vftbl  32
     * @symbol ?pop@NBTSchemaReader@@UEAAXXZ
     */
    virtual void pop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTSCHEMAREADER
    /**
     * @hash   -317730148
     * @symbol ?asInt16@NBTSchemaReader@@UEBAFXZ
     */
    MCVAPI short asInt16() const;
    /**
     * @hash   1532814371
     * @symbol ?asInt32@NBTSchemaReader@@UEBAHXZ
     */
    MCVAPI int asInt32() const;
    /**
     * @hash   1474093580
     * @symbol ?asInt64@NBTSchemaReader@@UEBA_JXZ
     */
    MCVAPI __int64 asInt64() const;
    /**
     * @hash   -1556528041
     * @symbol ?asInt8@NBTSchemaReader@@UEBACXZ
     */
    MCVAPI signed char asInt8() const;
    /**
     * @hash   233676118
     * @symbol ?asUInt16@NBTSchemaReader@@UEBAGXZ
     */
    MCVAPI unsigned short asUInt16() const;
    /**
     * @hash   1925186973
     * @symbol ?asUInt32@NBTSchemaReader@@UEBAIXZ
     */
    MCVAPI unsigned int asUInt32() const;
    /**
     * @hash   -35201722
     * @symbol ?asUInt64@NBTSchemaReader@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 asUInt64() const;
    /**
     * @hash   1802163649
     * @symbol ?asUInt8@NBTSchemaReader@@UEBAEXZ
     */
    MCVAPI unsigned char asUInt8() const;
    /**
     * @hash   -1824516440
     * @symbol ?isBool@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isBool() const;
    /**
     * @hash   546155342
     * @symbol ?isInt16@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isInt16() const;
    /**
     * @hash   -1351013896
     * @symbol ?isInt32@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isInt32() const;
    /**
     * @hash   1465617127
     * @symbol ?isInt64@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isInt64() const;
    /**
     * @hash   -1677796793
     * @symbol ?isInt8@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isInt8() const;
    /**
     * @hash   -484087603
     * @symbol ?isUInt16@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isUInt16() const;
    /**
     * @hash   1913710455
     * @symbol ?isUInt32@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isUInt32() const;
    /**
     * @hash   435374182
     * @symbol ?isUInt64@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isUInt64() const;
    /**
     * @hash   -1295388440
     * @symbol ?isUInt8@NBTSchemaReader@@UEBA_NXZ
     */
    MCVAPI bool isUInt8() const;
#endif
    /**
     * @hash   -952949888
     * @symbol ??0NBTSchemaReader@@QEAA@V?$not_null@PEBVCompoundTag@@@gsl@@@Z
     */
    MCAPI NBTSchemaReader(class gsl::not_null<class CompoundTag const *>);

};