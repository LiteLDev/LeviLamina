#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkViewOwner {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKVIEWOWNER
public:
    ChunkViewOwner& operator=(ChunkViewOwner const&) = delete;
    ChunkViewOwner()                                 = delete;
#endif

public:
    /**
     * @symbol ??0ChunkViewOwner\@\@QEAA\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI ChunkViewOwner(class NetworkIdentifier const&, enum class SubClientId);
    /**
     * @symbol ??0ChunkViewOwner\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ChunkViewOwner(class ChunkViewOwner const&);
    /**
     * @symbol ?getHash\@ChunkViewOwner\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
};
