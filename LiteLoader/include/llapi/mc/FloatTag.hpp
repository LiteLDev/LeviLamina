/**
 * @file  FloatTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FloatTag.
 *
 */
class FloatTag : public Tag {

#define AFTER_EXTRA
// Add Member There
float val;

public:
    LIAPI float& value();
    LIAPI FloatTag& operator=(float val);
    LIAPI static std::unique_ptr<FloatTag> create(float val = 0.0f);
    LIAPI bool set(float val);
    LIAPI float get();
    LIAPI operator float() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATTAG
public:
    class FloatTag& operator=(class FloatTag const &) = delete;
    FloatTag(class FloatTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FloatTag();
    /**
     * @hash   1119216511
     * @vftbl  2
     * @symbol  ?write\@FloatTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   -536988306
     * @vftbl  3
     * @symbol  ?load\@FloatTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   -1372977128
     * @vftbl  4
     * @symbol  ?toString\@FloatTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   1959804141
     * @vftbl  5
     * @symbol  ?getId\@FloatTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @hash   -1260065004
     * @vftbl  6
     * @symbol  ?equals\@FloatTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   -1436181478
     * @vftbl  9
     * @symbol  ?copy\@FloatTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   781402272
     * @vftbl  10
     * @symbol  ?hash\@FloatTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   1617251786
     * @symbol  ??0FloatTag\@\@QEAA\@XZ
     */
    MCAPI FloatTag();
    /**
     * @hash   -1156365953
     * @symbol  ??0FloatTag\@\@QEAA\@M\@Z
     */
    MCAPI FloatTag(float);

};