/**
 * @file  DoubleTag.hpp
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
 * @brief MC class DoubleTag.
 *
 */
class DoubleTag : public Tag {

#define AFTER_EXTRA
// Add Member There
double val;

public:
    LIAPI double& value();
    LIAPI DoubleTag& operator=(double val);
    LIAPI static std::unique_ptr<DoubleTag> create(double val = 0.0);
    LIAPI bool set(double val);
    LIAPI double get();
    LIAPI operator double() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLETAG
public:
    class DoubleTag& operator=(class DoubleTag const &) = delete;
    DoubleTag(class DoubleTag const &) = delete;
    DoubleTag() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?load\@DoubleTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl 4
     * @symbol ?toString\@DoubleTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl 5
     * @symbol ?getId\@DoubleTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl 6
     * @symbol ?equals\@DoubleTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl 9
     * @symbol ?copy\@DoubleTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl 10
     * @symbol ?hash\@DoubleTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUBLETAG
    /**
     * @symbol ?write\@DoubleTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    MCVAPI void write(class IDataOutput &) const;
#endif

};
