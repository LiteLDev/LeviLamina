/**
 * @file  Int64Tag.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~Int64Tag();
    /**
     * @vftbl  2
     * @symbol  ?write\@Int64Tag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol  ?load\@Int64Tag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol  ?toString\@Int64Tag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol  ?getId\@Int64Tag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol  ?equals\@Int64Tag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol  ?copy\@Int64Tag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol  ?hash\@Int64Tag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol  ??0Int64Tag\@\@QEAA\@_J\@Z
     */
    MCAPI Int64Tag(__int64);
    /**
     * @symbol  ??0Int64Tag\@\@QEAA\@XZ
     */
    MCAPI Int64Tag();

};