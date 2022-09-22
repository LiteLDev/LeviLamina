/**
 * @file  ByteTag.hpp
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
 * @brief MC class ByteTag.
 *
 */
class ByteTag : public Tag {

#define AFTER_EXTRA
// Add Member There
unsigned char val;

public:
    LIAPI unsigned char& value();
    LIAPI ByteTag& operator=(unsigned char val);
    LIAPI static std::unique_ptr<ByteTag> create(unsigned char val = 0);
    LIAPI bool set(unsigned char val);
    LIAPI unsigned char get();
    LIAPI operator unsigned char() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTETAG
public:
    class ByteTag& operator=(class ByteTag const &) = delete;
    ByteTag(class ByteTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ByteTag();
    /**
     * @hash   929499331
     * @vftbl  2
     * @symbol ?write@ByteTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   1544939074
     * @vftbl  3
     * @symbol ?load@ByteTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   375453204
     * @vftbl  4
     * @symbol ?toString@ByteTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -1023232231
     * @vftbl  5
     * @symbol ?getId@ByteTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   1321365000
     * @vftbl  6
     * @symbol ?equals@ByteTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   -959890170
     * @vftbl  9
     * @symbol ?copy@ByteTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -1969971300
     * @vftbl  10
     * @symbol ?hash@ByteTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   1623694526
     * @symbol ??0ByteTag@@QEAA@XZ
     */
    MCAPI ByteTag();
    /**
     * @hash   1845814030
     * @symbol ??0ByteTag@@QEAA@E@Z
     */
    MCAPI ByteTag(unsigned char);

};