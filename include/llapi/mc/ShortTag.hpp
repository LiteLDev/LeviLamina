/**
 * @file  ShortTag.hpp
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
 * @brief MC class ShortTag.
 *
 */
class ShortTag : public Tag {

#define AFTER_EXTRA
// Add Member There
short val;

public:
    LLAPI short& value();
    LLAPI ShortTag& operator=(short val);
    LLAPI static std::unique_ptr<ShortTag> create(short val = 0);
    LLAPI bool set(short val);
    LLAPI short get();
    LLAPI operator short() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHORTTAG
public:
    class ShortTag& operator=(class ShortTag const &) = delete;
    ShortTag(class ShortTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShortTag();
    /**
     * @vftbl  2
     * @symbol  ?write\@ShortTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol  ?load\@ShortTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol  ?toString\@ShortTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol  ?getId\@ShortTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol  ?equals\@ShortTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol  ?copy\@ShortTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol  ?hash\@ShortTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol  ??0ShortTag\@\@QEAA\@XZ
     */
    MCAPI ShortTag();
    /**
     * @symbol  ??0ShortTag\@\@QEAA\@F\@Z
     */
    MCAPI ShortTag(short);

};