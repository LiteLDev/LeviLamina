/**
 * @file  IntArrayTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class IntArrayTag.
 *
 */
class IntArrayTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    TagMemoryChunk val;

public:
    LLAPI TagMemoryChunk& value();
    LLAPI IntArrayTag& operator=(TagMemoryChunk const& val);
    LLAPI static std::unique_ptr<IntArrayTag> create();
    LLAPI static std::unique_ptr<IntArrayTag> create(TagMemoryChunk const& val);
    LLAPI static std::unique_ptr<IntArrayTag> create(int data[], size_t size);
    LLAPI bool set(TagMemoryChunk const& val);
    LLAPI TagMemoryChunk get();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTARRAYTAG
public:
    class IntArrayTag& operator=(class IntArrayTag const &) = delete;
    IntArrayTag(class IntArrayTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IntArrayTag();
    /**
     * @vftbl  2
     * @symbol  ?write\@IntArrayTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol  ?load\@IntArrayTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol  ?toString\@IntArrayTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol  ?getId\@IntArrayTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol  ?equals\@IntArrayTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol  ?copy\@IntArrayTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol  ?hash\@IntArrayTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol  ??0IntArrayTag\@\@QEAA\@XZ
     */
    MCAPI IntArrayTag();

};