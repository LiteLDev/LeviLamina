/**
 * @file  ChunkViewOwner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ChunkViewOwner {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKVIEWOWNER
public:
    class ChunkViewOwner& operator=(class ChunkViewOwner const &) = delete;
    ChunkViewOwner() = delete;
#endif

public:
    /**
     * @symbol ??0ChunkViewOwner\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ChunkViewOwner(class ChunkViewOwner const &);
    /**
     * @symbol ??0ChunkViewOwner\@\@QEAA\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI ChunkViewOwner(class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol ?getHash\@ChunkViewOwner\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;

};
