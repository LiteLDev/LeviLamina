/**
 * @file  MC/Int64Tag.hpp
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
 * @brief MC class Int64Tag.
 *
 */
class Int64Tag : public Tag {

#define AFTER_EXTRA
// Add Member There
int64_t val;

public:
    LIAPI int64_t& value();
    LIAPI Int64Tag& operator=(int64_t val);
    LIAPI static std::unique_ptr<Int64Tag> create(int64_t val = 0);
    LIAPI bool set(int64_t val);
    LIAPI int64_t get();
    LIAPI operator int64_t() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INT64TAG
public:
    class Int64Tag& operator=(class Int64Tag const &) = delete;
    Int64Tag(class Int64Tag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Int64Tag();
    /**
     * @hash   -939371426
     * @vftbl  2
     * @symbol ?write@Int64Tag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   -586065219
     * @vftbl  3
     * @symbol ?load@Int64Tag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   682030585
     * @vftbl  4
     * @symbol ?toString@Int64Tag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -1856382226
     * @vftbl  5
     * @symbol ?getId@Int64Tag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   8646739
     * @vftbl  6
     * @symbol ?equals@Int64Tag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   -1677434309
     * @vftbl  9
     * @symbol ?copy@Int64Tag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   79736481
     * @vftbl  10
     * @symbol ?hash@Int64Tag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   676957139
     * @symbol ??0Int64Tag@@QEAA@_J@Z
     */
    MCAPI Int64Tag(__int64);
    /**
     * @hash   838633257
     * @symbol ??0Int64Tag@@QEAA@XZ
     */
    MCAPI Int64Tag();

};