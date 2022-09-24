/**
 * @file  ByteArrayTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ByteArrayTag.
 *
 */
class ByteArrayTag : public Tag {

#define AFTER_EXTRA
// Add Member There
TagMemoryChunk val;

public:
    LIAPI TagMemoryChunk& value();
    LIAPI ByteArrayTag& operator=(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<ByteArrayTag> create();
    LIAPI static std::unique_ptr<ByteArrayTag> create(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<ByteArrayTag> create(char data[], size_t size);
    LIAPI bool set(TagMemoryChunk const& val);
    LIAPI TagMemoryChunk get();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTEARRAYTAG
public:
    class ByteArrayTag& operator=(class ByteArrayTag const &) = delete;
    ByteArrayTag(class ByteArrayTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ByteArrayTag();
    /**
     * @hash   -1609488630
     * @vftbl  2
     * @symbol ?write@ByteArrayTag@@UEBAXAEAVIDataOutput@@@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @hash   1691584953
     * @vftbl  3
     * @symbol ?load@ByteArrayTag@@UEAAXAEAVIDataInput@@@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @hash   1666637453
     * @vftbl  4
     * @symbol ?toString@ByteArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   1897773794
     * @vftbl  5
     * @symbol ?getId@ByteArrayTag@@UEBA?AW4Type@Tag@@XZ
     */
    virtual enum Tag::Type getId() const;
    /**
     * @hash   432225055
     * @vftbl  6
     * @symbol ?equals@ByteArrayTag@@UEBA_NAEBVTag@@@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @hash   1464087775
     * @vftbl  9
     * @symbol ?copy@ByteArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @hash   -983925099
     * @vftbl  10
     * @symbol ?hash@ByteArrayTag@@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @hash   -246577659
     * @symbol ??0ByteArrayTag@@QEAA@XZ
     */
    MCAPI ByteArrayTag();
    /**
     * @hash   53672582
     * @symbol ??0ByteArrayTag@@QEAA@UTagMemoryChunk@@@Z
     */
    MCAPI ByteArrayTag(struct TagMemoryChunk);

};