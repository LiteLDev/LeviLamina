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
    LIAPI nullptr_t value();
    LIAPI static std::unique_ptr<EndTag> create();
    LIAPI bool set();
    LIAPI nullptr_t get();

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
     * @hash   -364755152
     * @vftbl  2
     * @symbol  ?write\@EndTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   430439183
     * @vftbl  3
     * @symbol  ?load\@EndTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   1999554615
     * @vftbl  4
     * @symbol  ?toString\@EndTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -2028445396
     * @vftbl  5
     * @symbol  ?getId\@EndTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @hash   -1628995563
     * @vftbl  6
     * @symbol  ?equals\@EndTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   148017449
     * @vftbl  9
     * @symbol  ?copy\@EndTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -450883969
     * @vftbl  10
     * @symbol  ?hash\@EndTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;

};