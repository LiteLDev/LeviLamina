/**
 * @file  MC/NBTSchemaWriter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NBTSchemaWriter.
 *
 */
class NBTSchemaWriter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTSCHEMAWRITER
public:
    class NBTSchemaWriter& operator=(class NBTSchemaWriter const &) = delete;
    NBTSchemaWriter(class NBTSchemaWriter const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBTSchemaWriter();
    /**
     * @hash   343888136
     * @vftbl  1
     * @symbol ?write@NBTSchemaWriter@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool write(std::string const &);
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   865076190
     * @vftbl  3
     * @symbol ?write@NBTSchemaWriter@@UEAA_NM@Z
     */
    virtual bool write(float);
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
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
     * @hash   -816882557
     * @vftbl  13
     * @symbol ?pushMember@NBTSchemaWriter@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool pushMember(std::string const &);
    /**
     * @hash   -1880399554
     * @vftbl  14
     * @symbol ?popMember@NBTSchemaWriter@@UEAAXXZ
     */
    virtual void popMember();
    /**
     * @hash   -940134210
     * @vftbl  15
     * @symbol ?openObject@NBTSchemaWriter@@UEAA_NXZ
     */
    virtual bool openObject();
    /**
     * @hash   -1491481180
     * @vftbl  16
     * @symbol ?openArray@NBTSchemaWriter@@UEAA_NXZ
     */
    virtual bool openArray();
    /**
     * @hash   -801791925
     * @vftbl  17
     * @symbol ?close@NBTSchemaWriter@@UEAAXXZ
     */
    virtual void close();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTSCHEMAWRITER
    /**
     * @hash   1481498889
     * @symbol ?write@NBTSchemaWriter@@UEAA_NN@Z
     */
    MCVAPI bool write(double);
    /**
     * @hash   36487840
     * @symbol ?write@NBTSchemaWriter@@UEAA_N_K@Z
     */
    MCVAPI bool write(unsigned __int64);
    /**
     * @hash   -708826315
     * @symbol ?write@NBTSchemaWriter@@UEAA_N_J@Z
     */
    MCVAPI bool write(__int64);
    /**
     * @hash   1803361144
     * @symbol ?write@NBTSchemaWriter@@UEAA_N_N@Z
     */
    MCVAPI bool write(bool);
    /**
     * @hash   -1801633383
     * @symbol ?write@NBTSchemaWriter@@UEAA_NE@Z
     */
    MCVAPI bool write(unsigned char);
    /**
     * @hash   351442112
     * @symbol ?write@NBTSchemaWriter@@UEAA_NC@Z
     */
    MCVAPI bool write(signed char);
    /**
     * @hash   -847455202
     * @symbol ?write@NBTSchemaWriter@@UEAA_NF@Z
     */
    MCVAPI bool write(short);
    /**
     * @hash   -261174711
     * @symbol ?write@NBTSchemaWriter@@UEAA_NG@Z
     */
    MCVAPI bool write(unsigned short);
    /**
     * @hash   -1848356565
     * @symbol ?write@NBTSchemaWriter@@UEAA_NH@Z
     */
    MCVAPI bool write(int);
    /**
     * @hash   1446135318
     * @symbol ?write@NBTSchemaWriter@@UEAA_NI@Z
     */
    MCVAPI bool write(unsigned int);
#endif
    /**
     * @hash   72798336
     * @symbol ??0NBTSchemaWriter@@QEAA@XZ
     */
    MCAPI NBTSchemaWriter();

//private:
    /**
     * @hash   253153412
     * @symbol ?_serializeTag@NBTSchemaWriter@@AEAA_NV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z
     */
    MCAPI bool _serializeTag(std::unique_ptr<class Tag>);

private:

};