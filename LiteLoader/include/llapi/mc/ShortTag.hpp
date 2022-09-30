/**
 * @file  ShortTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShortTag.
 *
 */
class ShortTag : public Tag {

#define AFTER_EXTRA
// Add Member There
short val;

public:
    LIAPI short& value();
    LIAPI ShortTag& operator=(short val);
    LIAPI static std::unique_ptr<ShortTag> create(short val = 0);
    LIAPI bool set(short val);
    LIAPI short get();
    LIAPI operator short() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHORTTAG
public:
    class ShortTag& operator=(class ShortTag const &) = delete;
    ShortTag(class ShortTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShortTag();
    /**
     * @hash   -197876033
     * @vftbl  2
     * @symbol ?write@ShortTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   -1871596322
     * @vftbl  3
     * @symbol ?load@ShortTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   -327545960
     * @vftbl  4
     * @symbol ?toString@ShortTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   148881533
     * @vftbl  5
     * @symbol ?getId@ShortTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @hash   1247582932
     * @vftbl  6
     * @symbol ?equals@ShortTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   1230305338
     * @vftbl  9
     * @symbol ?copy@ShortTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -1452939120
     * @vftbl  10
     * @symbol ?hash@ShortTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   1780971946
     * @symbol ??0ShortTag@@QEAA@XZ
     */
    MCAPI ShortTag();
    /**
     * @hash   -1058370314
     * @symbol ??0ShortTag@@QEAA@F@Z
     */
    MCAPI ShortTag(short);

};