/**
 * @file  ByteTag.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ByteTag();
    /**
     * @vftbl  2
     * @symbol  ?write\@ByteTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol  ?load\@ByteTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol  ?toString\@ByteTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol  ?getId\@ByteTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol  ?equals\@ByteTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol  ?copy\@ByteTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol  ?hash\@ByteTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol  ??0ByteTag\@\@QEAA\@XZ
     */
    MCAPI ByteTag();
    /**
     * @symbol  ??0ByteTag\@\@QEAA\@E\@Z
     */
    MCAPI ByteTag(unsigned char);

};