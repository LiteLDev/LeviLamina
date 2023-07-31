#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"

class CreativeItemEntry {

public:
    // prevent constructor by default
    CreativeItemEntry& operator=(CreativeItemEntry const&) = delete;
    CreativeItemEntry(CreativeItemEntry const&)            = delete;
    CreativeItemEntry()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CreativeItemEntry\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CreativeItemEntry(class CreativeItemEntry&&);
    /**
     * @symbol ?getCreativeNetId\@CreativeItemEntry\@\@QEBAAEBV?$TypedServerNetId\@UCreativeItemNetIdTag\@\@I$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const& getCreativeNetId() const;
    /**
     * @symbol ?getGroup\@CreativeItemEntry\@\@QEBAPEAVCreativeGroupInfo\@\@XZ
     */
    MCAPI class CreativeGroupInfo* getGroup() const;
    /**
     * @symbol ?getIndex\@CreativeItemEntry\@\@QEBAIXZ
     */
    MCAPI unsigned int getIndex() const;
    /**
     * @symbol ?getItemInstance\@CreativeItemEntry\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getItemInstance() const;
    // NOLINTEND
};
