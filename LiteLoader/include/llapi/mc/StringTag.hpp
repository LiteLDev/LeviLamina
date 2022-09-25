/**
 * @file  StringTag.hpp
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
 * @brief MC class StringTag.
 *
 */
class StringTag : public Tag {

#define AFTER_EXTRA
// Add Member There
string val;

public:
    LIAPI std::string& value();
    LIAPI StringTag& operator=(std::string const& val);
    LIAPI static std::unique_ptr<StringTag> create(std::string val = "");
    LIAPI bool set(std::string const& val);
    LIAPI std::string get();
    LIAPI operator std::string() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRINGTAG
public:
    class StringTag& operator=(class StringTag const &) = delete;
    StringTag(class StringTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StringTag();
    /**
     * @hash   -827180134
     * @vftbl  2
     * @symbol ?write@StringTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   -109881111
     * @vftbl  3
     * @symbol ?load@StringTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   -156570067
     * @vftbl  4
     * @symbol ?toString@StringTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   31130706
     * @vftbl  5
     * @symbol ?getId@StringTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   -760685505
     * @vftbl  6
     * @symbol ?equals@StringTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   -713561153
     * @vftbl  9
     * @symbol ?copy@StringTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -1214461243
     * @vftbl  10
     * @symbol ?hash@StringTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   2078960885
     * @symbol ??0StringTag@@QEAA@XZ
     */
    MCAPI StringTag();
    /**
     * @hash   1004547758
     * @symbol ??0StringTag@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI StringTag(std::string);

};