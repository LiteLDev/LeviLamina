#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkViewOwner {

public:
    // prevent constructor by default
    ChunkViewOwner& operator=(ChunkViewOwner const&) = delete;
    ChunkViewOwner()                                 = delete;

public:
    /**
     * @symbol ??0ChunkViewOwner\@\@QEAA\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI ChunkViewOwner(class NetworkIdentifier const&, enum class SubClientId); // NOLINT
    /**
     * @symbol ??0ChunkViewOwner\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ChunkViewOwner(class ChunkViewOwner const&); // NOLINT
    /**
     * @symbol ?getHash\@ChunkViewOwner\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const; // NOLINT
};
