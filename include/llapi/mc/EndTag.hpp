/**
 * @file  EndTag.hpp
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
 * @brief MC class EndTag.
 *
 */
class EndTag : public Tag {

#define AFTER_EXTRA
// Add Member There
public:
    LLAPI nullptr_t value();
    LLAPI static std::unique_ptr<EndTag> create();
    LLAPI bool set();
    LLAPI nullptr_t get();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDTAG
public:
    class EndTag& operator=(class EndTag const &) = delete;
    EndTag(class EndTag const &) = delete;
    EndTag() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EndTag();
    /**
     * @vftbl  2
     * @symbol  ?write\@EndTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol  ?load\@EndTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol  ?toString\@EndTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol  ?getId\@EndTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol  ?equals\@EndTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol  ?copy\@EndTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol  ?hash\@EndTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;

};